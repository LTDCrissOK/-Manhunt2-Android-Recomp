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

// Function: sub_003BD8B0
// Address: 0x3bd8b0 - 0x3bdb30
void sub_003BD8B0_0x3bd8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD8B0_0x3bd8b0");
#endif

    switch (ctx->pc) {
        case 0x3bd978u: goto label_3bd978;
        case 0x3bda58u: goto label_3bda58;
        default: break;
    }

    ctx->pc = 0x3bd8b0u;

    // 0x3bd8b0: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x3bd8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x3bd8b4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BD8B4u;
    {
        const bool branch_taken_0x3bd8b4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3BD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD8B4u;
        // 0x3bd8b8: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd8b4) {
            ctx->pc = 0x3BD8CCu;
            goto label_3bd8cc;
        }
    }
    ctx->pc = 0x3BD8BCu;
    // 0x3bd8bc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3bd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3bd8c0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x3bd8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x3bd8c4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD8C4u;
    {
        const bool branch_taken_0x3bd8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD8C4u;
        // 0x3bd8c8: 0x3c0b0043  lui         $t3, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd8c4) {
            ctx->pc = 0x3BD8D8u;
            goto label_3bd8d8;
        }
    }
    ctx->pc = 0x3BD8CCu;
label_3bd8cc:
    // 0x3bd8cc: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3bd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x3bd8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD8D0u;
        // 0x3bd8d4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD8D8u;
label_3bd8d8:
    // 0x3bd8d8: 0x2565ca48  addiu       $a1, $t3, -0x35B8
    ctx->pc = 0x3bd8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 4294953544));
    // 0x3bd8dc: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3bd8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3bd8e0: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD8E0u;
    {
        const bool branch_taken_0x3bd8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3bd8e0) {
            ctx->pc = 0x3BD8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD8E0u;
            // 0x3bd8e4: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD8F4u;
            goto label_3bd8f4;
        }
    }
    ctx->pc = 0x3BD8E8u;
    // 0x3bd8e8: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3bd8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x3bd8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD8ECu;
        // 0x3bd8f0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD8F4u;
label_3bd8f4:
    // 0x3bd8f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bd8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bd8f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD8F8u;
    {
        const bool branch_taken_0x3bd8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD8F8u;
        // 0x3bd8fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd8f8) {
            ctx->pc = 0x3BD908u;
            goto label_3bd908;
        }
    }
    ctx->pc = 0x3BD900u;
    // 0x3bd900: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD900u;
        // 0x3bd904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD908u;
label_3bd908:
    // 0x3bd908: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3bd908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x3bd90c: 0x9c4c0000  lwu         $t4, 0x0($v0)
    ctx->pc = 0x3bd90cu;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bd910: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x3bd910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3bd914: 0xdd6aca48  ld          $t2, -0x35B8($t3)
    ctx->pc = 0x3bd914u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 4294953544)));
    // 0x3bd918: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3bd918u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x3bd91c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD91Cu;
    {
        const bool branch_taken_0x3bd91c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD91Cu;
        // 0x3bd920: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd91c) {
            ctx->pc = 0x3BD92Cu;
            goto label_3bd92c;
        }
    }
    ctx->pc = 0x3BD924u;
    // 0x3bd924: 0x9c4c0000  lwu         $t4, 0x0($v0)
    ctx->pc = 0x3bd924u;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bd928: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3bd928u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3bd92c:
    // 0x3bd92c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3bd92cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x3bd930: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bd930u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3bd934: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3bd934u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x3bd938: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x3bd938u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x3bd93c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3bd93cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x3bd940: 0x12c6014  dsllv       $t4, $t4, $t1
    ctx->pc = 0x3bd940u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x3bd944: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x3bd944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3bd948: 0xfccc0010  sd          $t4, 0x10($a2)
    ctx->pc = 0x3bd948u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 12));
    // 0x3bd94c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3bd94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3bd950: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3bd950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3bd954: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x3BD954u;
    {
        const bool branch_taken_0x3bd954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD954u;
        // 0x3bd958: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd954) {
            ctx->pc = 0x3BDB20u;
            goto label_3bdb20;
        }
    }
    ctx->pc = 0x3BD95Cu;
    // 0x3bd95c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3bd95cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3bd960: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bd960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd964: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x3bd964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3bd968: 0x4c102d  daddu       $v0, $v0, $t4
    ctx->pc = 0x3bd968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 12));
    // 0x3bd96c: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3bd96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3bd970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BD970u;
    {
        const bool branch_taken_0x3bd970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD970u;
        // 0x3bd974: 0x43382f  dsubu       $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd970) {
            ctx->pc = 0x3BD97Cu;
            goto label_3bd97c;
        }
    }
    ctx->pc = 0x3BD978u;
