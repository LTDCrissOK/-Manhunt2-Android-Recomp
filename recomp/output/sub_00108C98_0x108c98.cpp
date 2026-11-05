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

// Function: sub_00108C98
// Address: 0x108c98 - 0x108d38
void sub_00108C98_0x108c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108C98_0x108c98");
#endif

    switch (ctx->pc) {
        case 0x108cccu: goto label_108ccc;
        case 0x108ce8u: goto label_108ce8;
        case 0x108d18u: goto label_108d18;
        default: break;
    }

    ctx->pc = 0x108c98u;

    // 0x108c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108c9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108ca0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x108ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x108ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ca8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x108ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x108cac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x108cacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108cb4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x108cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x108cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x108cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cc0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x108cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x108cc4: 0xc045edc  jal         func_117B70
    ctx->pc = 0x108CC4u;
    SET_GPR_U32(ctx, 31, 0x108CCCu);
    ctx->pc = 0x108CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CC4u;
    // 0x108cc8: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x108CC4u, 0x108CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CCCu;
label_108ccc:
    // 0x108ccc: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x108cccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x108cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108cd8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x108cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x108cdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108ce0: 0xc046164  jal         func_118590
    ctx->pc = 0x108CE0u;
    SET_GPR_U32(ctx, 31, 0x108CE8u);
    ctx->pc = 0x108CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CE0u;
    // 0x108ce4: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x108CE0u, 0x108CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CE8u;
label_108ce8:
    // 0x108ce8: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x108ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x108cec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x108cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108cf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108cf4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x108cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x108cf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x108cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x108cfc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x108cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x108d00: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108D00u;
    {
        const bool branch_taken_0x108d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x108D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D00u;
        // 0x108d04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d00) {
            ctx->pc = 0x108D1Cu;
            goto label_108d1c;
        }
    }
    ctx->pc = 0x108D08u;
    // 0x108d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x108d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d10: 0xc042368  jal         func_108DA0
    ctx->pc = 0x108D10u;
    SET_GPR_U32(ctx, 31, 0x108D18u);
    ctx->pc = 0x108D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D10u;
    // 0x108d14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108DA0u, 0x108D10u, 0x108D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D18u;
label_108d18:
    // 0x108d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108d1c:
    // 0x108d1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108d20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x108d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108d24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x108d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108d28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x108d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x108D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D2Cu;
        // 0x108d30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108D34u;
    // 0x108d34: 0x0  nop
    ctx->pc = 0x108d34u;
    // NOP
    ctx->pc = 0x108d38u;
}
