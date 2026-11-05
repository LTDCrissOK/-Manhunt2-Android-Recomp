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

// Function: sub_0025AFF0
// Address: 0x25aff0 - 0x25b090
void sub_0025AFF0_0x25aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AFF0_0x25aff0");
#endif

    switch (ctx->pc) {
        case 0x25b010u: goto label_25b010;
        case 0x25b018u: goto label_25b018;
        case 0x25b024u: goto label_25b024;
        default: break;
    }

    ctx->pc = 0x25aff0u;

    // 0x25aff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25aff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25aff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25aff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25aff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25affc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25affcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25b000: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25b000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b008: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25B008u;
    SET_GPR_U32(ctx, 31, 0x25B010u);
    ctx->pc = 0x25B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B008u;
    // 0x25b00c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25B008u, 0x25B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B010u;
label_25b010:
    // 0x25b010: 0xc0f7e2e  jal         func_3DF8B8
    ctx->pc = 0x25B010u;
    SET_GPR_U32(ctx, 31, 0x25B018u);
    ctx->pc = 0x3DF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF8B8u, 0x25B010u, 0x25B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B018u;
label_25b018:
    // 0x25b018: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x25b018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x25b01c: 0xc0f7e32  jal         func_3DF8C8
    ctx->pc = 0x25B01Cu;
    SET_GPR_U32(ctx, 31, 0x25B024u);
    ctx->pc = 0x25B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B01Cu;
    // 0x25b020: 0xac622bac  sw          $v0, 0x2BAC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 11180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF8C8u, 0x25B01Cu, 0x25B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B024u;
label_25b024:
    // 0x25b024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b02c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x25b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x25b030: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x25b030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x25b034: 0x24635b60  addiu       $v1, $v1, 0x5B60
    ctx->pc = 0x25b034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23392));
    // 0x25b038: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x25b038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x25b03c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x25b040: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x25b040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x25b044: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x25b044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x25b048: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x25b048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x25b04c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x25b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x25b050: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x25b050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x25b054: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x25b054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B60u));
    // 0x25b058: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x25b058u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25b05c: 0xc6200374  lwc1        $f0, 0x374($s1)
    ctx->pc = 0x25b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b064: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x25b064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x25b068: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x25b068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x25b06c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25b06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25b070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25b074: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25b074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25b078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b07c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x25b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x25b080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25b080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b084: 0x3e00008  jr          $ra
    ctx->pc = 0x25B084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B084u;
        // 0x25b088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B08Cu;
    // 0x25b08c: 0x0  nop
    ctx->pc = 0x25b08cu;
    // NOP
    ctx->pc = 0x25b090u;
}
