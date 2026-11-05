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

// Function: sub_0012FF98
// Address: 0x12ff98 - 0x130030
void sub_0012FF98_0x12ff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FF98_0x12ff98");
#endif

    switch (ctx->pc) {
        case 0x12ffc4u: goto label_12ffc4;
        case 0x12ffe0u: goto label_12ffe0;
        case 0x12ffe8u: goto label_12ffe8;
        case 0x130014u: goto label_130014;
        default: break;
    }

    ctx->pc = 0x12ff98u;

    // 0x12ff98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ff98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ff9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ffa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ffa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12ffa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ffac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12ffacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12ffb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ffb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FFB4u;
    {
        const bool branch_taken_0x12ffb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFB4u;
        // 0x12ffb8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffb4) {
            ctx->pc = 0x12FFC4u;
            goto label_12ffc4;
        }
    }
    ctx->pc = 0x12FFBCu;
    // 0x12ffbc: 0xc04c01e  jal         func_130078
    ctx->pc = 0x12FFBCu;
    SET_GPR_U32(ctx, 31, 0x12FFC4u);
    ctx->pc = 0x130078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130078u, 0x12FFBCu, 0x12FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFC4u;
label_12ffc4:
    // 0x12ffc4: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x12ffc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12ffc8: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x12ffc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x12ffcc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ffd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12FFD0u;
    {
        const bool branch_taken_0x12ffd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFD0u;
        // 0x12ffd4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffd0) {
            ctx->pc = 0x12FFF8u;
            goto label_12fff8;
        }
    }
    ctx->pc = 0x12FFD8u;
    // 0x12ffd8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ffdc: 0x0  nop
    ctx->pc = 0x12ffdcu;
    // NOP
label_12ffe0:
    // 0x12ffe0: 0xc0f6ef0  jal         func_3DBBC0
    ctx->pc = 0x12FFE0u;
    SET_GPR_U32(ctx, 31, 0x12FFE8u);
    ctx->pc = 0x12FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FFE0u;
    // 0x12ffe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBBC0u, 0x12FFE0u, 0x12FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFE8u;
label_12ffe8:
    // 0x12ffe8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ffec: 0x0  nop
    ctx->pc = 0x12ffecu;
    // NOP
    // 0x12fff0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12FFF0u;
    {
        const bool branch_taken_0x12fff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fff0) {
            ctx->pc = 0x12FFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FFF0u;
            // 0x12fff4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FFF8u;
label_12fff8:
    // 0x12fff8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12fffc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x130000: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x130000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x130004: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x130004u;
    {
        const bool branch_taken_0x130004 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130004u;
        // 0x130008: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130004) {
            ctx->pc = 0x130014u;
            goto label_130014;
        }
    }
    ctx->pc = 0x13000Cu;
    // 0x13000c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x13000Cu;
    SET_GPR_U32(ctx, 31, 0x130014u);
    ctx->pc = 0x130010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13000Cu;
    // 0x130010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x13000Cu, 0x130014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130014u;
label_130014:
    // 0x130014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13001c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13001cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130020: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x130020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130024: 0x3e00008  jr          $ra
    ctx->pc = 0x130024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130024u;
        // 0x130028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13002Cu;
    // 0x13002c: 0x0  nop
    ctx->pc = 0x13002cu;
    // NOP
    ctx->pc = 0x130030u;
}
