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

// Function: sub_002C0000
// Address: 0x2c0000 - 0x2c0060
void sub_002C0000_0x2c0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0000_0x2c0000");
#endif

    switch (ctx->pc) {
        case 0x2c0008u: goto label_2c0008;
        case 0x2c0014u: goto label_2c0014;
        case 0x2c0020u: goto label_2c0020;
        case 0x2c002cu: goto label_2c002c;
        case 0x2c0038u: goto label_2c0038;
        case 0x2c0044u: goto label_2c0044;
        default: break;
    }

    ctx->pc = 0x2c0000u;

    // 0x2c0000: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2C0000u;
    SET_GPR_U32(ctx, 31, 0x2C0008u);
    ctx->pc = 0x2C0004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0000u;
    // 0x2c0004: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2C0000u, 0x2C0008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0008u;
label_2c0008:
    // 0x2c0008: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2c0008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c000c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2C000Cu;
    SET_GPR_U32(ctx, 31, 0x2C0014u);
    ctx->pc = 0x2C0010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C000Cu;
    // 0x2c0010: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2C000Cu, 0x2C0014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0014u;
label_2c0014:
    // 0x2c0014: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x2c0014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c0018: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2C0018u;
    SET_GPR_U32(ctx, 31, 0x2C0020u);
    ctx->pc = 0x2C001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0018u;
    // 0x2c001c: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2C0018u, 0x2C0020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0020u;
label_2c0020:
    // 0x2c0020: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x2c0020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c0024: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2C0024u;
    SET_GPR_U32(ctx, 31, 0x2C002Cu);
    ctx->pc = 0x2C0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0024u;
    // 0x2c0028: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2C0024u, 0x2C002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C002Cu;
label_2c002c:
    // 0x2c002c: 0xc7ac000c  lwc1        $f12, 0xC($sp)
    ctx->pc = 0x2c002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c0030: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2C0030u;
    SET_GPR_U32(ctx, 31, 0x2C0038u);
    ctx->pc = 0x2C0034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0030u;
    // 0x2c0034: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2C0030u, 0x2C0038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0038u;
label_2c0038:
    // 0x2c0038: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x2c0038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c003c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2C003Cu;
    SET_GPR_U32(ctx, 31, 0x2C0044u);
    ctx->pc = 0x2C0040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C003Cu;
    // 0x2c0040: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2C003Cu, 0x2C0044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0044u;
label_2c0044:
    // 0x2c0044: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2c0044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2c0048: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2c0048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c004c: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x2c004cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0050: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c0050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0054: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c0054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c0058: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0058u;
        // 0x2c005c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0060u;
}
