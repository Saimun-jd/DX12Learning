#if defined(DEBUG) || defined(_DEBUG)
// Enable D3D12 debug layer
{
  ComPtr<ID3D12Debug> debugController;
  ThrowIfFailed(D3D12GetDebugInterface(IID_PPV_ARGS(&debugController->EnableDebugLayer())));
}
#endif

ThrowIfFailed(CreateDXGIFactory1(IID_PPV_ARGS(&mdxgiFactory)));

