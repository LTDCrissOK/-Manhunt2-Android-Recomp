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

// Function: sub_003BDB30
// Address: 0x3bdb30 - 0x3bddc8
void sub_003BDB30_0x3bdb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BDB30_0x3bdb30");
#endif

    switch (ctx->pc) {
        case 0x3bdcb0u: goto label_3bdcb0;
        default: break;
    }

    ctx->pc = 0x3bdb30u;

    // 0x3bdb30: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x3bdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x3bdb34: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BDB34u;
    {
        const bool branch_taken_0x3bdb34 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3BDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDB34u;
        // 0x3bdb38: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdb34) {
            ctx->pc = 0x3BDB4Cu;
            goto label_3bdb4c;
        }
    }
    ctx->pc = 0x3BDB3Cu;
    // 0x3bdb3c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3bdb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3bdb40: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x3bdb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x3bdb44: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BDB44u;
    {
        const bool branch_taken_0x3bdb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDB44u;
        // 0x3bdb48: 0x3c070043  lui         $a3, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdb44) {
            ctx->pc = 0x3BDB58u;
            goto label_3bdb58;
        }
    }
    ctx->pc = 0x3BDB4Cu;
label_3bdb4c:
    // 0x3bdb4c: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3bdb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x3bdb50: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDB50u;
        // 0x3bdb54: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDB58u;
label_3bdb58:
    // 0x3bdb58: 0x24ebca48  addiu       $t3, $a3, -0x35B8
    ctx->pc = 0x3bdb58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953544));
    // 0x3bdb5c: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x3bdb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x3bdb60: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BDB60u;
    {
        const bool branch_taken_0x3bdb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3bdb60) {
            ctx->pc = 0x3BDB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BDB60u;
            // 0x3bdb64: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BDB74u;
            goto label_3bdb74;
        }
    }
    ctx->pc = 0x3BDB68u;
    // 0x3bdb68: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3bdb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x3bdb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDB6Cu;
        // 0x3bdb70: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDB74u;
label_3bdb74:
    // 0x3bdb74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bdb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bdb78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BDB78u;
    {
        const bool branch_taken_0x3bdb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BDB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDB78u;
        // 0x3bdb7c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdb78) {
            ctx->pc = 0x3BDB88u;
            goto label_3bdb88;
        }
    }
    ctx->pc = 0x3BDB80u;
    // 0x3bdb80: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDB80u;
        // 0x3bdb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDB88u;
label_3bdb88:
    // 0x3bdb88: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3bdb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x3bdb8c: 0x9c4c0000  lwu         $t4, 0x0($v0)
    ctx->pc = 0x3bdb8cu;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bdb90: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x3bdb90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3bdb94: 0xdceaca48  ld          $t2, -0x35B8($a3)
    ctx->pc = 0x3bdb94u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 4294953544)));
    // 0x3bdb98: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3bdb98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x3bdb9c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BDB9Cu;
    {
        const bool branch_taken_0x3bdb9c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDB9Cu;
        // 0x3bdba0: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdb9c) {
            ctx->pc = 0x3BDBACu;
            goto label_3bdbac;
        }
    }
    ctx->pc = 0x3BDBA4u;
    // 0x3bdba4: 0x9c4c0000  lwu         $t4, 0x0($v0)
    ctx->pc = 0x3bdba4u;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bdba8: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3bdba8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3bdbac:
    // 0x3bdbac: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3bdbacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x3bdbb0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bdbb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3bdbb4: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3bdbb4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x3bdbb8: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x3bdbb8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x3bdbbc: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3bdbbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x3bdbc0: 0x12c6014  dsllv       $t4, $t4, $t1
    ctx->pc = 0x3bdbc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x3bdbc4: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x3bdbc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3bdbc8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bdbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3bdbcc: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x3bdbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3bdbd0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3bdbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3bdbd4: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x3bdbd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3bdbd8: 0x185282f  dsubu       $a1, $t4, $a1
    ctx->pc = 0x3bdbd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) - GPR_U64(ctx, 5));
    // 0x3bdbdc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3bdbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3bdbe0: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x3bdbe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3bdbe4: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x3bdbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3bdbe8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x3bdbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x3bdbec: 0x10800062  beqz        $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3BDBECu;
    {
        const bool branch_taken_0x3bdbec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDBECu;
        // 0x3bdbf0: 0xfcc30018  sd          $v1, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdbec) {
            ctx->pc = 0x3BDD78u;
            goto label_3bdd78;
        }
    }
    ctx->pc = 0x3BDBF4u;
    // 0x3bdbf4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3bdbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3bdbf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BDBF8u;
    {
        const bool branch_taken_0x3bdbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDBF8u;
        // 0x3bdbfc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdbf8) {
            ctx->pc = 0x3BDC08u;
            goto label_3bdc08;
        }
    }
    ctx->pc = 0x3BDC00u;
    // 0x3bdc00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BDC00u;
    {
        const bool branch_taken_0x3bdc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDC00u;
        // 0x3bdc04: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdc00) {
            ctx->pc = 0x3BDC0Cu;
            goto label_3bdc0c;
        }
    }
    ctx->pc = 0x3BDC08u;
