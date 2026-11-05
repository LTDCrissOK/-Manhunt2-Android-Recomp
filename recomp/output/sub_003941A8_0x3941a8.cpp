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

// Function: sub_003941A8
// Address: 0x3941a8 - 0x394458
void sub_003941A8_0x3941a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003941A8_0x3941a8");
#endif

    switch (ctx->pc) {
        case 0x3941d0u: goto label_3941d0;
        case 0x3941f8u: goto label_3941f8;
        case 0x394218u: goto label_394218;
        case 0x39423cu: goto label_39423c;
        case 0x394288u: goto label_394288;
        case 0x3942a0u: goto label_3942a0;
        case 0x3942e4u: goto label_3942e4;
        case 0x394308u: goto label_394308;
        case 0x394330u: goto label_394330;
        case 0x394364u: goto label_394364;
        case 0x39437cu: goto label_39437c;
        case 0x3943a0u: goto label_3943a0;
        case 0x3943f4u: goto label_3943f4;
        case 0x394408u: goto label_394408;
        default: break;
    }

    ctx->pc = 0x3941a8u;

    // 0x3941a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3941a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3941ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3941acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3941b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3941b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3941b4: 0x2454ea80  addiu       $s4, $v0, -0x1580
    ctx->pc = 0x3941b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961792));
    // 0x3941b8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3941b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FEA80u));
    // 0x3941bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3941bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3941c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3941c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3941c4: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x3941c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3941c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3941c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3941cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3941ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3941d0:
    // 0x3941d0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3941d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3941d4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3941d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x3941d8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3941d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3941dc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x3941dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x3941e0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3941e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3941e4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x3941e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x3941e8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3941e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3941ec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3941ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3941f0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x3941f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x3941f4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3941f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_3941f8:
    // 0x3941f8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x3941f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x3941fc: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x3941fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x394200: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x394200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x394204: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x394204u;
    {
        const bool branch_taken_0x394204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x394208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394204u;
        // 0x394208: 0x8fb30078  lw          $s3, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394204) {
            ctx->pc = 0x394220u;
            goto label_394220;
        }
    }
    ctx->pc = 0x39420Cu;
    // 0x39420c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39420cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x394210: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x394210u;
    SET_GPR_U32(ctx, 31, 0x394218u);
    ctx->pc = 0x394214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394210u;
    // 0x394214: 0x2484a578  addiu       $a0, $a0, -0x5A88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x394210u, 0x394218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394218u;
label_394218:
    // 0x394218: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x394218u;
    {
        const bool branch_taken_0x394218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394218u;
        // 0x39421c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394218) {
            ctx->pc = 0x394424u;
            goto label_394424;
        }
    }
    ctx->pc = 0x394220u;
label_394220:
    // 0x394220: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x394220u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x394224: 0x2516ea78  addiu       $s6, $t0, -0x1588
    ctx->pc = 0x394224u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961784));
    // 0x394228: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x394228u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FEA78u));
    // 0x39422c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39422Cu;
    {
        const bool branch_taken_0x39422c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x394230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39422Cu;
        // 0x394230: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39422c) {
            ctx->pc = 0x394244u;
            goto label_394244;
        }
    }
    ctx->pc = 0x394234u;
    // 0x394234: 0xc0e53da  jal         func_394F68
    ctx->pc = 0x394234u;
    SET_GPR_U32(ctx, 31, 0x39423Cu);
    ctx->pc = 0x394F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F68u, 0x394234u, 0x39423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39423Cu;
label_39423c:
    // 0x39423c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x39423cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x394240: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x394240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_394244:
    // 0x394244: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x394244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x394248: 0x2451ea7c  addiu       $s1, $v0, -0x1584
    ctx->pc = 0x394248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961788));
    // 0x39424c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394250: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x394250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x394254: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x394254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x394258: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x394258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39425c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39425Cu;
    {
        const bool branch_taken_0x39425c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39425Cu;
        // 0x394260: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39425c) {
            ctx->pc = 0x394270u;
            goto label_394270;
        }
    }
    ctx->pc = 0x394264u;
    // 0x394264: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x394264u;
    {
        const bool branch_taken_0x394264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394264u;
        // 0x394268: 0x2484a5b8  addiu       $a0, $a0, -0x5A48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394264) {
            ctx->pc = 0x394280u;
            goto label_394280;
        }
    }
    ctx->pc = 0x39426Cu;
    // 0x39426c: 0x0  nop
    ctx->pc = 0x39426cu;
    // NOP
label_394270:
    // 0x394270: 0x1e600009  bgtz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x394270u;
    {
        const bool branch_taken_0x394270 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x394274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394270u;
        // 0x394274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394270) {
            ctx->pc = 0x394298u;
            goto label_394298;
        }
    }
    ctx->pc = 0x394278u;
    // 0x394278: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x394278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39427c: 0x2484a5e8  addiu       $a0, $a0, -0x5A18
    ctx->pc = 0x39427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944232));
label_394280:
    // 0x394280: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x394280u;
    SET_GPR_U32(ctx, 31, 0x394288u);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x394280u, 0x394288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394288u;
