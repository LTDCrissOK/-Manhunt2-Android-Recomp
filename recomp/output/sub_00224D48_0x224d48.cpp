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

// Function: sub_00224D48
// Address: 0x224d48 - 0x224dd0
void sub_00224D48_0x224d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224D48_0x224d48");
#endif

    switch (ctx->pc) {
        case 0x224d70u: goto label_224d70;
        case 0x224d78u: goto label_224d78;
        case 0x224d80u: goto label_224d80;
        default: break;
    }

    ctx->pc = 0x224d48u;

    // 0x224d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224d4c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x224d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x224d50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224d54: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x224d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x224d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x224d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x224d60: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x224d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x224d64: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x224d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x224d68: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x224D68u;
    SET_GPR_U32(ctx, 31, 0x224D70u);
    ctx->pc = 0x224D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D68u;
    // 0x224d6c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x224D68u, 0x224D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D70u;
label_224d70:
    // 0x224d70: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x224D70u;
    SET_GPR_U32(ctx, 31, 0x224D78u);
    ctx->pc = 0x224D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D70u;
    // 0x224d74: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x224D70u, 0x224D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D78u;
label_224d78:
    // 0x224d78: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x224D78u;
    SET_GPR_U32(ctx, 31, 0x224D80u);
    ctx->pc = 0x224D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D78u;
    // 0x224d7c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x224D78u, 0x224D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D80u;
label_224d80:
    // 0x224d80: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x224d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x224d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224d88: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x224d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x224d8c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x224d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x224d90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d94: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x224d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x224d98: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x224d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x224d9c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x224d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x224da0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x224da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x224da4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x224da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x224da8: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x224da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x224dac: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x224dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x224db0: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x224db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x224db4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x224db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x224db8: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x224db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x224dbc: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x224dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x224dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224dc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x224dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x224DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DC8u;
        // 0x224dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224DD0u;
}
