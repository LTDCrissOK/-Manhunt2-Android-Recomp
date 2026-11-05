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

// Function: sub_0014BD18
// Address: 0x14bd18 - 0x14bdd0
void sub_0014BD18_0x14bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BD18_0x14bd18");
#endif

    switch (ctx->pc) {
        case 0x14bd6cu: goto label_14bd6c;
        case 0x14bd78u: goto label_14bd78;
        case 0x14bd90u: goto label_14bd90;
        case 0x14bda4u: goto label_14bda4;
        case 0x14bdb0u: goto label_14bdb0;
        default: break;
    }

    ctx->pc = 0x14bd18u;

    // 0x14bd18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14bd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14bd1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14bd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14bd20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14bd24: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x14bd24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x14bd28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14bd2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14bd2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bd34: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x14bd34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14bd38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14bd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14bd3c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x14bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x14bd40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14bd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14bd44: 0x26319a08  addiu       $s1, $s1, -0x65F8
    ctx->pc = 0x14bd44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941192));
    // 0x14bd48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd4c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14bd50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bd54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14bd54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bd58: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14bd58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14bd5c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x14bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14bd60: 0x8c52020c  lw          $s2, 0x20C($v0)
    ctx->pc = 0x14bd60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14bd64: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x14BD64u;
    SET_GPR_U32(ctx, 31, 0x14BD6Cu);
    ctx->pc = 0x14BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD64u;
    // 0x14bd68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x14BD64u, 0x14BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD6Cu;
label_14bd6c:
    // 0x14bd6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14bd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd70: 0xc044084  jal         func_110210
    ctx->pc = 0x14BD70u;
    SET_GPR_U32(ctx, 31, 0x14BD78u);
    ctx->pc = 0x14BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD70u;
    // 0x14bd74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110210u, 0x14BD70u, 0x14BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD78u;
label_14bd78:
    // 0x14bd78: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14bd78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14bd7c: 0x8e240108  lw          $a0, 0x108($s1)
    ctx->pc = 0x14bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x14bd80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BD80u;
    {
        const bool branch_taken_0x14bd80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD80u;
        // 0x14bd84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd80) {
            ctx->pc = 0x14BD94u;
            goto label_14bd94;
        }
    }
    ctx->pc = 0x14BD88u;
    // 0x14bd88: 0xc0cda26  jal         func_336898
    ctx->pc = 0x14BD88u;
    SET_GPR_U32(ctx, 31, 0x14BD90u);
    ctx->pc = 0x14BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD88u;
    // 0x14bd8c: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x14BD88u, 0x14BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD90u;
label_14bd90:
    // 0x14bd90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bd94:
    // 0x14bd94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14bd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd98: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x14bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
    // 0x14bd9c: 0xc0530de  jal         func_14C378
    ctx->pc = 0x14BD9Cu;
    SET_GPR_U32(ctx, 31, 0x14BDA4u);
    ctx->pc = 0x14BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD9Cu;
    // 0x14bda0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C378u, 0x14BD9Cu, 0x14BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDA4u;
label_14bda4:
    // 0x14bda4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14bda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bda8: 0xc053104  jal         func_14C410
    ctx->pc = 0x14BDA8u;
    SET_GPR_U32(ctx, 31, 0x14BDB0u);
    ctx->pc = 0x14BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BDA8u;
    // 0x14bdac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C410u, 0x14BDA8u, 0x14BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDB0u;
label_14bdb0:
    // 0x14bdb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bdb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bdb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14bdb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14bdb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14bdb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bdbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14bdbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bdc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14bdc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14bdc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14bdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x14BDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDC8u;
        // 0x14bdcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BDD0u;
}
