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

// Function: sub_002C00B0
// Address: 0x2c00b0 - 0x2c0138
void sub_002C00B0_0x2c00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C00B0_0x2c00b0");
#endif

    switch (ctx->pc) {
        case 0x2c00d8u: goto label_2c00d8;
        case 0x2c00e8u: goto label_2c00e8;
        case 0x2c00f8u: goto label_2c00f8;
        case 0x2c0110u: goto label_2c0110;
        case 0x2c0120u: goto label_2c0120;
        default: break;
    }

    ctx->pc = 0x2c00b0u;

    // 0x2c00b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c00b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c00b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c00b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c00b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c00bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c00bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c00c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c00c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c00c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c00c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c00cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c00ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00d0: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C00D0u;
    SET_GPR_U32(ctx, 31, 0x2C00D8u);
    ctx->pc = 0x2C00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00D0u;
    // 0x2c00d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C00D0u, 0x2C00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00D8u;
label_2c00d8:
    // 0x2c00d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c00d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c00dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c00dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00e0: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C00E0u;
    SET_GPR_U32(ctx, 31, 0x2C00E8u);
    ctx->pc = 0x2C00E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00E0u;
    // 0x2c00e4: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C00E0u, 0x2C00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00E8u;
label_2c00e8:
    // 0x2c00e8: 0x82050004  lb          $a1, 0x4($s0)
    ctx->pc = 0x2c00e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c00ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c00f0: 0xc0fa356  jal         func_3E8D58
    ctx->pc = 0x2C00F0u;
    SET_GPR_U32(ctx, 31, 0x2C00F8u);
    ctx->pc = 0x2C00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00F0u;
    // 0x2c00f4: 0x2484500c  addiu       $a0, $a0, 0x500C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20492));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8D58u, 0x2C00F0u, 0x2C00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00F8u;
label_2c00f8:
    // 0x2c00f8: 0x82060004  lb          $a2, 0x4($s0)
    ctx->pc = 0x2c00f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c00fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c00fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c0100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0104: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2c0104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2c0108: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C0108u;
    SET_GPR_U32(ctx, 31, 0x2C0110u);
    ctx->pc = 0x2C010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0108u;
    // 0x2c010c: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C0108u, 0x2C0110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0110u;
label_2c0110:
    // 0x2c0110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0114: 0x26050005  addiu       $a1, $s0, 0x5
    ctx->pc = 0x2c0114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x2c0118: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C0118u;
    SET_GPR_U32(ctx, 31, 0x2C0120u);
    ctx->pc = 0x2C011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0118u;
    // 0x2c011c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C0118u, 0x2C0120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0120u;
label_2c0120:
    // 0x2c0120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c0120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c0124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c012c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C012Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C012Cu;
        // 0x2c0130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C012Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0134u;
    // 0x2c0134: 0x0  nop
    ctx->pc = 0x2c0134u;
    // NOP
    ctx->pc = 0x2c0138u;
}
