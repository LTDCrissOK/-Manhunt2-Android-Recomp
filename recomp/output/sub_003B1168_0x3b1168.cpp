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

// Function: sub_003B1168
// Address: 0x3b1168 - 0x3b1260
void sub_003B1168_0x3b1168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1168_0x3b1168");
#endif

    switch (ctx->pc) {
        case 0x3b11d8u: goto label_3b11d8;
        case 0x3b1218u: goto label_3b1218;
        case 0x3b1240u: goto label_3b1240;
        default: break;
    }

    ctx->pc = 0x3b1168u;

    // 0x3b1168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b1168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b116c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b116cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b1170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1174: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3b1174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3b1178: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3b1178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b117c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b1180: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3b1180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3b1184: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1184u;
    {
        const bool branch_taken_0x3b1184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1184u;
        // 0x3b1188: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1184) {
            ctx->pc = 0x3B1198u;
            goto label_3b1198;
        }
    }
    ctx->pc = 0x3B118Cu;
    // 0x3b118c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b1190: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3b1190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3b1194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b1194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b1198:
    // 0x3b1198: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3B1198u;
    {
        const bool branch_taken_0x3b1198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b1198) {
            ctx->pc = 0x3B119Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1198u;
            // 0x3b119c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B124Cu;
            goto label_3b124c;
        }
    }
    ctx->pc = 0x3B11A0u;
    // 0x3b11a0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3b11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3b11a4: 0x5451000e  bnel        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B11A4u;
    {
        const bool branch_taken_0x3b11a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3b11a4) {
            ctx->pc = 0x3B11A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B11A4u;
            // 0x3b11a8: 0x86030036  lh          $v1, 0x36($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B11E0u;
            goto label_3b11e0;
        }
    }
    ctx->pc = 0x3B11ACu;
    // 0x3b11ac: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3b11acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b11b0: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x3b11b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3b11b4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3b11b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3b11b8: 0x260a0034  addiu       $t2, $s0, 0x34
    ctx->pc = 0x3b11b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x3b11bc: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x3b11bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b11c0: 0x86080030  lh          $t0, 0x30($s0)
    ctx->pc = 0x3b11c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b11c4: 0x86090032  lh          $t1, 0x32($s0)
    ctx->pc = 0x3b11c4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x3b11c8: 0x860b0036  lh          $t3, 0x36($s0)
    ctx->pc = 0x3b11c8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x3b11cc: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x3b11ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3b11d0: 0xc0ed490  jal         func_3B5240
    ctx->pc = 0x3B11D0u;
    SET_GPR_U32(ctx, 31, 0x3B11D8u);
    ctx->pc = 0x3B11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B11D0u;
    // 0x3b11d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5240u, 0x3B11D0u, 0x3B11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B11D8u;
label_3b11d8:
    // 0x3b11d8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3B11D8u;
    {
        const bool branch_taken_0x3b11d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11D8u;
        // 0x3b11dc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11d8) {
            ctx->pc = 0x3B1240u;
            goto label_3b1240;
        }
    }
    ctx->pc = 0x3B11E0u;
label_3b11e0:
    // 0x3b11e0: 0x260c0034  addiu       $t4, $s0, 0x34
    ctx->pc = 0x3b11e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x3b11e4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3b11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b11e8: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x3b11e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3b11ec: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3b11ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3b11f0: 0x2609002c  addiu       $t1, $s0, 0x2C
    ctx->pc = 0x3b11f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x3b11f4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x3b11f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b11f8: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x3b11f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3b11fc: 0x860a0030  lh          $t2, 0x30($s0)
    ctx->pc = 0x3b11fcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b1200: 0x860b0032  lh          $t3, 0x32($s0)
    ctx->pc = 0x3b1200u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x3b1204: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x3b1204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3b1208: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3b1208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3b120c: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x3b120cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x3b1210: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x3B1210u;
    SET_GPR_U32(ctx, 31, 0x3B1218u);
    ctx->pc = 0x3B1214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1210u;
    // 0x3b1214: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x3B1210u, 0x3B1218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1218u;
label_3b1218:
    // 0x3b1218: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3b1218u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3b121c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3b121cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3b1220: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3b1220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b1224: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3b1224u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3b1228: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3b1228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3b122c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3b122cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b1230: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1230u;
    {
        const bool branch_taken_0x3b1230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1230u;
        // 0x3b1234: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1230) {
            ctx->pc = 0x3B1244u;
            goto label_3b1244;
        }
    }
    ctx->pc = 0x3B1238u;
    // 0x3b1238: 0xc0ec456  jal         func_3B1158
    ctx->pc = 0x3B1238u;
    SET_GPR_U32(ctx, 31, 0x3B1240u);
    ctx->pc = 0x3B1158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1158u, 0x3B1238u, 0x3B1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1240u;
label_3b1240:
    // 0x3b1240: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b1244:
    // 0x3b1244: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3b1244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3b1248: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b1248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b124c:
    // 0x3b124c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3b124cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b1250: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b1250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b1254: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1254u;
        // 0x3b1258: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B125Cu;
    // 0x3b125c: 0x0  nop
    ctx->pc = 0x3b125cu;
    // NOP
    ctx->pc = 0x3b1260u;
}
