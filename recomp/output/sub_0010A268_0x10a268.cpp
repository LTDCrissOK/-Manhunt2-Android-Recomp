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

// Function: sub_0010A268
// Address: 0x10a268 - 0x10a4c8
void sub_0010A268_0x10a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A268_0x10a268");
#endif

    switch (ctx->pc) {
        case 0x10a294u: goto label_10a294;
        case 0x10a2c0u: goto label_10a2c0;
        case 0x10a2d4u: goto label_10a2d4;
        case 0x10a3e0u: goto label_10a3e0;
        case 0x10a40cu: goto label_10a40c;
        case 0x10a414u: goto label_10a414;
        case 0x10a428u: goto label_10a428;
        case 0x10a430u: goto label_10a430;
        case 0x10a448u: goto label_10a448;
        case 0x10a45cu: goto label_10a45c;
        case 0x10a470u: goto label_10a470;
        case 0x10a484u: goto label_10a484;
        case 0x10a494u: goto label_10a494;
        default: break;
    }

    ctx->pc = 0x10a268u;

    // 0x10a268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a26c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a278: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a27c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10a280: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10a280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a288: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10a288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a28c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A28Cu;
    SET_GPR_U32(ctx, 31, 0x10A294u);
    ctx->pc = 0x10A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A28Cu;
    // 0x10a290: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A28Cu, 0x10A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A294u;
label_10a294:
    // 0x10a294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a298: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10a298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10a29c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10a2a0: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10a2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10a2a4: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10a2a8: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10A2A8u;
    {
        const bool branch_taken_0x10a2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a2a8) {
            ctx->pc = 0x10A2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A2A8u;
            // 0x10a2ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A2D8u;
            goto label_10a2d8;
        }
    }
    ctx->pc = 0x10A2B0u;
    // 0x10a2b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a2b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2b8: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10A2B8u;
    SET_GPR_U32(ctx, 31, 0x10A2C0u);
    ctx->pc = 0x10A2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A2B8u;
    // 0x10a2bc: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10A2B8u, 0x10A2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A2C0u;
label_10a2c0:
    // 0x10a2c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10a2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2cc: 0xc044138  jal         func_1104E0
    ctx->pc = 0x10A2CCu;
    SET_GPR_U32(ctx, 31, 0x10A2D4u);
    ctx->pc = 0x10A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A2CCu;
    // 0x10a2d0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x10A2CCu, 0x10A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A2D4u;
label_10a2d4:
    // 0x10a2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a2d8:
    // 0x10a2d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a2d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a2dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a2dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a2e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a2e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10a2e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a2e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x10A2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2ECu;
        // 0x10a2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A2F4u;
    // 0x10a2f4: 0x0  nop
    ctx->pc = 0x10a2f4u;
    // NOP
    // 0x10a2f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10a2fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10a300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a304: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10a304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a30c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10a30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a310: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a318: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10a31c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10a31cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a320: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10a324: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x10a324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a328: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x10a328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x10a32c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x10A32Cu;
    {
        const bool branch_taken_0x10a32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A32Cu;
        // 0x10a330: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a32c) {
            ctx->pc = 0x10A40Cu;
            goto label_10a40c;
        }
    }
    ctx->pc = 0x10A334u;
    // 0x10a334: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x10a334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x10a338: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x10a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x10a33c: 0x2442a650  addiu       $v0, $v0, -0x59B0
    ctx->pc = 0x10a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944336));
    // 0x10a340: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x10a340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a344: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10a344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a348: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a34c: 0x800008  jr          $a0
    ctx->pc = 0x10A34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A354u: goto label_10a354;
            case 0x10A364u: goto label_10a364;
            case 0x10A374u: goto label_10a374;
            case 0x10A388u: goto label_10a388;
            case 0x10A398u: goto label_10a398;
            case 0x10A3A8u: goto label_10a3a8;
            case 0x10A3B8u: goto label_10a3b8;
            case 0x10A3C8u: goto label_10a3c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A34Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10A354u;
