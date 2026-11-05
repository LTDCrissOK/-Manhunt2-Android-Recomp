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

// Function: sub_003613C8
// Address: 0x3613c8 - 0x361990
void sub_003613C8_0x3613c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003613C8_0x3613c8");
#endif

    switch (ctx->pc) {
        case 0x36144cu: goto label_36144c;
        case 0x361470u: goto label_361470;
        case 0x3614b4u: goto label_3614b4;
        case 0x3615d8u: goto label_3615d8;
        case 0x3615e4u: goto label_3615e4;
        case 0x3615f4u: goto label_3615f4;
        case 0x361628u: goto label_361628;
        case 0x3616c8u: goto label_3616c8;
        case 0x3616f8u: goto label_3616f8;
        case 0x361768u: goto label_361768;
        case 0x361774u: goto label_361774;
        case 0x361784u: goto label_361784;
        case 0x361790u: goto label_361790;
        case 0x361808u: goto label_361808;
        case 0x361830u: goto label_361830;
        case 0x36185cu: goto label_36185c;
        case 0x36188cu: goto label_36188c;
        case 0x361898u: goto label_361898;
        case 0x3618a8u: goto label_3618a8;
        case 0x3618b8u: goto label_3618b8;
        case 0x3618d0u: goto label_3618d0;
        case 0x3618dcu: goto label_3618dc;
        case 0x3618ecu: goto label_3618ec;
        case 0x361900u: goto label_361900;
        default: break;
    }

    ctx->pc = 0x3613c8u;

    // 0x3613c8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3613c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x3613cc: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x3613ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x3613d0: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x3613d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x3613d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3613d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613d8: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x3613d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x3613dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3613dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613e0: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x3613e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x3613e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3613e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613e8: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x3613e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x3613ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3613ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613f0: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x3613f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x3613f4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3613f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613f8: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x3613f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x3613fc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3613fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361400: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x361400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x361404: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x361404u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361408: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x361408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x36140c: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x36140cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x361410: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x361410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x361414: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x361414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x361418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36141c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36141Cu;
    {
        const bool branch_taken_0x36141c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x361420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36141Cu;
        // 0x361420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36141c) {
            ctx->pc = 0x361438u;
            goto label_361438;
        }
    }
    ctx->pc = 0x361424u;
    // 0x361424: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x361424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361428: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x361428u;
    {
        const bool branch_taken_0x361428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361428u;
        // 0x36142c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361428) {
            ctx->pc = 0x361438u;
            goto label_361438;
        }
    }
    ctx->pc = 0x361430u;
    // 0x361430: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x361430u;
    {
        const bool branch_taken_0x361430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x361430) {
            ctx->pc = 0x36143Cu;
            goto label_36143c;
        }
    }
    ctx->pc = 0x361438u;
label_361438:
    // 0x361438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x361438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36143c:
    // 0x36143c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x36143Cu;
    {
        const bool branch_taken_0x36143c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36143c) {
            ctx->pc = 0x361468u;
            goto label_361468;
        }
    }
    ctx->pc = 0x361444u;
    // 0x361444: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x361444u;
    SET_GPR_U32(ctx, 31, 0x36144Cu);
    ctx->pc = 0x361448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361444u;
    // 0x361448: 0x8e840334  lw          $a0, 0x334($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x361444u, 0x36144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36144Cu;
label_36144c:
    // 0x36144c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36144Cu;
    {
        const bool branch_taken_0x36144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36144Cu;
        // 0x361450: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36144c) {
            ctx->pc = 0x361468u;
            goto label_361468;
        }
    }
    ctx->pc = 0x361454u;
    // 0x361454: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x361454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x361458: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x361458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36145c: 0x1464013f  bne         $v1, $a0, . + 4 + (0x13F << 2)
    ctx->pc = 0x36145Cu;
    {
        const bool branch_taken_0x36145c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x361460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36145Cu;
        // 0x361460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36145c) {
            ctx->pc = 0x36195Cu;
            goto label_36195c;
        }
    }
    ctx->pc = 0x361464u;
    // 0x361464: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x361464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_361468:
    // 0x361468: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x361468u;
    SET_GPR_U32(ctx, 31, 0x361470u);
    ctx->pc = 0x36146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361468u;
    // 0x36146c: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x361468u, 0x361470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361470u;
