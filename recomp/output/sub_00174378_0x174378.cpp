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

// Function: sub_00174378
// Address: 0x174378 - 0x174430
void sub_00174378_0x174378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174378_0x174378");
#endif

    switch (ctx->pc) {
        case 0x1743acu: goto label_1743ac;
        case 0x1743e0u: goto label_1743e0;
        case 0x1743fcu: goto label_1743fc;
        case 0x174414u: goto label_174414;
        default: break;
    }

    ctx->pc = 0x174378u;

    // 0x174378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17437c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174380: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x174380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174384: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x174384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17438c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17438cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174390: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x174390u;
    {
        const bool branch_taken_0x174390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x174394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174390u;
        // 0x174394: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174390) {
            ctx->pc = 0x174414u;
            goto label_174414;
        }
    }
    ctx->pc = 0x174398u;
    // 0x174398: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x174398u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17439c: 0x5220001e  beql        $s1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x17439Cu;
    {
        const bool branch_taken_0x17439c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17439c) {
            ctx->pc = 0x1743A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17439Cu;
            // 0x1743a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174418u;
            goto label_174418;
        }
    }
    ctx->pc = 0x1743A4u;
    // 0x1743a4: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x1743A4u;
    SET_GPR_U32(ctx, 31, 0x1743ACu);
    ctx->pc = 0x1743A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743A4u;
    // 0x1743a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x1743A4u, 0x1743ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743ACu;
label_1743ac:
    // 0x1743ac: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1743acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1743b0: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1743B0u;
    {
        const bool branch_taken_0x1743b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1743B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743B0u;
        // 0x1743b4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743b0) {
            ctx->pc = 0x174414u;
            goto label_174414;
        }
    }
    ctx->pc = 0x1743B8u;
    // 0x1743b8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1743b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1743bc: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1743BCu;
    {
        const bool branch_taken_0x1743bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1743C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743BCu;
        // 0x1743c0: 0x28a20003  slti        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743bc) {
            ctx->pc = 0x174414u;
            goto label_174414;
        }
    }
    ctx->pc = 0x1743C4u;
    // 0x1743c4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1743C4u;
    {
        const bool branch_taken_0x1743c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1743C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743C4u;
        // 0x1743c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743c4) {
            ctx->pc = 0x174418u;
            goto label_174418;
        }
    }
    ctx->pc = 0x1743CCu;
    // 0x1743cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1743ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743d0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1743d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1743d4: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x1743d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1743d8: 0xc04fbb2  jal         func_13EEC8
    ctx->pc = 0x1743D8u;
    SET_GPR_U32(ctx, 31, 0x1743E0u);
    ctx->pc = 0x1743DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743D8u;
    // 0x1743dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EEC8u, 0x1743D8u, 0x1743E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743E0u;
label_1743e0:
    // 0x1743e0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1743e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1743e4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1743e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1743e8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1743e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1743ec: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x1743ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1743f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1743f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1743f4: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x1743F4u;
    SET_GPR_U32(ctx, 31, 0x1743FCu);
    ctx->pc = 0x1743F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743F4u;
    // 0x1743f8: 0x8c500108  lw          $s0, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1743F4u, 0x1743FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743FCu;
label_1743fc:
    // 0x1743fc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1743fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x174400: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x174400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174404: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x174404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x174408: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x174408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17440c: 0xc04668a  jal         func_119A28
    ctx->pc = 0x17440Cu;
    SET_GPR_U32(ctx, 31, 0x174414u);
    ctx->pc = 0x174410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17440Cu;
    // 0x174410: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x17440Cu, 0x174414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174414u;
label_174414:
    // 0x174414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174418:
    // 0x174418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17441c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17441cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174420: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174424: 0x3e00008  jr          $ra
    ctx->pc = 0x174424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174424u;
        // 0x174428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17442Cu;
    // 0x17442c: 0x0  nop
    ctx->pc = 0x17442cu;
    // NOP
    ctx->pc = 0x174430u;
}