label_3bdc08:
    // 0x3bdc08: 0xad630018  sw          $v1, 0x18($t3)
    ctx->pc = 0x3bdc08u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 3));
label_3bdc0c:
    // 0x3bdc0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BDC0Cu;
    {
        const bool branch_taken_0x3bdc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDC0Cu;
        // 0x3bdc10: 0x24e2ca48  addiu       $v0, $a3, -0x35B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdc0c) {
            ctx->pc = 0x3BDC20u;
            goto label_3bdc20;
        }
    }
    ctx->pc = 0x3BDC14u;
    // 0x3bdc14: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3bdc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3bdc18: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3bdc18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3bdc1c: 0x24e2ca48  addiu       $v0, $a3, -0x35B8
    ctx->pc = 0x3bdc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953544));
label_3bdc20:
    // 0x3bdc20: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x3bdc20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x3bdc24: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3bdc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3bdc28: 0x4610053  bgez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x3BDC28u;
    {
        const bool branch_taken_0x3bdc28 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3BDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDC28u;
        // 0x3bdc2c: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdc28) {
            ctx->pc = 0x3BDD78u;
            goto label_3bdd78;
        }
    }
    ctx->pc = 0x3BDC30u;
    // 0x3bdc30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdc34: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x3bdc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x3bdc38: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x3bdc38u;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x3bdc3c: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3BDC3Cu;
    {
        const bool branch_taken_0x3bdc3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bdc3c) {
            ctx->pc = 0x3BDC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BDC3Cu;
            // 0x3bdc40: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BDC6Cu;
            goto label_3bdc6c;
        }
    }
    ctx->pc = 0x3BDC44u;
    // 0x3bdc44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3bdc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdc48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bdc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3bdc4c: 0x34630820  ori         $v1, $v1, 0x820
    ctx->pc = 0x3bdc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2080);
    // 0x3bdc50: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x3bdc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x3bdc54: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3bdc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3bdc58: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3bdc58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3bdc5c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bdc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdc60: 0xac220810  sw          $v0, 0x810($at)
    ctx->pc = 0x3bdc60u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 2)); // MMIO: 0x10000810
    // 0x3bdc64: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDC64u;
        // 0x3bdc68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDC6Cu;
label_3bdc6c:
    // 0x3bdc6c: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3bdc6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3bdc70: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x3bdc70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3bdc74: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3bdc74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3bdc78: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3bdc78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3bdc7c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BDC7Cu;
    {
        const bool branch_taken_0x3bdc7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDC7Cu;
        // 0x3bdc80: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdc7c) {
            ctx->pc = 0x3BDCE4u;
            goto label_3bdce4;
        }
    }
    ctx->pc = 0x3BDC84u;
    // 0x3bdc84: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3bdc84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3bdc88: 0x64e37333  daddiu      $v1, $a3, 0x7333
    ctx->pc = 0x3bdc88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
    // 0x3bdc8c: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3bdc8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3bdc90: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3bdc90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3bdc94: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3bdc94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3bdc98: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3bdc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3bdc9c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3bdc9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3bdca0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BDCA0u;
    {
        const bool branch_taken_0x3bdca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDCA0u;
        // 0x3bdca4: 0x31280003  andi        $t0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdca0) {
            ctx->pc = 0x3BDCE4u;
            goto label_3bdce4;
        }
    }
    ctx->pc = 0x3BDCA8u;
    // 0x3bdca8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3bdca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdcac: 0x0  nop
    ctx->pc = 0x3bdcacu;
    // NOP