label_361470:
    // 0x361470: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x361470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x361474: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361474u;
    {
        const bool branch_taken_0x361474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361474) {
            ctx->pc = 0x361478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361474u;
            // 0x361478: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x361488u;
            goto label_361488;
        }
    }
    ctx->pc = 0x36147Cu;
    // 0x36147c: 0x1200009c  beqz        $s0, . + 4 + (0x9C << 2)
    ctx->pc = 0x36147Cu;
    {
        const bool branch_taken_0x36147c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x361480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36147Cu;
        // 0x361480: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36147c) {
            ctx->pc = 0x3616F0u;
            goto label_3616f0;
        }
    }
    ctx->pc = 0x361484u;
    // 0x361484: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x361484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_361488:
    // 0x361488: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x361488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36148c: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x36148cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x361490: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x361490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361494: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x361494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x361498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x361498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36149c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x36149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3614a0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3614a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614a4: 0x1054026  xor         $t0, $t0, $a1
    ctx->pc = 0x3614a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 5));
    // 0x3614a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3614a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3614ac: 0xc08a206  jal         func_228818
    ctx->pc = 0x3614ACu;
    SET_GPR_U32(ctx, 31, 0x3614B4u);
    ctx->pc = 0x3614B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3614ACu;
    // 0x3614b0: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228818u, 0x3614ACu, 0x3614B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3614B4u;
label_3614b4:
    // 0x3614b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3614b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614b8: 0x12200128  beqz        $s1, . + 4 + (0x128 << 2)
    ctx->pc = 0x3614B8u;
    {
        const bool branch_taken_0x3614b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3614BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3614B8u;
        // 0x3614bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3614b8) {
            ctx->pc = 0x36195Cu;
            goto label_36195c;
        }
    }
    ctx->pc = 0x3614C0u;
    // 0x3614c0: 0x52000043  beql        $s0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x3614C0u;
    {
        const bool branch_taken_0x3614c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3614c0) {
            ctx->pc = 0x3614C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3614C0u;
            // 0x3614c4: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3615D0u;
            goto label_3615d0;
        }
    }
    ctx->pc = 0x3614C8u;
    // 0x3614c8: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x3614c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3614cc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3614ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3614d0: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x3614D0u;
    {
        const bool branch_taken_0x3614d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3614d0) {
            ctx->pc = 0x3618BCu;
            goto label_3618bc;
        }
    }
    ctx->pc = 0x3614D8u;
    // 0x3614d8: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x3614d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x3614dc: 0x8e850104  lw          $a1, 0x104($s4)
    ctx->pc = 0x3614dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x3614e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3614e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3614e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3614e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3614e8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x3614e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x3614ec: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x3614ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x3614f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3614f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3614f4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3614f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3614f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3614f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3614fc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3614fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361500: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x361500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361504: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x361504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361508: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x361508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36150c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x36150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x361510: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x361510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x361514: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x361514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x361518: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x361518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36151c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x36151cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x361520: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x361520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361524: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x361524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361528: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x361528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36152c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x36152cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x361530: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x361530u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x361534: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x361534u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x361538: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x361538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x36153c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x36153cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x361540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x361540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361544: 0x0  nop
    ctx->pc = 0x361544u;
    // NOP
    // 0x361548: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x361548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36154c: 0x0  nop
    ctx->pc = 0x36154cu;
    // NOP
    // 0x361550: 0x450000da  bc1f        . + 4 + (0xDA << 2)
    ctx->pc = 0x361550u;
    {
        const bool branch_taken_0x361550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x361550) {
            ctx->pc = 0x3618BCu;
            goto label_3618bc;
        }
    }
    ctx->pc = 0x361558u;
    // 0x361558: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x361558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36155c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x36155cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361560: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x361560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361564: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x361564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361568: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x361568u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x36156c: 0x4a0003bf  vwaitq
    ctx->pc = 0x36156cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x361570: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x361570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361574: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x361574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361578: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x361578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x36157c: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x36157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x361580: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x361580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x361584: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x361584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x361588: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x361588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36158c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x36158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361590: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x361590u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x361594: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x361594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361598: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x361598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36159c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x36159cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x3615a0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3615a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3615a4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3615a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3615a8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x3615a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3615ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3615acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3615b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3615b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3615b4: 0x0  nop
    ctx->pc = 0x3615b4u;
    // NOP
    // 0x3615b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3615b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3615bc: 0x0  nop
    ctx->pc = 0x3615bcu;
    // NOP
    // 0x3615c0: 0x450000be  bc1f        . + 4 + (0xBE << 2)
    ctx->pc = 0x3615C0u;
    {
        const bool branch_taken_0x3615c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3615c0) {
            ctx->pc = 0x3618BCu;
            goto label_3618bc;
        }
    }
    ctx->pc = 0x3615C8u;
    // 0x3615c8: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x3615C8u;
    {
        const bool branch_taken_0x3615c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3615CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3615C8u;
        // 0x3615cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3615c8) {
            ctx->pc = 0x3618BCu;
            goto label_3618bc;
        }
    }
    ctx->pc = 0x3615D0u;
