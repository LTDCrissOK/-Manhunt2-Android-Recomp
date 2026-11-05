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

// Function: sub_001218B8
// Address: 0x1218b8 - 0x121958
void sub_001218B8_0x1218b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001218B8_0x1218b8");
#endif

    switch (ctx->pc) {
        case 0x1218e8u: goto label_1218e8;
        case 0x1218f8u: goto label_1218f8;
        case 0x121908u: goto label_121908;
        case 0x121918u: goto label_121918;
        case 0x12192cu: goto label_12192c;
        default: break;
    }

    ctx->pc = 0x1218b8u;

    // 0x1218b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1218b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1218bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1218bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1218c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1218c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1218c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1218c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1218c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1218cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1218ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1218d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1218d4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1218d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1218d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1218dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1218dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218e0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1218E0u;
    SET_GPR_U32(ctx, 31, 0x1218E8u);
    ctx->pc = 0x1218E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218E0u;
    // 0x1218e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1218E0u, 0x1218E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218E8u;
label_1218e8:
    // 0x1218e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1218E8u;
    {
        const bool branch_taken_0x1218e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1218ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218E8u;
        // 0x1218ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218e8) {
            ctx->pc = 0x121938u;
            goto label_121938;
        }
    }
    ctx->pc = 0x1218F0u;
    // 0x1218f0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1218F0u;
    SET_GPR_U32(ctx, 31, 0x1218F8u);
    ctx->pc = 0x1218F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218F0u;
    // 0x1218f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1218F0u, 0x1218F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218F8u;
label_1218f8:
    // 0x1218f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1218F8u;
    {
        const bool branch_taken_0x1218f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1218FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218F8u;
        // 0x1218fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218f8) {
            ctx->pc = 0x121938u;
            goto label_121938;
        }
    }
    ctx->pc = 0x121900u;
    // 0x121900: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121900u;
    SET_GPR_U32(ctx, 31, 0x121908u);
    ctx->pc = 0x121904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121900u;
    // 0x121904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121900u, 0x121908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121908u;
label_121908:
    // 0x121908: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x121908u;
    {
        const bool branch_taken_0x121908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121908u;
        // 0x12190c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121908) {
            ctx->pc = 0x121934u;
            goto label_121934;
        }
    }
    ctx->pc = 0x121910u;
    // 0x121910: 0xc049986  jal         func_126618
    ctx->pc = 0x121910u;
    SET_GPR_U32(ctx, 31, 0x121918u);
    ctx->pc = 0x121914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121910u;
    // 0x121914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x121910u, 0x121918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121918u;
label_121918:
    // 0x121918: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x121918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12191c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12191cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121920: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x121920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121924: 0xc0427ae  jal         func_109EB8
    ctx->pc = 0x121924u;
    SET_GPR_U32(ctx, 31, 0x12192Cu);
    ctx->pc = 0x121928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121924u;
    // 0x121928: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109EB8u, 0x121924u, 0x12192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12192Cu;
label_12192c:
    // 0x12192c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12192Cu;
    {
        const bool branch_taken_0x12192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12192Cu;
        // 0x121930: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12192c) {
            ctx->pc = 0x12193Cu;
            goto label_12193c;
        }
    }
    ctx->pc = 0x121934u;
label_121934:
    // 0x121934: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121938:
    // 0x121938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12193c:
    // 0x12193c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12193cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121940: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121944: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x121944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x121948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12194c: 0x3e00008  jr          $ra
    ctx->pc = 0x12194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12194Cu;
        // 0x121950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12194Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121954u;
    // 0x121954: 0x0  nop
    ctx->pc = 0x121954u;
    // NOP
    ctx->pc = 0x121958u;
}
