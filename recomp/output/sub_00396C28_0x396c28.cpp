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

// Function: sub_00396C28
// Address: 0x396c28 - 0x396d68
void sub_00396C28_0x396c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396C28_0x396c28");
#endif

    switch (ctx->pc) {
        case 0x396c90u: goto label_396c90;
        case 0x396ca4u: goto label_396ca4;
        case 0x396cc0u: goto label_396cc0;
        case 0x396cd0u: goto label_396cd0;
        case 0x396ce4u: goto label_396ce4;
        case 0x396cf8u: goto label_396cf8;
        case 0x396d10u: goto label_396d10;
        case 0x396d1cu: goto label_396d1c;
        default: break;
    }

    ctx->pc = 0x396c28u;

    // 0x396c28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x396c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x396c2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x396c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x396c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x396c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396c34: 0x244619b8  addiu       $a2, $v0, 0x19B8
    ctx->pc = 0x396c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6584));
    // 0x396c38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x396c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x396c3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x396c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x396c40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x396c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x396c44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x396c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x396c48: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x396c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x396c4c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x396c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x396c50: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x396c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x396c54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x396c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x396c58: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x396c58u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4019B8u));
    // 0x396c5c: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x396C5Cu;
    {
        const bool branch_taken_0x396c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x396C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C5Cu;
        // 0x396c60: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396c5c) {
            ctx->pc = 0x396D28u;
            goto label_396d28;
        }
    }
    ctx->pc = 0x396C64u;
    // 0x396c64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x396c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x396c68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x396c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x396c6c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x396c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x396c70: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x396c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x396c74: 0x24541940  addiu       $s4, $v0, 0x1940
    ctx->pc = 0x396c74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
    // 0x396c78: 0x24731914  addiu       $s3, $v1, 0x1914
    ctx->pc = 0x396c78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 6420));
    // 0x396c7c: 0x24921904  addiu       $s2, $a0, 0x1904
    ctx->pc = 0x396c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 6404));
    // 0x396c80: 0x24b719e8  addiu       $s7, $a1, 0x19E8
    ctx->pc = 0x396c80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 6632));
    // 0x396c84: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x396c84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396c88: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x396c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396c8c: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x396c8cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_396c90:
    // 0x396c90: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x396c90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x396c94: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x396c94u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x396c98: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x396c98u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x396c9c: 0xc0eb444  jal         func_3AD110
    ctx->pc = 0x396C9Cu;
    SET_GPR_U32(ctx, 31, 0x396CA4u);
    ctx->pc = 0x396CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396C9Cu;
    // 0x396ca0: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD110u, 0x396C9Cu, 0x396CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396CA4u;
label_396ca4:
    // 0x396ca4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x396ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x396ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396cac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x396cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x396cb0: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x396CB0u;
    {
        const bool branch_taken_0x396cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x396cb0) {
            ctx->pc = 0x396CC0u;
            goto label_396cc0;
        }
    }
    ctx->pc = 0x396CB8u;
    // 0x396cb8: 0xc0e5b82  jal         func_396E08
    ctx->pc = 0x396CB8u;
    SET_GPR_U32(ctx, 31, 0x396CC0u);
    ctx->pc = 0x396CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396CB8u;
    // 0x396cbc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E08u, 0x396CB8u, 0x396CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396CC0u;
label_396cc0:
    // 0x396cc0: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x396CC0u;
    {
        const bool branch_taken_0x396cc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x396cc0) {
            ctx->pc = 0x396D1Cu;
            goto label_396d1c;
        }
    }
    ctx->pc = 0x396CC8u;
    // 0x396cc8: 0xc0e5c4e  jal         func_397138
    ctx->pc = 0x396CC8u;
    SET_GPR_U32(ctx, 31, 0x396CD0u);
    ctx->pc = 0x397138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397138u, 0x396CC8u, 0x396CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396CD0u;
label_396cd0:
    // 0x396cd0: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x396CD0u;
    {
        const bool branch_taken_0x396cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x396CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CD0u;
        // 0x396cd4: 0x26b01970  addiu       $s0, $s5, 0x1970 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 6512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396cd0) {
            ctx->pc = 0x396CF8u;
            goto label_396cf8;
        }
    }
    ctx->pc = 0x396CD8u;
    // 0x396cd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x396cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396cdc: 0xc0e5b88  jal         func_396E20
    ctx->pc = 0x396CDCu;
    SET_GPR_U32(ctx, 31, 0x396CE4u);
    ctx->pc = 0x396E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E20u, 0x396CDCu, 0x396CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396CE4u;
label_396ce4:
    // 0x396ce4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x396ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396ce8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x396CE8u;
    {
        const bool branch_taken_0x396ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x396ce8) {
            ctx->pc = 0x396CF8u;
            goto label_396cf8;
        }
    }
    ctx->pc = 0x396CF0u;
    // 0x396cf0: 0xc0e5b6e  jal         func_396DB8
    ctx->pc = 0x396CF0u;
    SET_GPR_U32(ctx, 31, 0x396CF8u);
    ctx->pc = 0x396CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396CF0u;
    // 0x396cf4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396DB8u, 0x396CF0u, 0x396CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396CF8u;
label_396cf8:
    // 0x396cf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x396cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x396cfc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x396cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396d00: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x396D00u;
    {
        const bool branch_taken_0x396d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x396d00) {
            ctx->pc = 0x396D14u;
            goto label_396d14;
        }
    }
    ctx->pc = 0x396D08u;
    // 0x396d08: 0xc0e5e82  jal         func_397A08
    ctx->pc = 0x396D08u;
    SET_GPR_U32(ctx, 31, 0x396D10u);
    ctx->pc = 0x397A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A08u, 0x396D08u, 0x396D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396D10u;
label_396d10:
    // 0x396d10: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x396d10u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_396d14:
    // 0x396d14: 0xc0e5b82  jal         func_396E08
    ctx->pc = 0x396D14u;
    SET_GPR_U32(ctx, 31, 0x396D1Cu);
    ctx->pc = 0x396E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E08u, 0x396D14u, 0x396D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396D1Cu;
label_396d1c:
    // 0x396d1c: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x396d1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x396d20: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x396D20u;
    {
        const bool branch_taken_0x396d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D20u;
        // 0x396d24: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d20) {
            ctx->pc = 0x396C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396c90;
        }
    }
    ctx->pc = 0x396D28u;
label_396d28:
    // 0x396d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396d2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x396d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x396d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x396d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396d38: 0x244219c0  addiu       $v0, $v0, 0x19C0
    ctx->pc = 0x396d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6592));
    // 0x396d3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x396d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x396d40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x396d40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396d44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x396d44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x396d48: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x396d48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396d4c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x396d4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x396d50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x396d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x396d54: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x396d54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x396d58: 0x80f25f8  j           func_3C97E0
    ctx->pc = 0x396D58u;
    ctx->pc = 0x396D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396D58u;
    // 0x396d5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97E0u, 0x396D58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x396D60u;
    // 0x396d60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x396d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x396d64: 0x0  nop
    ctx->pc = 0x396d64u;
    // NOP
    ctx->pc = 0x396d68u;
}
