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

// Function: sub_001207E8
// Address: 0x1207e8 - 0x120898
void sub_001207E8_0x1207e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001207E8_0x1207e8");
#endif

    switch (ctx->pc) {
        case 0x120830u: goto label_120830;
        default: break;
    }

    ctx->pc = 0x1207e8u;

    // 0x1207e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1207e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1207ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1207ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1207f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1207f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1207f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1207f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1207f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1207f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1207fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1207fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120800: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x120800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x120804: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x120804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120808: 0x92020214  lbu         $v0, 0x214($s0)
    ctx->pc = 0x120808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x12080c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x12080cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x120810: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x120810u;
    {
        const bool branch_taken_0x120810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120810u;
        // 0x120814: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120810) {
            ctx->pc = 0x12087Cu;
            goto label_12087c;
        }
    }
    ctx->pc = 0x120818u;
    // 0x120818: 0x52200019  beql        $s1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x120818u;
    {
        const bool branch_taken_0x120818 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x120818) {
            ctx->pc = 0x12081Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120818u;
            // 0x12081c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120880u;
            goto label_120880;
        }
    }
    ctx->pc = 0x120820u;
    // 0x120820: 0x52400017  beql        $s2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x120820u;
    {
        const bool branch_taken_0x120820 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x120820) {
            ctx->pc = 0x120824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120820u;
            // 0x120824: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120880u;
            goto label_120880;
        }
    }
    ctx->pc = 0x120828u;
    // 0x120828: 0xc048226  jal         func_120898
    ctx->pc = 0x120828u;
    SET_GPR_U32(ctx, 31, 0x120830u);
    ctx->pc = 0x120898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120898u, 0x120828u, 0x120830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120830u;
label_120830:
    // 0x120830: 0x92030214  lbu         $v1, 0x214($s0)
    ctx->pc = 0x120830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x120834: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x120834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x120838: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x120838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x12083c: 0xac710114  sw          $s1, 0x114($v1)
    ctx->pc = 0x12083cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 17));
    // 0x120840: 0x92040214  lbu         $a0, 0x214($s0)
    ctx->pc = 0x120840u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x120844: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x120844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x120848: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x120848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x12084c: 0xac920118  sw          $s2, 0x118($a0)
    ctx->pc = 0x12084cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 18));
    // 0x120850: 0x92030214  lbu         $v1, 0x214($s0)
    ctx->pc = 0x120850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x120854: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x120854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x120858: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x120858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x12085c: 0xac62011c  sw          $v0, 0x11C($v1)
    ctx->pc = 0x12085cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 2));
    // 0x120860: 0x92020214  lbu         $v0, 0x214($s0)
    ctx->pc = 0x120860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x120864: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x120864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x120868: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x120868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12086c: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x12086cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x120870: 0x92030214  lbu         $v1, 0x214($s0)
    ctx->pc = 0x120870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x120874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x120874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x120878: 0xa2030214  sb          $v1, 0x214($s0)
    ctx->pc = 0x120878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 532), (uint8_t)GPR_U32(ctx, 3));
label_12087c:
    // 0x12087c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12087cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120880:
    // 0x120880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x120880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120884: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x120884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120888: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x120888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12088c: 0x3e00008  jr          $ra
    ctx->pc = 0x12088Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12088Cu;
        // 0x120890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12088Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120894u;
    // 0x120894: 0x0  nop
    ctx->pc = 0x120894u;
    // NOP
    ctx->pc = 0x120898u;
}