label_394288:
    // 0x394288: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x394288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39428c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x39428cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x394290: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x394290u;
    {
        const bool branch_taken_0x394290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394290u;
        // 0x394294: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394290) {
            ctx->pc = 0x394424u;
            goto label_394424;
        }
    }
    ctx->pc = 0x394298u;
label_394298:
    // 0x394298: 0xc0e4fe6  jal         func_393F98
    ctx->pc = 0x394298u;
    SET_GPR_U32(ctx, 31, 0x3942A0u);
    ctx->pc = 0x39429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394298u;
    // 0x39429c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393F98u, 0x394298u, 0x3942A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3942A0u;
label_3942a0:
    // 0x3942a0: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3942A0u;
    {
        const bool branch_taken_0x3942a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3942A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942A0u;
        // 0x3942a4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942a0) {
            ctx->pc = 0x39433Cu;
            goto label_39433c;
        }
    }
    ctx->pc = 0x3942A8u;
    // 0x3942a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3942a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3942ac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3942ACu;
    {
        const bool branch_taken_0x3942ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3942B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942ACu;
        // 0x3942b0: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942ac) {
            ctx->pc = 0x3942C0u;
            goto label_3942c0;
        }
    }
    ctx->pc = 0x3942B4u;
    // 0x3942b4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3942B4u;
    {
        const bool branch_taken_0x3942b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3942B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942B4u;
        // 0x3942b8: 0x2484a610  addiu       $a0, $a0, -0x59F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942b4) {
            ctx->pc = 0x394374u;
            goto label_394374;
        }
    }
    ctx->pc = 0x3942BCu;
    // 0x3942bc: 0x0  nop
    ctx->pc = 0x3942bcu;
    // NOP
label_3942c0:
    // 0x3942c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3942c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3942c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3942c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3942c8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3942c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3942cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3942ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3942d0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x3942d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x3942d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3942d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3942d8: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x3942d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x3942dc: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3942DCu;
    SET_GPR_U32(ctx, 31, 0x3942E4u);
    ctx->pc = 0x3942E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3942DCu;
    // 0x3942e0: 0xac40ea74  sw          $zero, -0x158C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961780), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3942DCu, 0x3942E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3942E4u;
label_3942e4:
    // 0x3942e4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3942e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3942e8: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x3942e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x3942ec: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x3942ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x3942f0: 0xac30e548  sw          $s0, -0x1AB8($at)
    ctx->pc = 0x3942f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960456), GPR_U32(ctx, 16));
    // 0x3942f4: 0x16a00016  bnez        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x3942F4u;
    {
        const bool branch_taken_0x3942f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3942F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942F4u;
        // 0x3942f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942f4) {
            ctx->pc = 0x394350u;
            goto label_394350;
        }
    }
    ctx->pc = 0x3942FCu;
    // 0x3942fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3942fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394300: 0xc0e5388  jal         func_394E20
    ctx->pc = 0x394300u;
    SET_GPR_U32(ctx, 31, 0x394308u);
    ctx->pc = 0x394304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394300u;
    // 0x394304: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394E20u, 0x394300u, 0x394308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394308u;
label_394308:
    // 0x394308: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x394308u;
    {
        const bool branch_taken_0x394308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394308u;
        // 0x39430c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394308) {
            ctx->pc = 0x39436Cu;
            goto label_39436c;
        }
    }
    ctx->pc = 0x394310u;
    // 0x394310: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x394310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394314: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x394314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394318: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x394318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x39431c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x39431cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394320: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x394320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x394324: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x394324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x394328: 0xc0e5702  jal         func_395C08
    ctx->pc = 0x394328u;
    SET_GPR_U32(ctx, 31, 0x394330u);
    ctx->pc = 0x39432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394328u;
    // 0x39432c: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395C08u, 0x394328u, 0x394330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394330u;
label_394330:
    // 0x394330: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394330u;
    {
        const bool branch_taken_0x394330 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x394330) {
            ctx->pc = 0x394334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394330u;
            // 0x394334: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394348u;
            goto label_394348;
        }
    }
    ctx->pc = 0x394338u;
    // 0x394338: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x394338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39433c:
    // 0x39433c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x39433Cu;
    {
        const bool branch_taken_0x39433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39433Cu;
        // 0x394340: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39433c) {
            ctx->pc = 0x394424u;
            goto label_394424;
        }
    }
    ctx->pc = 0x394344u;
    // 0x394344: 0x0  nop
    ctx->pc = 0x394344u;
    // NOP
label_394348:
    // 0x394348: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x394348u;
    {
        const bool branch_taken_0x394348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394348u;
        // 0x39434c: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394348) {
            ctx->pc = 0x3943A8u;
            goto label_3943a8;
        }
    }
    ctx->pc = 0x394350u;
label_394350:
    // 0x394350: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x394350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394354: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x394354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394358: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x394358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x39435c: 0xc0e5318  jal         func_394C60
    ctx->pc = 0x39435Cu;
    SET_GPR_U32(ctx, 31, 0x394364u);
    ctx->pc = 0x394360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39435Cu;
    // 0x394360: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394C60u, 0x39435Cu, 0x394364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394364u;
