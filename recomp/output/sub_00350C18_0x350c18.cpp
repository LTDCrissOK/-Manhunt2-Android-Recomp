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

// Function: sub_00350C18
// Address: 0x350c18 - 0x350ca8
void sub_00350C18_0x350c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350C18_0x350c18");
#endif

    switch (ctx->pc) {
        case 0x350c48u: goto label_350c48;
        case 0x350c50u: goto label_350c50;
        default: break;
    }

    ctx->pc = 0x350c18u;

    // 0x350c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350c1c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x350c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x350c20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x350c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x350c24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x350c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x350c28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x350c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x350c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x350c30: 0x2444be80  addiu       $a0, $v0, -0x4180
    ctx->pc = 0x350c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950528));
    // 0x350c34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x350c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x350c38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x350c38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BBE84u));
    // 0x350c3c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x350c3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5BBE8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE8Cu, _value); } while (0);
    // 0x350c40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x350C40u;
    {
        const bool branch_taken_0x350c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C40u;
        // 0x350c44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c40) {
            ctx->pc = 0x350C5Cu;
            goto label_350c5c;
        }
    }
    ctx->pc = 0x350C48u;
label_350c48:
    // 0x350c48: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x350C48u;
    SET_GPR_U32(ctx, 31, 0x350C50u);
    ctx->pc = 0x350C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350C48u;
    // 0x350c4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x350C48u, 0x350C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C50u;
label_350c50:
    // 0x350c50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x350c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x350c54: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x350C54u;
    {
        const bool branch_taken_0x350c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C54u;
        // 0x350c58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c54) {
            ctx->pc = 0x350C8Cu;
            goto label_350c8c;
        }
    }
    ctx->pc = 0x350C5Cu;
label_350c5c:
    // 0x350c5c: 0x2623be80  addiu       $v1, $s1, -0x4180
    ctx->pc = 0x350c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950528));
    // 0x350c60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x350c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x350c64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x350C64u;
    {
        const bool branch_taken_0x350c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C64u;
        // 0x350c68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c64) {
            ctx->pc = 0x350C70u;
            goto label_350c70;
        }
    }
    ctx->pc = 0x350C6Cu;
    // 0x350c6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x350c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_350c70:
    // 0x350c70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350C70u;
    {
        const bool branch_taken_0x350c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C70u;
        // 0x350c74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c70) {
            ctx->pc = 0x350C80u;
            goto label_350c80;
        }
    }
    ctx->pc = 0x350C78u;
    // 0x350c78: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x350c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x350c7c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x350c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_350c80:
    // 0x350c80: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x350C80u;
    {
        const bool branch_taken_0x350c80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x350C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C80u;
        // 0x350c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c80) {
            ctx->pc = 0x350C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350c48;
        }
    }
    ctx->pc = 0x350C88u;
    // 0x350c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350c8c:
    // 0x350c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350c90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350c94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350c98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x350c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x350C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C9Cu;
        // 0x350ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350CA4u;
    // 0x350ca4: 0x0  nop
    ctx->pc = 0x350ca4u;
    // NOP
    ctx->pc = 0x350ca8u;
}