label_3615d0:
    // 0x3615d0: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x3615D0u;
    SET_GPR_U32(ctx, 31, 0x3615D8u);
    ctx->pc = 0x3615D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3615D0u;
    // 0x3615d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x3615D0u, 0x3615D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615D8u;
label_3615d8:
    // 0x3615d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3615d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3615dc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x3615DCu;
    SET_GPR_U32(ctx, 31, 0x3615E4u);
    ctx->pc = 0x3615E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3615DCu;
    // 0x3615e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x3615DCu, 0x3615E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615E4u;
label_3615e4:
    // 0x3615e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3615E4u;
    {
        const bool branch_taken_0x3615e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3615e4) {
            ctx->pc = 0x3615E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3615E4u;
            // 0x3615e8: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3615F8u;
            goto label_3615f8;
        }
    }
    ctx->pc = 0x3615ECu;
    // 0x3615ec: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3615ECu;
    SET_GPR_U32(ctx, 31, 0x3615F4u);
    ctx->pc = 0x3615F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3615ECu;
    // 0x3615f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3615ECu, 0x3615F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615F4u;
label_3615f4:
    // 0x3615f4: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x3615f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3615f8:
    // 0x3615f8: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x3615f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x3615fc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3615fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x361600: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x361600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361604: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x361604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x361608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36160c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361610: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x361610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x361614: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x361614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361618: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x361618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36161c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x36161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361620: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x361620u;
    SET_GPR_U32(ctx, 31, 0x361628u);
    ctx->pc = 0x361624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361620u;
    // 0x361624: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x361620u, 0x361628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361628u;
label_361628:
    // 0x361628: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x361628u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36162c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x36162cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361630: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x361630u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361634: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x361634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361638: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x361638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36163c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x36163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x361640: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x361640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361644: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x361644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361648: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x361648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36164c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x36164cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x361650: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x361650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x361654: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x361654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x361658: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x361658u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x36165c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361660: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x361660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361664: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x361664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x361668: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x361668u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x36166c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x36166cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x361670: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x361670u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x361674: 0x46000004  c1          0x4
    ctx->pc = 0x361674u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x361678: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x361678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x36167c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361680: 0xc4420054  lwc1        $f2, 0x54($v0)
    ctx->pc = 0x361680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361684: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x361684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361688: 0x0  nop
    ctx->pc = 0x361688u;
    // NOP
    // 0x36168c: 0x4500008b  bc1f        . + 4 + (0x8B << 2)
    ctx->pc = 0x36168Cu;
    {
        const bool branch_taken_0x36168c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36168c) {
            ctx->pc = 0x3618BCu;
            goto label_3618bc;
        }
    }
    ctx->pc = 0x361694u;
    // 0x361694: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x361694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361698: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x361698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36169c: 0xc454005c  lwc1        $f20, 0x5C($v0)
    ctx->pc = 0x36169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3616a0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3616a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3616a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3616a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3616a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3616a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3616ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3616acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3616b0: 0x46146881  sub.s       $f2, $f13, $f20
    ctx->pc = 0x3616b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
    // 0x3616b4: 0x0  nop
    ctx->pc = 0x3616b4u;
    // NOP
    // 0x3616b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3616b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3616bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3616bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3616c0: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x3616C0u;
    SET_GPR_U32(ctx, 31, 0x3616C8u);
    ctx->pc = 0x3616C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3616C0u;
    // 0x3616c4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x3616C0u, 0x3616C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3616C8u;
