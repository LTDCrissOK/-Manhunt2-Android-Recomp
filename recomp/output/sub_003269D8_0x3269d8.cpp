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

// Function: sub_003269D8
// Address: 0x3269d8 - 0x326a48
void sub_003269D8_0x3269d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003269D8_0x3269d8");
#endif

    ctx->pc = 0x3269d8u;

    // 0x3269d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3269d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3269dc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3269dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3269e0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3269E0u;
    {
        const bool branch_taken_0x3269e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3269e0) {
            ctx->pc = 0x326A40u;
            goto label_326a40;
        }
    }
    ctx->pc = 0x3269E8u;
    // 0x3269e8: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x3269e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3269ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3269ECu;
    {
        const bool branch_taken_0x3269ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269ECu;
        // 0x3269f0: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269ec) {
            ctx->pc = 0x326A40u;
            goto label_326a40;
        }
    }
    ctx->pc = 0x3269F4u;
    // 0x3269f4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3269f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3269f8: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x3269f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
    // 0x3269fc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3269fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326a00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x326a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x326a04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x326a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x326a08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x326a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x326a0c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x326a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x326a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x326a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326a14: 0x0  nop
    ctx->pc = 0x326a14u;
    // NOP
    // 0x326a18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x326a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x326a1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x326a1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x326a20: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x326a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x326a24: 0x0  nop
    ctx->pc = 0x326a24u;
    // NOP
    // 0x326a28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x326A28u;
    {
        const bool branch_taken_0x326a28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x326A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A28u;
        // 0x326a2c: 0xe4a00014  swc1        $f0, 0x14($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a28) {
            ctx->pc = 0x326A40u;
            goto label_326a40;
        }
    }
    ctx->pc = 0x326A30u;
    // 0x326a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326a34: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x326a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x326a38: 0xa0a20011  sb          $v0, 0x11($a1)
    ctx->pc = 0x326a38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x326a3c: 0xa0a00010  sb          $zero, 0x10($a1)
    ctx->pc = 0x326a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 0));
label_326a40:
    // 0x326a40: 0x3e00008  jr          $ra
    ctx->pc = 0x326A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326A48u;
}
