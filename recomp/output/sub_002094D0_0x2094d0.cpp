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

// Function: sub_002094D0
// Address: 0x2094d0 - 0x209530
void sub_002094D0_0x2094d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002094D0_0x2094d0");
#endif

    switch (ctx->pc) {
        case 0x20951cu: goto label_20951c;
        case 0x209524u: goto label_209524;
        default: break;
    }

    ctx->pc = 0x2094d0u;

    // 0x2094d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2094d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2094d4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2094d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2094d8: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x2094d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x2094dc: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x2094dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x2094e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2094e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2094e4: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x2094e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x2094e8: 0x2444bcd0  addiu       $a0, $v0, -0x4330
    ctx->pc = 0x2094e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950096));
    // 0x2094ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2094ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2094f0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2094f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2094f4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2094f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2094f8: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x2094f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x2094fc: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x2094fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x209500: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x209500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x209504: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x209504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x209508: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x209508u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x20950c: 0xe7ae004c  swc1        $f14, 0x4C($sp)
    ctx->pc = 0x20950cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x209510: 0xe7b00050  swc1        $f16, 0x50($sp)
    ctx->pc = 0x209510u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x209514: 0xc0f0258  jal         func_3C0960
    ctx->pc = 0x209514u;
    SET_GPR_U32(ctx, 31, 0x20951Cu);
    ctx->pc = 0x209518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209514u;
    // 0x209518: 0xe7b20054  swc1        $f18, 0x54($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0960u, 0x209514u, 0x20951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20951Cu;
label_20951c:
    // 0x20951c: 0xc0f02b2  jal         func_3C0AC8
    ctx->pc = 0x20951Cu;
    SET_GPR_U32(ctx, 31, 0x209524u);
    ctx->pc = 0x209520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20951Cu;
    // 0x209520: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0AC8u, 0x20951Cu, 0x209524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209524u;
label_209524:
    // 0x209524: 0x0  nop
    ctx->pc = 0x209524u;
    // NOP
    // 0x209528: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20952c: 0x0  nop
    ctx->pc = 0x20952cu;
    // NOP
    ctx->pc = 0x209530u;
}