label_10a354:
    // 0x10a354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a358: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a35c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10A35Cu;
    {
        const bool branch_taken_0x10a35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A35Cu;
        // 0x10a360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a35c) {
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A364u;
label_10a364:
    // 0x10a364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a368: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a36c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10A36Cu;
    {
        const bool branch_taken_0x10a36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A36Cu;
        // 0x10a370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a36c) {
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A374u;
label_10a374:
    // 0x10a374: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x10a374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
    // 0x10a378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a37c: 0x24c6a640  addiu       $a2, $a2, -0x59C0
    ctx->pc = 0x10a37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944320));
    // 0x10a380: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10A380u;
    {
        const bool branch_taken_0x10a380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A380u;
        // 0x10a384: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a380) {
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A388u;
label_10a388:
    // 0x10a388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a38c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10a390: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10A390u;
    {
        const bool branch_taken_0x10a390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A390u;
        // 0x10a394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a390) {
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A398u;
label_10a398:
    // 0x10a398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a39c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10a3a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10A3A0u;
    {
        const bool branch_taken_0x10a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3A0u;
        // 0x10a3a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3a0) {
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A3A8u;
label_10a3a8:
    // 0x10a3a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x10a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10a3b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10A3B0u;
    {
        const bool branch_taken_0x10a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3B0u;
        // 0x10a3b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3b0) {
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A3B8u;
label_10a3b8:
    // 0x10a3b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3bc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x10a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10a3c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10A3C0u;
    {
        const bool branch_taken_0x10a3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3C0u;
        // 0x10a3c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3c0) {
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A3C8u;
label_10a3c8:
    // 0x10a3c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3cc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x10a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10a3d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3d4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x10a3d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a3d8:
    // 0x10a3d8: 0xc0433b2  jal         func_10CEC8
    ctx->pc = 0x10A3D8u;
    SET_GPR_U32(ctx, 31, 0x10A3E0u);
    ctx->pc = 0x10CEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEC8u, 0x10A3D8u, 0x10A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3E0u;
label_10a3e0:
    // 0x10a3e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3e4: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x10a3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x10a3e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A3E8u;
    {
        const bool branch_taken_0x10a3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3E8u;
        // 0x10a3ec: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3e8) {
            ctx->pc = 0x10A40Cu;
            goto label_10a40c;
        }
    }
    ctx->pc = 0x10A3F0u;
    // 0x10a3f0: 0x2442a670  addiu       $v0, $v0, -0x5990
    ctx->pc = 0x10a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944368));
    // 0x10a3f4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10a3f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a3fc: 0x600008  jr          $v1
    ctx->pc = 0x10A3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A404u: goto label_10a404;
            case 0x10A40Cu: goto label_10a40c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A3FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10A404u;
label_10a404:
    // 0x10a404: 0xc05a5f6  jal         func_1697D8
    ctx->pc = 0x10A404u;
    SET_GPR_U32(ctx, 31, 0x10A40Cu);
    ctx->pc = 0x10A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A404u;
    // 0x10a408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697D8u, 0x10A404u, 0x10A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A40Cu;
label_10a40c:
    // 0x10a40c: 0xc05a5f0  jal         func_1697C0
    ctx->pc = 0x10A40Cu;
    SET_GPR_U32(ctx, 31, 0x10A414u);
    ctx->pc = 0x10A410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A40Cu;
    // 0x10a410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697C0u, 0x10A40Cu, 0x10A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A414u;
label_10a414:
    // 0x10a414: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x10A414u;
    {
        const bool branch_taken_0x10a414 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A414u;
        // 0x10a418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a414) {
            ctx->pc = 0x10A464u;
            goto label_10a464;
        }
    }
    ctx->pc = 0x10A41Cu;
    // 0x10a41c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a420: 0xc0433ec  jal         func_10CFB0
    ctx->pc = 0x10A420u;
    SET_GPR_U32(ctx, 31, 0x10A428u);
    ctx->pc = 0x10A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A420u;
    // 0x10a424: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFB0u, 0x10A420u, 0x10A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A428u;
label_10a428:
    // 0x10a428: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x10A428u;
    SET_GPR_U32(ctx, 31, 0x10A430u);
    ctx->pc = 0x10A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A428u;
    // 0x10a42c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x10A428u, 0x10A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A430u;
label_10a430:
    // 0x10a430: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A430u;
    {
        const bool branch_taken_0x10a430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A430u;
        // 0x10a434: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a430) {
            ctx->pc = 0x10A468u;
            goto label_10a468;
        }
    }
    ctx->pc = 0x10A438u;
    // 0x10a438: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A438u;
    {
        const bool branch_taken_0x10a438 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A438u;
        // 0x10a43c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a438) {
            ctx->pc = 0x10A450u;
            goto label_10a450;
        }
    }
    ctx->pc = 0x10A440u;
    // 0x10a440: 0xc043532  jal         func_10D4C8
    ctx->pc = 0x10A440u;
    SET_GPR_U32(ctx, 31, 0x10A448u);
    ctx->pc = 0x10A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A440u;
    // 0x10a444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4C8u, 0x10A440u, 0x10A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A448u;
