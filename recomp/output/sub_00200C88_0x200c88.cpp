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

// Function: sub_00200C88
// Address: 0x200c88 - 0x200d20
void sub_00200C88_0x200c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200C88_0x200c88");
#endif

    switch (ctx->pc) {
        case 0x200cbcu: goto label_200cbc;
        case 0x200cd0u: goto label_200cd0;
        case 0x200cf4u: goto label_200cf4;
        case 0x200d04u: goto label_200d04;
        default: break;
    }

    ctx->pc = 0x200c88u;

    // 0x200c88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200c90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x200c98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c9c: 0x9222004b  lbu         $v0, 0x4B($s1)
    ctx->pc = 0x200c9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x200ca0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x200CA0u;
    {
        const bool branch_taken_0x200ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CA0u;
        // 0x200ca4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ca0) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200CA8u;
    // 0x200ca8: 0x51600006  beql        $t3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x200CA8u;
    {
        const bool branch_taken_0x200ca8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x200ca8) {
            ctx->pc = 0x200CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200CA8u;
            // 0x200cac: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200CC4u;
            goto label_200cc4;
        }
    }
    ctx->pc = 0x200CB0u;
    // 0x200cb0: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x200cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x200cb4: 0xc081a06  jal         func_206818
    ctx->pc = 0x200CB4u;
    SET_GPR_U32(ctx, 31, 0x200CBCu);
    ctx->pc = 0x200CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CB4u;
    // 0x200cb8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206818u, 0x200CB4u, 0x200CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CBCu;
label_200cbc:
    // 0x200cbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200CBCu;
    {
        const bool branch_taken_0x200cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200cbc) {
            ctx->pc = 0x200CD0u;
            goto label_200cd0;
        }
    }
    ctx->pc = 0x200CC4u;
label_200cc4:
    // 0x200cc4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x200cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cc8: 0xc081a06  jal         func_206818
    ctx->pc = 0x200CC8u;
    SET_GPR_U32(ctx, 31, 0x200CD0u);
    ctx->pc = 0x200CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CC8u;
    // 0x200ccc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206818u, 0x200CC8u, 0x200CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CD0u;
label_200cd0:
    // 0x200cd0: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x200CD0u;
    {
        const bool branch_taken_0x200cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x200cd0) {
            ctx->pc = 0x200CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200CD0u;
            // 0x200cd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200D08u;
            goto label_200d08;
        }
    }
    ctx->pc = 0x200CD8u;
    // 0x200cd8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x200cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x200cdc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x200cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x200ce0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x200ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x200ce4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x200CE4u;
    {
        const bool branch_taken_0x200ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200ce4) {
            ctx->pc = 0x200CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200CE4u;
            // 0x200ce8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200D08u;
            goto label_200d08;
        }
    }
    ctx->pc = 0x200CECu;
    // 0x200cec: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x200CECu;
    SET_GPR_U32(ctx, 31, 0x200CF4u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x200CECu, 0x200CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CF4u;
label_200cf4:
    // 0x200cf4: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x200cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x200cf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cfc: 0xc08244a  jal         func_209128
    ctx->pc = 0x200CFCu;
    SET_GPR_U32(ctx, 31, 0x200D04u);
    ctx->pc = 0x200D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CFCu;
    // 0x200d00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209128u, 0x200CFCu, 0x200D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D04u;
label_200d04:
    // 0x200d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200d08:
    // 0x200d08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200d0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200d10: 0x3e00008  jr          $ra
    ctx->pc = 0x200D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D10u;
        // 0x200d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200D18u;
    // 0x200d18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x200d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x200d1c: 0x0  nop
    ctx->pc = 0x200d1cu;
    // NOP
    ctx->pc = 0x200d20u;
}