label_3616c8:
    // 0x3616c8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3616c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3616cc: 0x0  nop
    ctx->pc = 0x3616ccu;
    // NOP
    // 0x3616d0: 0x4503007a  bc1tl       . + 4 + (0x7A << 2)
    ctx->pc = 0x3616D0u;
    {
        const bool branch_taken_0x3616d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3616d0) {
            ctx->pc = 0x3616D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3616D0u;
            // 0x3616d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3618BCu;
            goto label_3618bc;
        }
    }
    ctx->pc = 0x3616D8u;
    // 0x3616d8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3616d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3616dc: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x3616dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x3616e0: 0x14620076  bne         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x3616E0u;
    {
        const bool branch_taken_0x3616e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3616E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3616E0u;
        // 0x3616e4: 0x24020448  addiu       $v0, $zero, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3616e0) {
            ctx->pc = 0x3618BCu;
            goto label_3618bc;
        }
    }
    ctx->pc = 0x3616E8u;
    // 0x3616e8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x3616E8u;
    {
        const bool branch_taken_0x3616e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3616ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3616E8u;
        // 0x3616ec: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3616e8) {
            ctx->pc = 0x3618BCu;
            goto label_3618bc;
        }
    }
    ctx->pc = 0x3616F0u;
label_3616f0:
    // 0x3616f0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x3616F0u;
    SET_GPR_U32(ctx, 31, 0x3616F8u);
    ctx->pc = 0x3616F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3616F0u;
    // 0x3616f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x3616F0u, 0x3616F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3616F8u;
label_3616f8:
    // 0x3616f8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x3616f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x3616fc: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x3616fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x361700: 0xc4406ef0  lwc1        $f0, 0x6EF0($v0)
    ctx->pc = 0x361700u;
    { uint32_t bits = FAST_READ32(0x476EF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361704: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x361704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361708: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x361708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x36170c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x36170cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x361710: 0x10870005  beq         $a0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x361710u;
    {
        const bool branch_taken_0x361710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x361714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361710u;
        // 0x361714: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361710) {
            ctx->pc = 0x361728u;
            goto label_361728;
        }
    }
    ctx->pc = 0x361718u;
    // 0x361718: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x361718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36171c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361720: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x361720u;
    {
        const bool branch_taken_0x361720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x361720) {
            ctx->pc = 0x361838u;
            goto label_361838;
        }
    }
    ctx->pc = 0x361728u;
label_361728:
    // 0x361728: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x361728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x36172c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x36172cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x361730: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x361730u;
    {
        const bool branch_taken_0x361730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361730) {
            ctx->pc = 0x361734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361730u;
            // 0x361734: 0x8e8300c4  lw          $v1, 0xC4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36181Cu;
            goto label_36181c;
        }
    }
    ctx->pc = 0x361738u;
    // 0x361738: 0x8e830334  lw          $v1, 0x334($s4)
    ctx->pc = 0x361738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x36173c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x36173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x361740: 0x2442ffb4  addiu       $v0, $v0, -0x4C
    ctx->pc = 0x361740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967220));
    // 0x361744: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x361744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x361748: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x361748u;
    {
        const bool branch_taken_0x361748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361748) {
            ctx->pc = 0x36174Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361748u;
            // 0x36174c: 0x8e8300c4  lw          $v1, 0xC4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36181Cu;
            goto label_36181c;
        }
    }
    ctx->pc = 0x361750u;
    // 0x361750: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x361750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x361754: 0x54470031  bnel        $v0, $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x361754u;
    {
        const bool branch_taken_0x361754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x361754) {
            ctx->pc = 0x361758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361754u;
            // 0x361758: 0x8e8300c4  lw          $v1, 0xC4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36181Cu;
            goto label_36181c;
        }
    }
    ctx->pc = 0x36175Cu;
    // 0x36175c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36175cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361760: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x361760u;
    SET_GPR_U32(ctx, 31, 0x361768u);
    ctx->pc = 0x361764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361760u;
    // 0x361764: 0x24050447  addiu       $a1, $zero, 0x447 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x361760u, 0x361768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361768u;
label_361768:
    // 0x361768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x361768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36176c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x36176Cu;
    SET_GPR_U32(ctx, 31, 0x361774u);
    ctx->pc = 0x361770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36176Cu;
    // 0x361770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x36176Cu, 0x361774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361774u;
label_361774:
    // 0x361774: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361774u;
    {
        const bool branch_taken_0x361774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361774u;
        // 0x361778: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361774) {
            ctx->pc = 0x361788u;
            goto label_361788;
        }
    }
    ctx->pc = 0x36177Cu;
    // 0x36177c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x36177Cu;
    SET_GPR_U32(ctx, 31, 0x361784u);
    ctx->pc = 0x361780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36177Cu;
    // 0x361780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x36177Cu, 0x361784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361784u;