label_3bd978:
    // 0x3bd978: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3bd978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3bd97c:
    // 0x3bd97c: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3BD97Cu;
    {
        const bool branch_taken_0x3bd97c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd97c) {
            ctx->pc = 0x3BD980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD97Cu;
            // 0x3bd980: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD9A8u;
            goto label_3bd9a8;
        }
    }
    ctx->pc = 0x3BD984u;
    // 0x3bd984: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x3bd984u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3bd988: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x3bd988u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3bd98c: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x3bd98cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3bd990: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3bd990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3bd994: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x3bd994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x3bd998: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x3bd998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3bd99c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3BD99Cu;
    {
        const bool branch_taken_0x3bd99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd99c) {
            ctx->pc = 0x3BD9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD99Cu;
            // 0x3bd9a0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd978;
        }
    }
    ctx->pc = 0x3BD9A4u;
    // 0x3bd9a4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x3bd9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_3bd9a8:
    // 0x3bd9a8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BD9A8u;
    {
        const bool branch_taken_0x3bd9a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD9A8u;
        // 0x3bd9ac: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd9a8) {
            ctx->pc = 0x3BD9B4u;
            goto label_3bd9b4;
        }
    }
    ctx->pc = 0x3BD9B0u;
    // 0x3bd9b0: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x3bd9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_3bd9b4:
    // 0x3bd9b4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD9B4u;
    {
        const bool branch_taken_0x3bd9b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD9B4u;
        // 0x3bd9b8: 0x2562ca48  addiu       $v0, $t3, -0x35B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294953544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd9b4) {
            ctx->pc = 0x3BD9C4u;
            goto label_3bd9c4;
        }
    }
    ctx->pc = 0x3BD9BCu;
    // 0x3bd9bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD9BCu;
    {
        const bool branch_taken_0x3bd9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD9BCu;
        // 0x3bd9c0: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd9bc) {
            ctx->pc = 0x3BD9CCu;
            goto label_3bd9cc;
        }
    }
    ctx->pc = 0x3BD9C4u;
label_3bd9c4:
    // 0x3bd9c4: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x3bd9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x3bd9c8: 0x2562ca48  addiu       $v0, $t3, -0x35B8
    ctx->pc = 0x3bd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294953544));
label_3bd9cc:
    // 0x3bd9cc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3bd9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3bd9d0: 0x4610053  bgez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x3BD9D0u;
    {
        const bool branch_taken_0x3bd9d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3BD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD9D0u;
        // 0x3bd9d4: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd9d0) {
            ctx->pc = 0x3BDB20u;
            goto label_3bdb20;
        }
    }
    ctx->pc = 0x3BD9D8u;
    // 0x3bd9d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bd9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bd9dc: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x3bd9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x3bd9e0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x3bd9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x3bd9e4: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3BD9E4u;
    {
        const bool branch_taken_0x3bd9e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bd9e4) {
            ctx->pc = 0x3BD9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD9E4u;
            // 0x3bd9e8: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BDA14u;
            goto label_3bda14;
        }
    }
    ctx->pc = 0x3BD9ECu;
    // 0x3bd9ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3bd9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3bd9f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3bd9f4: 0x34630820  ori         $v1, $v1, 0x820
    ctx->pc = 0x3bd9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2080);
    // 0x3bd9f8: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x3bd9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x3bd9fc: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3bd9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3bda00: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3bda00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3bda04: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bda04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3bda08: 0xac220810  sw          $v0, 0x810($at)
    ctx->pc = 0x3bda08u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 2)); // MMIO: 0x10000810
    // 0x3bda0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA0Cu;
        // 0x3bda10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDA14u;