label_394364:
    // 0x394364: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x394364u;
    {
        const bool branch_taken_0x394364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394364u;
        // 0x394368: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394364) {
            ctx->pc = 0x394390u;
            goto label_394390;
        }
    }
    ctx->pc = 0x39436Cu;
label_39436c:
    // 0x39436c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39436cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x394370: 0x2484a640  addiu       $a0, $a0, -0x59C0
    ctx->pc = 0x394370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944320));
label_394374:
    // 0x394374: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x394374u;
    SET_GPR_U32(ctx, 31, 0x39437Cu);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x394374u, 0x39437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39437Cu;
label_39437c:
    // 0x39437c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x394380: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x394380u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x394384: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x394384u;
    {
        const bool branch_taken_0x394384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394384u;
        // 0x394388: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394384) {
            ctx->pc = 0x394424u;
            goto label_394424;
        }
    }
    ctx->pc = 0x39438Cu;
    // 0x39438c: 0x0  nop
    ctx->pc = 0x39438cu;
    // NOP
label_394390:
    // 0x394390: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x394390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394394: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x394394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x394398: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x394398u;
    SET_GPR_U32(ctx, 31, 0x3943A0u);
    ctx->pc = 0x39439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394398u;
    // 0x39439c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x394398u, 0x3943A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3943A0u;
label_3943a0:
    // 0x3943a0: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x3943a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3943a4: 0xae080114  sw          $t0, 0x114($s0)
    ctx->pc = 0x3943a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 8));
label_3943a8:
    // 0x3943a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x3943a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3943ac: 0x266307ff  addiu       $v1, $s3, 0x7FF
    ctx->pc = 0x3943acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2047));
    // 0x3943b0: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x3943b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x3943b4: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x3943b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x3943b8: 0x2a620000  slti        $v0, $s3, 0x0
    ctx->pc = 0x3943b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3943bc: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x3943bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x3943c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3943c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3943c4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3943c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3943c8: 0x2452ea78  addiu       $s2, $v0, -0x1588
    ctx->pc = 0x3943c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961784));
    // 0x3943cc: 0x133ac3  sra         $a3, $s3, 11
    ctx->pc = 0x3943ccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 19), 11));
    // 0x3943d0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3943d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3943d4: 0xae040110  sw          $a0, 0x110($s0)
    ctx->pc = 0x3943d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 4));
    // 0x3943d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3943d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3943dc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3943dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3943e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3943e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3943e4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x3943e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3943e8: 0xac67ea8c  sw          $a3, -0x1574($v1)
    ctx->pc = 0x3943e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3FEA8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA8Cu, _value); } while (0);
    // 0x3943ec: 0xc0e550a  jal         func_395428
    ctx->pc = 0x3943ECu;
    SET_GPR_U32(ctx, 31, 0x3943F4u);
    ctx->pc = 0x3943F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3943ECu;
    // 0x3943f0: 0xac46ea88  sw          $a2, -0x1578($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961800), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395428u, 0x3943ECu, 0x3943F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3943F4u;
label_3943f4:
    // 0x3943f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3943f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3943f8: 0x6230009  bgezl       $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3943F8u;
    {
        const bool branch_taken_0x3943f8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x3943f8) {
            ctx->pc = 0x3943FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3943F8u;
            // 0x3943fc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394420u;
            goto label_394420;
        }
    }
    ctx->pc = 0x394400u;
    // 0x394400: 0xc0e53da  jal         func_394F68
    ctx->pc = 0x394400u;
    SET_GPR_U32(ctx, 31, 0x394408u);
    ctx->pc = 0x394404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394400u;
    // 0x394404: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F68u, 0x394400u, 0x394408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394408u;
label_394408:
    // 0x394408: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x394408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39440c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39440cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x394410: 0xac62ea80  sw          $v0, -0x1580($v1)
    ctx->pc = 0x394410u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FEA80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA80u, _value); } while (0);
    // 0x394414: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x394414u;
    {
        const bool branch_taken_0x394414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394414u;
        // 0x394418: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394414) {
            ctx->pc = 0x394424u;
            goto label_394424;
        }
    }
    ctx->pc = 0x39441Cu;
    // 0x39441c: 0x0  nop
    ctx->pc = 0x39441cu;
    // NOP
label_394420:
    // 0x394420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x394420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394424:
    // 0x394424: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x394424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394428: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x394428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39442c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39442cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x394430: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x394430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x394434: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x394434u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x394438: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x394438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x39443c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x39443cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x394440: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x394440u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x394444: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x394444u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x394448: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x394448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x39444c: 0x3e00008  jr          $ra
    ctx->pc = 0x39444Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39444Cu;
        // 0x394450: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39444Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394454u;
    // 0x394454: 0x0  nop
    ctx->pc = 0x394454u;
    // NOP
    ctx->pc = 0x394458u;
}