label_361784:
    // 0x361784: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x361784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_361788:
    // 0x361788: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x361788u;
    SET_GPR_U32(ctx, 31, 0x361790u);
    ctx->pc = 0x36178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361788u;
    // 0x36178c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x361788u, 0x361790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361790u;
label_361790:
    // 0x361790: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x361790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x361794: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x361794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x361798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x361798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36179c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x36179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x3617a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3617a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3617a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3617a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3617a8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x3617a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x3617ac: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x3617acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x3617b0: 0x7a2200b0  lq          $v0, 0xB0($s1)
    ctx->pc = 0x3617b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x3617b4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3617b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3617b8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x3617b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3617bc: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x3617bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3617c0: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x3617c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3617c4: 0xc7a400bc  lwc1        $f4, 0xBC($sp)
    ctx->pc = 0x3617c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3617c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3617c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3617cc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3617ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3617d0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3617d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3617d4: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x3617d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3617d8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3617d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3617dc: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x3617dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3617e0: 0xc6540020  lwc1        $f20, 0x20($s2)
    ctx->pc = 0x3617e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3617e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3617e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3617e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3617ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617f0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x3617f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3617f4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x3617f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3617f8: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x3617f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3617fc: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x3617fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x361800: 0xc0788c0  jal         func_1E2300
    ctx->pc = 0x361800u;
    SET_GPR_U32(ctx, 31, 0x361808u);
    ctx->pc = 0x361804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361800u;
    // 0x361804: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2300u, 0x361800u, 0x361808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361808u;
label_361808:
    // 0x361808: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x361808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x36180c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36180cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361810: 0xe6540020  swc1        $f20, 0x20($s2)
    ctx->pc = 0x361810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x361814: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x361814u;
    {
        const bool branch_taken_0x361814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361814u;
        // 0x361818: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x361814) {
            ctx->pc = 0x361860u;
            goto label_361860;
        }
    }
    ctx->pc = 0x36181Cu;
label_36181c:
    // 0x36181c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36181cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361820: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x361820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x361824: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x361824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x361828: 0xc07a498  jal         func_1E9260
    ctx->pc = 0x361828u;
    SET_GPR_U32(ctx, 31, 0x361830u);
    ctx->pc = 0x36182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361828u;
    // 0x36182c: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9260u, 0x361828u, 0x361830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361830u;
label_361830:
    // 0x361830: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x361830u;
    {
        const bool branch_taken_0x361830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361830u;
        // 0x361834: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361830) {
            ctx->pc = 0x361860u;
            goto label_361860;
        }
    }
    ctx->pc = 0x361838u;
label_361838:
    // 0x361838: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x361838u;
    {
        const bool branch_taken_0x361838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361838u;
        // 0x36183c: 0x24020448  addiu       $v0, $zero, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361838) {
            ctx->pc = 0x361864u;
            goto label_361864;
        }
    }
    ctx->pc = 0x361840u;
    // 0x361840: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x361840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x361844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361848: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x361848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36184c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x36184cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x361850: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x361850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x361854: 0xc077410  jal         func_1DD040
    ctx->pc = 0x361854u;
    SET_GPR_U32(ctx, 31, 0x36185Cu);
    ctx->pc = 0x361858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361854u;
    // 0x361858: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD040u, 0x361854u, 0x36185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36185Cu;
label_36185c:
    // 0x36185c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36185cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_361860:
    // 0x361860: 0x24020448  addiu       $v0, $zero, 0x448
    ctx->pc = 0x361860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
label_361864:
    // 0x361864: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x361864u;
    {
        const bool branch_taken_0x361864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x361868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361864u;
        // 0x361868: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361864) {
            ctx->pc = 0x361958u;
            goto label_361958;
        }
    }
    ctx->pc = 0x36186Cu;
    // 0x36186c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x36186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x361870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x361870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361874: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x361874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x361878: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x361878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x36187c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36187Cu;
    {
        const bool branch_taken_0x36187c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36187Cu;
        // 0x361880: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36187c) {
            ctx->pc = 0x3618BCu;
            goto label_3618bc;
        }
    }
    ctx->pc = 0x361884u;
    // 0x361884: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x361884u;
    SET_GPR_U32(ctx, 31, 0x36188Cu);
    ctx->pc = 0x361888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361884u;
    // 0x361888: 0x24050448  addiu       $a1, $zero, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x361884u, 0x36188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36188Cu;
