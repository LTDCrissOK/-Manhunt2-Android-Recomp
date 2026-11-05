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

// Function: sub_003AB740
// Address: 0x3ab740 - 0x3ab828
void sub_003AB740_0x3ab740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB740_0x3ab740");
#endif

    switch (ctx->pc) {
        case 0x3ab778u: goto label_3ab778;
        case 0x3ab810u: goto label_3ab810;
        default: break;
    }

    ctx->pc = 0x3ab740u;

    // 0x3ab740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab744: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x3ab744u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x3ab748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ab74c: 0x250319b0  addiu       $v1, $t0, 0x19B0
    ctx->pc = 0x3ab74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6576));
    // 0x3ab750: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ab750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ab754: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3ab754u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab758: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3ab758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab75c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3ab75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab760: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x3ab760u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4219B4u));
    // 0x3ab764: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3AB764u;
    {
        const bool branch_taken_0x3ab764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB764u;
        // 0x3ab768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab764) {
            ctx->pc = 0x3AB79Cu;
            goto label_3ab79c;
        }
    }
    ctx->pc = 0x3AB76Cu;
    // 0x3ab76c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ab76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3ab770: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ab770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ab774: 0x0  nop
    ctx->pc = 0x3ab774u;
    // NOP
label_3ab778:
    // 0x3ab778: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x3ab778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3ab77c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AB77Cu;
    {
        const bool branch_taken_0x3ab77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB77Cu;
        // 0x3ab780: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab77c) {
            ctx->pc = 0x3AB79Cu;
            goto label_3ab79c;
        }
    }
    ctx->pc = 0x3AB784u;
    // 0x3ab784: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3ab784u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ab788: 0x0  nop
    ctx->pc = 0x3ab788u;
    // NOP
    // 0x3ab78c: 0x0  nop
    ctx->pc = 0x3ab78cu;
    // NOP
    // 0x3ab790: 0x0  nop
    ctx->pc = 0x3ab790u;
    // NOP
    // 0x3ab794: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3AB794u;
    {
        const bool branch_taken_0x3ab794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab794) {
            ctx->pc = 0x3AB798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB794u;
            // 0x3ab798: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab778;
        }
    }
    ctx->pc = 0x3AB79Cu;
label_3ab79c:
    // 0x3ab79c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3ab79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3ab7a0: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3AB7A0u;
    {
        const bool branch_taken_0x3ab7a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7A0u;
        // 0x3ab7a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7a0) {
            ctx->pc = 0x3AB814u;
            goto label_3ab814;
        }
    }
    ctx->pc = 0x3AB7A8u;
    // 0x3ab7a8: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x3ab7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ab7ac: 0x250319b0  addiu       $v1, $t0, 0x19B0
    ctx->pc = 0x3ab7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6576));
    // 0x3ab7b0: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x3ab7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3ab7b4: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x3ab7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x3ab7b8: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x3ab7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3ab7bc: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3ab7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3ab7c0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3ab7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3ab7c4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3ab7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3ab7c8: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x3ab7c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x3ab7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ab7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab7d0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3ab7d4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x3ab7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x3ab7d8: 0x24631978  addiu       $v1, $v1, 0x1978
    ctx->pc = 0x3ab7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6520));
    // 0x3ab7dc: 0x24a5f068  addiu       $a1, $a1, -0xF98
    ctx->pc = 0x3ab7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963304));
    // 0x3ab7e0: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x3ab7e0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x3ab7e4: 0x24c6b580  addiu       $a2, $a2, -0x4A80
    ctx->pc = 0x3ab7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948224));
    // 0x3ab7e8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3ab7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab7f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ab7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3ab7f4: 0xa2090005  sb          $t1, 0x5($s0)
    ctx->pc = 0x3ab7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ab7f8: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3ab7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3ab7fc: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x3ab7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x3ab800: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x3ab800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x3ab804: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x3ab804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x3ab808: 0xc0eae94  jal         func_3ABA50
    ctx->pc = 0x3AB808u;
    SET_GPR_U32(ctx, 31, 0x3AB810u);
    ctx->pc = 0x3AB80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB808u;
    // 0x3ab80c: 0xae10002c  sw          $s0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABA50u, 0x3AB808u, 0x3AB810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB810u;
label_3ab810:
    // 0x3ab810: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ab810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab814:
    // 0x3ab814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab818: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ab818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab81c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB81Cu;
        // 0x3ab820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB824u;
    // 0x3ab824: 0x0  nop
    ctx->pc = 0x3ab824u;
    // NOP
    ctx->pc = 0x3ab828u;
}
