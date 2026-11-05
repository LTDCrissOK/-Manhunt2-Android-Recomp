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

// Function: sub_00174898
// Address: 0x174898 - 0x174988
void sub_00174898_0x174898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174898_0x174898");
#endif

    switch (ctx->pc) {
        case 0x1748d0u: goto label_1748d0;
        case 0x17490cu: goto label_17490c;
        case 0x174940u: goto label_174940;
        default: break;
    }

    ctx->pc = 0x174898u;

    // 0x174898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17489c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1748a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1748a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1748a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1748a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1748a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1748ac: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1748acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1748b0: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x1748b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x1748b4: 0x8cb1000c  lw          $s1, 0xC($a1)
    ctx->pc = 0x1748b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1748b8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1748B8u;
    {
        const bool branch_taken_0x1748b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1748BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748B8u;
        // 0x1748bc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748b8) {
            ctx->pc = 0x1748D8u;
            goto label_1748d8;
        }
    }
    ctx->pc = 0x1748C0u;
    // 0x1748c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1748c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1748c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748c8: 0xc05ca20  jal         func_172880
    ctx->pc = 0x1748C8u;
    SET_GPR_U32(ctx, 31, 0x1748D0u);
    ctx->pc = 0x1748CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1748C8u;
    // 0x1748cc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x1748C8u, 0x1748D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1748D0u;
label_1748d0:
    // 0x1748d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1748D0u;
    {
        const bool branch_taken_0x1748d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1748d0) {
            ctx->pc = 0x1748D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1748D0u;
            // 0x1748d4: 0x92230020  lbu         $v1, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1748E8u;
            goto label_1748e8;
        }
    }
    ctx->pc = 0x1748D8u;
label_1748d8:
    // 0x1748d8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1748d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1748dc: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1748dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1748e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1748E0u;
    {
        const bool branch_taken_0x1748e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1748E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748E0u;
        // 0x1748e4: 0xa20200b8  sb          $v0, 0xB8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748e0) {
            ctx->pc = 0x174970u;
            goto label_174970;
        }
    }
    ctx->pc = 0x1748E8u;
label_1748e8:
    // 0x1748e8: 0x920200b8  lbu         $v0, 0xB8($s0)
    ctx->pc = 0x1748e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1748ec: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1748ECu;
    {
        const bool branch_taken_0x1748ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1748F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748ECu;
        // 0x1748f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748ec) {
            ctx->pc = 0x174970u;
            goto label_174970;
        }
    }
    ctx->pc = 0x1748F4u;
    // 0x1748f4: 0xa20300b8  sb          $v1, 0xB8($s0)
    ctx->pc = 0x1748f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x1748f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1748f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1748fc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1748fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x174900: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x174900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x174904: 0xc0484da  jal         func_121368
    ctx->pc = 0x174904u;
    SET_GPR_U32(ctx, 31, 0x17490Cu);
    ctx->pc = 0x174908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174904u;
    // 0x174908: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121368u, 0x174904u, 0x17490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17490Cu;
label_17490c:
    // 0x17490c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17490cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174910: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174910u;
    {
        const bool branch_taken_0x174910 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x174914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174910u;
        // 0x174914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174910) {
            ctx->pc = 0x174920u;
            goto label_174920;
        }
    }
    ctx->pc = 0x174918u;
    // 0x174918: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x174918u;
    {
        const bool branch_taken_0x174918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174918u;
        // 0x17491c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174918) {
            ctx->pc = 0x17496Cu;
            goto label_17496c;
        }
    }
    ctx->pc = 0x174920u;
label_174920:
    // 0x174920: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x174920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x174924: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x174924u;
    {
        const bool branch_taken_0x174924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174924u;
        // 0x174928: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174924) {
            ctx->pc = 0x174960u;
            goto label_174960;
        }
    }
    ctx->pc = 0x17492Cu;
    // 0x17492c: 0x920200b8  lbu         $v0, 0xB8($s0)
    ctx->pc = 0x17492cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x174930: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x174930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174934: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x174934u;
    {
        const bool branch_taken_0x174934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174934u;
        // 0x174938: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174934) {
            ctx->pc = 0x17495Cu;
            goto label_17495c;
        }
    }
    ctx->pc = 0x17493Cu;
    // 0x17493c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x17493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_174940:
    // 0x174940: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x174940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174944: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x174944u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x174948: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x174948u;
    {
        const bool branch_taken_0x174948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174948u;
        // 0x17494c: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174948) {
            ctx->pc = 0x174960u;
            goto label_174960;
        }
    }
    ctx->pc = 0x174950u;
    // 0x174950: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x174950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174954: 0x1467fffa  bne         $v1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x174954u;
    {
        const bool branch_taken_0x174954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x174958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174954u;
        // 0x174958: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174954) {
            ctx->pc = 0x174940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174940;
        }
    }
    ctx->pc = 0x17495Cu;
label_17495c:
    // 0x17495c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17495cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174960:
    // 0x174960: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x174960u;
    {
        const bool branch_taken_0x174960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x174964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174960u;
        // 0x174964: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174960) {
            ctx->pc = 0x17496Cu;
            goto label_17496c;
        }
    }
    ctx->pc = 0x174968u;
    // 0x174968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17496c:
    // 0x17496c: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x17496cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_174970:
    // 0x174970: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174974: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x174974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17497c: 0x3e00008  jr          $ra
    ctx->pc = 0x17497Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17497Cu;
        // 0x174980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17497Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174984u;
    // 0x174984: 0x0  nop
    ctx->pc = 0x174984u;
    // NOP
    ctx->pc = 0x174988u;
}