label_36188c:
    // 0x36188c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36188cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361890: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x361890u;
    SET_GPR_U32(ctx, 31, 0x361898u);
    ctx->pc = 0x361894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361890u;
    // 0x361894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x361890u, 0x361898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361898u;
label_361898:
    // 0x361898: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361898u;
    {
        const bool branch_taken_0x361898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361898u;
        // 0x36189c: 0x260500b0  addiu       $a1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361898) {
            ctx->pc = 0x3618ACu;
            goto label_3618ac;
        }
    }
    ctx->pc = 0x3618A0u;
    // 0x3618a0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3618A0u;
    SET_GPR_U32(ctx, 31, 0x3618A8u);
    ctx->pc = 0x3618A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618A0u;
    // 0x3618a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3618A0u, 0x3618A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618A8u;
label_3618a8:
    // 0x3618a8: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x3618a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_3618ac:
    // 0x3618ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3618acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618b0: 0xc0d80c6  jal         func_360318
    ctx->pc = 0x3618B0u;
    SET_GPR_U32(ctx, 31, 0x3618B8u);
    ctx->pc = 0x3618B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618B0u;
    // 0x3618b4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360318u, 0x3618B0u, 0x3618B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618B8u;
label_3618b8:
    // 0x3618b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3618b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3618bc:
    // 0x3618bc: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3618BCu;
    {
        const bool branch_taken_0x3618bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3618C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3618BCu;
        // 0x3618c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3618bc) {
            ctx->pc = 0x36195Cu;
            goto label_36195c;
        }
    }
    ctx->pc = 0x3618C4u;
    // 0x3618c4: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x3618c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3618c8: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x3618C8u;
    SET_GPR_U32(ctx, 31, 0x3618D0u);
    ctx->pc = 0x3618CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618C8u;
    // 0x3618cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x3618C8u, 0x3618D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618D0u;
label_3618d0:
    // 0x3618d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3618d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618d4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x3618D4u;
    SET_GPR_U32(ctx, 31, 0x3618DCu);
    ctx->pc = 0x3618D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618D4u;
    // 0x3618d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x3618D4u, 0x3618DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618DCu;
label_3618dc:
    // 0x3618dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3618DCu;
    {
        const bool branch_taken_0x3618dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3618E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3618DCu;
        // 0x3618e0: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3618dc) {
            ctx->pc = 0x3618F0u;
            goto label_3618f0;
        }
    }
    ctx->pc = 0x3618E4u;
    // 0x3618e4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3618E4u;
    SET_GPR_U32(ctx, 31, 0x3618ECu);
    ctx->pc = 0x3618E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618E4u;
    // 0x3618e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3618E4u, 0x3618ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618ECu;
label_3618ec:
    // 0x3618ec: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3618ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3618f0:
    // 0x3618f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3618f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3618f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618f8: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x3618F8u;
    SET_GPR_U32(ctx, 31, 0x361900u);
    ctx->pc = 0x3618FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618F8u;
    // 0x3618fc: 0x261000b0  addiu       $s0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x3618F8u, 0x361900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361900u;
label_361900:
    // 0x361900: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x361900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361904: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x361904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361908: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x361908u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36190c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x36190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361910: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x361910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361914: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x361914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361918: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x361918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36191c: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x36191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x361920: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x361920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x361924: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x361924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x361928: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x361928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36192c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x36192cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x361930: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x361930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361934: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x361934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361938: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x361938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36193c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x36193cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x361940: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x361940u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x361944: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x361944u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x361948: 0x46000004  c1          0x4
    ctx->pc = 0x361948u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x36194c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x36194cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x361950: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x361950u;
    {
        const bool branch_taken_0x361950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361950u;
        // 0x361954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361950) {
            ctx->pc = 0x36195Cu;
            goto label_36195c;
        }
    }
    ctx->pc = 0x361958u;
label_361958:
    // 0x361958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36195c:
    // 0x36195c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x36195cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x361960: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x361960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x361964: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x361964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x361968: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x361968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x36196c: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x36196cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x361970: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x361970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x361974: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x361974u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x361978: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x361978u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x36197c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x36197cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x361980: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x361980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x361984: 0x3e00008  jr          $ra
    ctx->pc = 0x361984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361984u;
        // 0x361988: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36198Cu;
    // 0x36198c: 0x0  nop
    ctx->pc = 0x36198cu;
    // NOP
    ctx->pc = 0x361990u;
}