label_3bda14:
    // 0x3bda14: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3bda14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3bda18: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x3bda18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3bda1c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3bda1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3bda20: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3bda20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3bda24: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BDA24u;
    {
        const bool branch_taken_0x3bda24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA24u;
        // 0x3bda28: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bda24) {
            ctx->pc = 0x3BDA8Cu;
            goto label_3bda8c;
        }
    }
    ctx->pc = 0x3BDA2Cu;
    // 0x3bda2c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3bda2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3bda30: 0x64e37333  daddiu      $v1, $a3, 0x7333
    ctx->pc = 0x3bda30u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
    // 0x3bda34: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3bda34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3bda38: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3bda38u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3bda3c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3bda3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3bda40: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3bda40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3bda44: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3bda44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3bda48: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BDA48u;
    {
        const bool branch_taken_0x3bda48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA48u;
        // 0x3bda4c: 0x31280003  andi        $t0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bda48) {
            ctx->pc = 0x3BDA8Cu;
            goto label_3bda8c;
        }
    }
    ctx->pc = 0x3BDA50u;
    // 0x3bda50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3bda50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bda54: 0x0  nop
    ctx->pc = 0x3bda54u;
    // NOP
label_3bda58:
    // 0x3bda58: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3bda58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3bda5c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3BDA5Cu;
    {
        const bool branch_taken_0x3bda5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA5Cu;
        // 0x3bda60: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bda5c) {
            ctx->pc = 0x3BDA90u;
            goto label_3bda90;
        }
    }
    ctx->pc = 0x3BDA64u;
    // 0x3bda64: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3bda64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3bda68: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3bda68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3bda6c: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3bda6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3bda70: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3bda70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3bda74: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3bda74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3bda78: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3bda78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3bda7c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BDA7Cu;
    {
        const bool branch_taken_0x3bda7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bda7c) {
            ctx->pc = 0x3BDA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BDA7Cu;
            // 0x3bda80: 0xec102f  dsubu       $v0, $a3, $t4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BDA94u;
            goto label_3bda94;
        }
    }
    ctx->pc = 0x3BDA84u;
    // 0x3bda84: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x3BDA84u;
    {
        const bool branch_taken_0x3bda84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA84u;
        // 0x3bda88: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bda84) {
            ctx->pc = 0x3BDA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bda58;
        }
    }
    ctx->pc = 0x3BDA8Cu;
label_3bda8c:
    // 0x3bda8c: 0x31280003  andi        $t0, $t1, 0x3
    ctx->pc = 0x3bda8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_3bda90:
    // 0x3bda90: 0xec102f  dsubu       $v0, $a3, $t4
    ctx->pc = 0x3bda90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 12));
label_3bda94:
    // 0x3bda94: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x3bda94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x3bda98: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3BDA98u;
    {
        const bool branch_taken_0x3bda98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA98u;
        // 0x3bda9c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bda98) {
            ctx->pc = 0x3BDAECu;
            goto label_3bdaec;
        }
    }
    ctx->pc = 0x3BDAA0u;
    // 0x3bdaa0: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x3bdaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3bdaa4: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x3bdaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x3bdaa8: 0x24027333  addiu       $v0, $zero, 0x7333
    ctx->pc = 0x3bdaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x3bdaac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3bdaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bdab0: 0x821016  dsrlv       $v0, $v0, $a0
    ctx->pc = 0x3bdab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x3bdab4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3bdab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3bdab8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3bdab8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3bdabc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bdabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdac0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3bdac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3bdac4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3bdac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3bdac8: 0x34840820  ori         $a0, $a0, 0x820
    ctx->pc = 0x3bdac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2080);
    // 0x3bdacc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bdaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdad0: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x3bdad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x3bdad4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3bdad4u;
    runtime->Store32(rdram, ctx, 0x10000820u, GPR_U32(ctx, 5)); // MMIO: 0x10000820
    // 0x3bdad8: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x3bdad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x3bdadc: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x3bdadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x3bdae0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3bdae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3bdae4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDAE4u;
        // 0x3bdae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDAECu;
label_3bdaec:
    // 0x3bdaec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3bdaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3bdaf0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3bdaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3bdaf4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bdaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdaf8: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x3bdaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x3bdafc: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x3bdafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x3bdb00: 0xa72816  dsrlv       $a1, $a3, $a1
    ctx->pc = 0x3bdb00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x3bdb04: 0x34840810  ori         $a0, $a0, 0x810
    ctx->pc = 0x3bdb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2064);
    // 0x3bdb08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bdb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdb0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3bdb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3bdb10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3bdb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3bdb14: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3bdb14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3bdb18: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x3bdb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
    // 0x3bdb1c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3bdb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3bdb20:
    // 0x3bdb20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bdb20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdb24: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDB2Cu;
    // 0x3bdb2c: 0x0  nop
    ctx->pc = 0x3bdb2cu;
    // NOP
    ctx->pc = 0x3bdb30u;
}
