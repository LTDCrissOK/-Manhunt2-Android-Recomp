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

// Function: sub_00272878
// Address: 0x272878 - 0x272948
void sub_00272878_0x272878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272878_0x272878");
#endif

    switch (ctx->pc) {
        case 0x2728a8u: goto label_2728a8;
        case 0x2728b0u: goto label_2728b0;
        case 0x2728b8u: goto label_2728b8;
        case 0x2728c4u: goto label_2728c4;
        case 0x27292cu: goto label_27292c;
        default: break;
    }

    ctx->pc = 0x272878u;

    // 0x272878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27287c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27287cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x272880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x272880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272884: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x272884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x272888: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x272888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27288c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x27288cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x272890: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x272890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x272894: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x272894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x272898: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x272898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x27289c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27289cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2728a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2728A0u;
    SET_GPR_U32(ctx, 31, 0x2728A8u);
    ctx->pc = 0x2728A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728A0u;
    // 0x2728a4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2728A0u, 0x2728A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728A8u;
label_2728a8:
    // 0x2728a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2728A8u;
    SET_GPR_U32(ctx, 31, 0x2728B0u);
    ctx->pc = 0x2728ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728A8u;
    // 0x2728ac: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2728A8u, 0x2728B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728B0u;
label_2728b0:
    // 0x2728b0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2728B0u;
    SET_GPR_U32(ctx, 31, 0x2728B8u);
    ctx->pc = 0x2728B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728B0u;
    // 0x2728b4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2728B0u, 0x2728B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728B8u;
label_2728b8:
    // 0x2728b8: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2728b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2728bc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2728BCu;
    SET_GPR_U32(ctx, 31, 0x2728C4u);
    ctx->pc = 0x2728C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728BCu;
    // 0x2728c0: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2728BCu, 0x2728C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728C4u;
label_2728c4:
    // 0x2728c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2728c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2728c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2728c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2728cc: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x2728ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2728d0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2728d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2728d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2728d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2728d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2728d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2728dc: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x2728dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2728e0: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x2728e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2728e4: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x2728e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2728e8: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x2728e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2728ec: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2728ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2728f0: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x2728f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2728f4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2728f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2728f8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2728f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2728fc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2728fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x272900: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x272900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x272904: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x272904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x272908: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x272908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x27290c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x27290cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x272910: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x272910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x272914: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x272914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x272918: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x272918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x27291c: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x27291cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x272920: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x272920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x272924: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x272924u;
    SET_GPR_U32(ctx, 31, 0x27292Cu);
    ctx->pc = 0x272928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272924u;
    // 0x272928: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x272924u, 0x27292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27292Cu;
label_27292c:
    // 0x27292c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27292cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272930: 0xa20000c4  sb          $zero, 0xC4($s0)
    ctx->pc = 0x272930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x272934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x272934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272938: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x272938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27293c: 0x3e00008  jr          $ra
    ctx->pc = 0x27293Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27293Cu;
        // 0x272940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27293Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272944u;
    // 0x272944: 0x0  nop
    ctx->pc = 0x272944u;
    // NOP
    ctx->pc = 0x272948u;
}
