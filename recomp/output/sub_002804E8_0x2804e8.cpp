#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002804E8
// Address: 0x2804e8 - 0x280590
void sub_002804E8_0x2804e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002804E8_0x2804e8");
#endif

    switch (ctx->pc) {
        case 0x280504u: goto label_280504;
        case 0x280520u: goto label_280520;
        case 0x280534u: goto label_280534;
        case 0x280548u: goto label_280548;
        default: break;
    }

    ctx->pc = 0x2804e8u;

    // 0x2804e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2804e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2804ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2804ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2804f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2804f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2804f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2804f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2804f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2804f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2804fc: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2804FCu;
    SET_GPR_U32(ctx, 31, 0x280504u);
    ctx->pc = 0x280500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804FCu;
    // 0x280500: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2804FCu, 0x280504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280504u;
label_280504:
    // 0x280504: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x280504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x280508: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x280508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28050c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28050cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x280510: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280510u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280514: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x280514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x280518: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x280518u;
    SET_GPR_U32(ctx, 31, 0x280520u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x280518u, 0x280520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280520u;
label_280520:
    // 0x280520: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x280520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x280524: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280524u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280528: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x280528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x28052c: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x28052Cu;
    SET_GPR_U32(ctx, 31, 0x280534u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x28052Cu, 0x280534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280534u;
label_280534:
    // 0x280534: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x280534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x280538: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28053c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x28053cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x280540: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x280540u;
    SET_GPR_U32(ctx, 31, 0x280548u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x280540u, 0x280548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280548u;
label_280548:
    // 0x280548: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x280548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x28054c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28054cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280550: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x280550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x280554: 0xac72a348  sw          $s2, -0x5CB8($v1)
    ctx->pc = 0x280554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3FA348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA348u, _value); } while (0);
    // 0x280558: 0x2462a348  addiu       $v0, $v1, -0x5CB8
    ctx->pc = 0x280558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943560));
    // 0x28055c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28055cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x280560: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x280560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3FA34Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA34Cu, _value); } while (0);
    // 0x280564: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x280564u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3FA350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA350u, _value); } while (0);
    // 0x280568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28056c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28056cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280570: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x280570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FA354u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA354u, _value); } while (0); }
    // 0x280574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x280574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x280578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28057c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28057cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x280580: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x280580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280584: 0x3e00008  jr          $ra
    ctx->pc = 0x280584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280584u;
        // 0x280588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28058Cu;
    // 0x28058c: 0x0  nop
    ctx->pc = 0x28058cu;
    // NOP
    ctx->pc = 0x280590u;
}
