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

// Function: sub_001A72A8
// Address: 0x1a72a8 - 0x1a7380
void sub_001A72A8_0x1a72a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A72A8_0x1a72a8");
#endif

    switch (ctx->pc) {
        case 0x1a72d0u: goto label_1a72d0;
        case 0x1a72dcu: goto label_1a72dc;
        case 0x1a72ecu: goto label_1a72ec;
        case 0x1a72f4u: goto label_1a72f4;
        case 0x1a732cu: goto label_1a732c;
        case 0x1a7360u: goto label_1a7360;
        default: break;
    }

    ctx->pc = 0x1a72a8u;

    // 0x1a72a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a72ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a72acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a72b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a72b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a72b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a72b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a72b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a72bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a72bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a72c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a72c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a72c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a72c8: 0xc06a026  jal         func_1A8098
    ctx->pc = 0x1A72C8u;
    SET_GPR_U32(ctx, 31, 0x1A72D0u);
    ctx->pc = 0x1A72CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A72C8u;
    // 0x1a72cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8098u, 0x1A72C8u, 0x1A72D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72D0u;
label_1a72d0:
    // 0x1a72d0: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x1a72d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a72d4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1A72D4u;
    SET_GPR_U32(ctx, 31, 0x1A72DCu);
    ctx->pc = 0x1A72D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A72D4u;
    // 0x1a72d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1A72D4u, 0x1A72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72DCu;
label_1a72dc:
    // 0x1a72dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A72DCu;
    {
        const bool branch_taken_0x1a72dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72DCu;
        // 0x1a72e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72dc) {
            ctx->pc = 0x1A7300u;
            goto label_1a7300;
        }
    }
    ctx->pc = 0x1A72E4u;
    // 0x1a72e4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1A72E4u;
    SET_GPR_U32(ctx, 31, 0x1A72ECu);
    ctx->pc = 0x1A72E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A72E4u;
    // 0x1a72e8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1A72E4u, 0x1A72ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72ECu;
label_1a72ec:
    // 0x1a72ec: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1A72ECu;
    SET_GPR_U32(ctx, 31, 0x1A72F4u);
    ctx->pc = 0x1A72F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A72ECu;
    // 0x1a72f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1A72ECu, 0x1A72F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72F4u;
label_1a72f4:
    // 0x1a72f4: 0x3842006e  xori        $v0, $v0, 0x6E
    ctx->pc = 0x1a72f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)110);
    // 0x1a72f8: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1a72f8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a72fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a72fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a7300:
    // 0x1a7300: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7300u;
    {
        const bool branch_taken_0x1a7300 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a7300) {
            ctx->pc = 0x1A7324u;
            goto label_1a7324;
        }
    }
    ctx->pc = 0x1A7308u;
    // 0x1a7308: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7308u;
    {
        const bool branch_taken_0x1a7308 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7308u;
        // 0x1a730c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7308) {
            ctx->pc = 0x1A7324u;
            goto label_1a7324;
        }
    }
    ctx->pc = 0x1A7310u;
    // 0x1a7310: 0x240607b7  addiu       $a2, $zero, 0x7B7
    ctx->pc = 0x1a7310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1975));
    // 0x1a7314: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1a7314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a7318: 0x240307b5  addiu       $v1, $zero, 0x7B5
    ctx->pc = 0x1a7318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1973));
    // 0x1a731c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A731Cu;
    {
        const bool branch_taken_0x1a731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A731Cu;
        // 0x1a7320: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a731c) {
            ctx->pc = 0x1A7354u;
            goto label_1a7354;
        }
    }
    ctx->pc = 0x1A7324u;
label_1a7324:
    // 0x1a7324: 0xc069ffa  jal         func_1A7FE8
    ctx->pc = 0x1A7324u;
    SET_GPR_U32(ctx, 31, 0x1A732Cu);
    ctx->pc = 0x1A7328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7324u;
    // 0x1a7328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FE8u, 0x1A7324u, 0x1A732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A732Cu;
label_1a732c:
    // 0x1a732c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A732Cu;
    {
        const bool branch_taken_0x1a732c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A732Cu;
        // 0x1a7330: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a732c) {
            ctx->pc = 0x1A7348u;
            goto label_1a7348;
        }
    }
    ctx->pc = 0x1A7334u;
    // 0x1a7334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7338: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7338u;
    {
        const bool branch_taken_0x1a7338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7338u;
        // 0x1a733c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7338) {
            ctx->pc = 0x1A7348u;
            goto label_1a7348;
        }
    }
    ctx->pc = 0x1A7340u;
    // 0x1a7340: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7340u;
    {
        const bool branch_taken_0x1a7340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7340) {
            ctx->pc = 0x1A7344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7340u;
            // 0x1a7344: 0x240607bb  addiu       $a2, $zero, 0x7BB (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1979));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7354u;
            goto label_1a7354;
        }
    }
    ctx->pc = 0x1A7348u;
label_1a7348:
    // 0x1a7348: 0x240607b9  addiu       $a2, $zero, 0x7B9
    ctx->pc = 0x1a7348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1977));
    // 0x1a734c: 0x240207c1  addiu       $v0, $zero, 0x7C1
    ctx->pc = 0x1a734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1985));
    // 0x1a7350: 0x53300b  movn        $a2, $v0, $s3
    ctx->pc = 0x1a7350u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1a7354:
    // 0x1a7354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7358: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A7358u;
    SET_GPR_U32(ctx, 31, 0x1A7360u);
    ctx->pc = 0x1A735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7358u;
    // 0x1a735c: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A7358u, 0x1A7360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7360u;
label_1a7360:
    // 0x1a7360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7368: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a736c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a736cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7374: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7374u;
        // 0x1a7378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A737Cu;
    // 0x1a737c: 0x0  nop
    ctx->pc = 0x1a737cu;
    // NOP
    ctx->pc = 0x1a7380u;
}