label_10a448:
    // 0x10a448: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10A448u;
    {
        const bool branch_taken_0x10a448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A448u;
        // 0x10a44c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a448) {
            ctx->pc = 0x10A474u;
            goto label_10a474;
        }
    }
    ctx->pc = 0x10A450u;
label_10a450:
    // 0x10a450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a454: 0xc0434fe  jal         func_10D3F8
    ctx->pc = 0x10A454u;
    SET_GPR_U32(ctx, 31, 0x10A45Cu);
    ctx->pc = 0x10A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A454u;
    // 0x10a458: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D3F8u, 0x10A454u, 0x10A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A45Cu;
label_10a45c:
    // 0x10a45c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10A45Cu;
    {
        const bool branch_taken_0x10a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A45Cu;
        // 0x10a460: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a45c) {
            ctx->pc = 0x10A474u;
            goto label_10a474;
        }
    }
    ctx->pc = 0x10A464u;
label_10a464:
    // 0x10a464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a468:
    // 0x10a468: 0xc0434ee  jal         func_10D3B8
    ctx->pc = 0x10A468u;
    SET_GPR_U32(ctx, 31, 0x10A470u);
    ctx->pc = 0x10A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A468u;
    // 0x10a46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D3B8u, 0x10A468u, 0x10A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A470u;
label_10a470:
    // 0x10a470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a474:
    // 0x10a474: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A474u;
    {
        const bool branch_taken_0x10a474 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A474u;
        // 0x10a478: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a474) {
            ctx->pc = 0x10A498u;
            goto label_10a498;
        }
    }
    ctx->pc = 0x10A47Cu;
    // 0x10a47c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x10A47Cu;
    SET_GPR_U32(ctx, 31, 0x10A484u);
    ctx->pc = 0x10A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A47Cu;
    // 0x10a480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x10A47Cu, 0x10A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A484u;
label_10a484:
    // 0x10a484: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a488: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10a488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a48c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x10A48Cu;
    SET_GPR_U32(ctx, 31, 0x10A494u);
    ctx->pc = 0x10A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A48Cu;
    // 0x10a490: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x10A48Cu, 0x10A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A494u;
label_10a494:
    // 0x10a494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10a494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a498:
    // 0x10a498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a49c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a4a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a4a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a4a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10a4a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a4a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10a4a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a4ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10a4acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10a4b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10a4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4B4u;
        // 0x10a4b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A4BCu;
    // 0x10a4bc: 0x0  nop
    ctx->pc = 0x10a4bcu;
    // NOP
    // 0x10a4c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10a4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10a4c4: 0x0  nop
    ctx->pc = 0x10a4c4u;
    // NOP
    ctx->pc = 0x10a4c8u;
}