label_3bdcb0:
    // 0x3bdcb0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3bdcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3bdcb4: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3BDCB4u;
    {
        const bool branch_taken_0x3bdcb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDCB4u;
        // 0x3bdcb8: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdcb4) {
            ctx->pc = 0x3BDCE8u;
            goto label_3bdce8;
        }
    }
    ctx->pc = 0x3BDCBCu;
    // 0x3bdcbc: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3bdcbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3bdcc0: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3bdcc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3bdcc4: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3bdcc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3bdcc8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3bdcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3bdccc: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3bdcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3bdcd0: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3bdcd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3bdcd4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BDCD4u;
    {
        const bool branch_taken_0x3bdcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bdcd4) {
            ctx->pc = 0x3BDCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BDCD4u;
            // 0x3bdcd8: 0xec102f  dsubu       $v0, $a3, $t4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BDCECu;
            goto label_3bdcec;
        }
    }
    ctx->pc = 0x3BDCDCu;
    // 0x3bdcdc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x3BDCDCu;
    {
        const bool branch_taken_0x3bdcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDCDCu;
        // 0x3bdce0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdcdc) {
            ctx->pc = 0x3BDCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bdcb0;
        }
    }
    ctx->pc = 0x3BDCE4u;
label_3bdce4:
    // 0x3bdce4: 0x31280003  andi        $t0, $t1, 0x3
    ctx->pc = 0x3bdce4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_3bdce8:
    // 0x3bdce8: 0xec102f  dsubu       $v0, $a3, $t4
    ctx->pc = 0x3bdce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 12));
label_3bdcec:
    // 0x3bdcec: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x3bdcecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x3bdcf0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3BDCF0u;
    {
        const bool branch_taken_0x3bdcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDCF0u;
        // 0x3bdcf4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdcf0) {
            ctx->pc = 0x3BDD44u;
            goto label_3bdd44;
        }
    }
    ctx->pc = 0x3BDCF8u;
    // 0x3bdcf8: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x3bdcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3bdcfc: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x3bdcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x3bdd00: 0x24027333  addiu       $v0, $zero, 0x7333
    ctx->pc = 0x3bdd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x3bdd04: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3bdd04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bdd08: 0x821016  dsrlv       $v0, $v0, $a0
    ctx->pc = 0x3bdd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x3bdd0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3bdd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3bdd10: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3bdd10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3bdd14: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bdd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdd18: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3bdd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3bdd1c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3bdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3bdd20: 0x34840820  ori         $a0, $a0, 0x820
    ctx->pc = 0x3bdd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2080);
    // 0x3bdd24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bdd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdd28: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x3bdd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x3bdd2c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3bdd2cu;
    runtime->Store32(rdram, ctx, 0x10000820u, GPR_U32(ctx, 5)); // MMIO: 0x10000820
    // 0x3bdd30: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x3bdd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x3bdd34: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x3bdd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x3bdd38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3bdd38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3bdd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDD3Cu;
        // 0x3bdd40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDD44u;
label_3bdd44:
    // 0x3bdd44: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3bdd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3bdd48: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3bdd48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3bdd4c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bdd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdd50: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x3bdd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x3bdd54: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x3bdd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x3bdd58: 0xa72816  dsrlv       $a1, $a3, $a1
    ctx->pc = 0x3bdd58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x3bdd5c: 0x34840810  ori         $a0, $a0, 0x810
    ctx->pc = 0x3bdd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2064);
    // 0x3bdd60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bdd64: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3bdd64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3bdd68: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3bdd68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3bdd6c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3bdd6cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3bdd70: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x3bdd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
    // 0x3bdd74: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3bdd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3bdd78:
    // 0x3bdd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bdd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bdd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDD84u;
    // 0x3bdd84: 0x0  nop
    ctx->pc = 0x3bdd84u;
    // NOP
    // 0x3bdd88: 0x0  nop
    ctx->pc = 0x3bdd88u;
    // NOP
    // 0x3bdd8c: 0x0  nop
    ctx->pc = 0x3bdd8cu;
    // NOP
    // 0x3bdd90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3bdd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3bdd94: 0x0  nop
    ctx->pc = 0x3bdd94u;
    // NOP
    // 0x3bdd98: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3bdd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3bdd9c: 0x0  nop
    ctx->pc = 0x3bdd9cu;
    // NOP
    // 0x3bdda0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3bdda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bdda4: 0x0  nop
    ctx->pc = 0x3bdda4u;
    // NOP
    // 0x3bdda8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3bdda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bddac: 0x0  nop
    ctx->pc = 0x3bddacu;
    // NOP
    // 0x3bddb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3bddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3bddb4: 0x0  nop
    ctx->pc = 0x3bddb4u;
    // NOP
    // 0x3bddb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3bddb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bddbc: 0x0  nop
    ctx->pc = 0x3bddbcu;
    // NOP
    // 0x3bddc0: 0x0  nop
    ctx->pc = 0x3bddc0u;
    // NOP
    // 0x3bddc4: 0x0  nop
    ctx->pc = 0x3bddc4u;
    // NOP
    ctx->pc = 0x3bddc8u;
}
