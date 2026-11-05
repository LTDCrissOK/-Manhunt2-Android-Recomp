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

// Function: sub_001A9478
// Address: 0x1a9478 - 0x1a96b0
void sub_001A9478_0x1a9478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9478_0x1a9478");
#endif

    switch (ctx->pc) {
        case 0x1a94d4u: goto label_1a94d4;
        case 0x1a94e0u: goto label_1a94e0;
        case 0x1a94f8u: goto label_1a94f8;
        case 0x1a9540u: goto label_1a9540;
        case 0x1a9554u: goto label_1a9554;
        case 0x1a9564u: goto label_1a9564;
        case 0x1a9590u: goto label_1a9590;
        case 0x1a959cu: goto label_1a959c;
        case 0x1a95acu: goto label_1a95ac;
        case 0x1a966cu: goto label_1a966c;
        case 0x1a9680u: goto label_1a9680;
        default: break;
    }

    ctx->pc = 0x1a9478u;

    // 0x1a9478: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1a9478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1a947c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a947cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1a9480: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a9480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a9484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9488: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x1a9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x1a948c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x1a948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x1a9490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9494: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1a9494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1a9498: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a9498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a949c: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x1a949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x1a94a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a94a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94a4: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1a94a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1a94a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a94a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94ac: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x1a94acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x1a94b0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a94b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a94b4: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x1a94b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x1a94b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a94b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a94bc: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1a94bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x1a94c0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1a94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a94c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1A94C4u;
    {
        const bool branch_taken_0x1a94c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94C4u;
        // 0x1a94c8: 0x8c540110  lw          $s4, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94c4) {
            ctx->pc = 0x1A94E8u;
            goto label_1a94e8;
        }
    }
    ctx->pc = 0x1A94CCu;
    // 0x1a94cc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1A94CCu;
    {
        const bool branch_taken_0x1a94cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94CCu;
        // 0x1a94d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94cc) {
            ctx->pc = 0x1A9684u;
            goto label_1a9684;
        }
    }
    ctx->pc = 0x1A94D4u;
label_1a94d4:
    // 0x1a94d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a94d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a94d8: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A94D8u;
    SET_GPR_U32(ctx, 31, 0x1A94E0u);
    ctx->pc = 0x1A94DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A94D8u;
    // 0x1a94dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A94D8u, 0x1A94E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A94E0u;
label_1a94e0:
    // 0x1a94e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A94E0u;
    {
        const bool branch_taken_0x1a94e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a94e0) {
            ctx->pc = 0x1A9528u;
            goto label_1a9528;
        }
    }
    ctx->pc = 0x1A94E8u;
label_1a94e8:
    // 0x1a94e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a94e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94ec: 0x2635ffbb  addiu       $s5, $s1, -0x45
    ctx->pc = 0x1a94ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967227));
    // 0x1a94f0: 0x114080  sll         $t0, $s1, 2
    ctx->pc = 0x1a94f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a94f4: 0x260601ec  addiu       $a2, $s0, 0x1EC
    ctx->pc = 0x1a94f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_1a94f8:
    // 0x1a94f8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1a94f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a94fc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A94FCu;
    {
        const bool branch_taken_0x1a94fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94FCu;
        // 0x1a9500: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94fc) {
            ctx->pc = 0x1A951Cu;
            goto label_1a951c;
        }
    }
    ctx->pc = 0x1A9504u;
    // 0x1a9504: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x1a9504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1a9508: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1a9508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a950c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1a950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1a9510: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a9510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9514: 0x5083ffef  beql        $a0, $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1A9514u;
    {
        const bool branch_taken_0x1a9514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9514) {
            ctx->pc = 0x1A9518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9514u;
            // 0x1a9518: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A94D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a94d4;
        }
    }
    ctx->pc = 0x1A951Cu;
label_1a951c:
    // 0x1a951c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x1a951cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9520: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A9520u;
    {
        const bool branch_taken_0x1a9520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9520u;
        // 0x1a9524: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9520) {
            ctx->pc = 0x1A94F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a94f8;
        }
    }
    ctx->pc = 0x1A9528u;
label_1a9528:
    // 0x1a9528: 0x16400021  bnez        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A9528u;
    {
        const bool branch_taken_0x1a9528 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9528u;
        // 0x1a952c: 0x2ea20004  sltiu       $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9528) {
            ctx->pc = 0x1A95B0u;
            goto label_1a95b0;
        }
    }
    ctx->pc = 0x1A9530u;
    // 0x1a9530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9534: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a9534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9538: 0xc06a152  jal         func_1A8548
    ctx->pc = 0x1A9538u;
    SET_GPR_U32(ctx, 31, 0x1A9540u);
    ctx->pc = 0x1A953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9538u;
    // 0x1a953c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8548u, 0x1A9538u, 0x1A9540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9540u;
label_1a9540:
    // 0x1a9540: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a9540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9544: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A9544u;
    {
        const bool branch_taken_0x1a9544 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9544u;
        // 0x1a9548: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9544) {
            ctx->pc = 0x1A95A0u;
            goto label_1a95a0;
        }
    }
    ctx->pc = 0x1A954Cu;
    // 0x1a954c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1A954Cu;
    SET_GPR_U32(ctx, 31, 0x1A9554u);
    ctx->pc = 0x1A9550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A954Cu;
    // 0x1a9550: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1A954Cu, 0x1A9554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9554u;
label_1a9554:
    // 0x1a9554: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a9554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9558: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a9558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a955c: 0xc069e0e  jal         func_1A7838
    ctx->pc = 0x1A955Cu;
    SET_GPR_U32(ctx, 31, 0x1A9564u);
    ctx->pc = 0x1A9560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A955Cu;
    // 0x1a9560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7838u, 0x1A955Cu, 0x1A9564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9564u;
label_1a9564:
    // 0x1a9564: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a9564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a9568: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a9568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a956c: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1a956cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a9570: 0x24420958  addiu       $v0, $v0, 0x958
    ctx->pc = 0x1a9570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2392));
    // 0x1a9574: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1a9574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9578: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a9578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a957c: 0x24a51280  addiu       $a1, $a1, 0x1280
    ctx->pc = 0x1a957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4736));
    // 0x1a9580: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a9580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a9584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a9584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9588: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1A9588u;
    SET_GPR_U32(ctx, 31, 0x1A9590u);
    ctx->pc = 0x1A958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9588u;
    // 0x1a958c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1A9588u, 0x1A9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9590u;
label_1a9590:
    // 0x1a9590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a9590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9594: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1A9594u;
    SET_GPR_U32(ctx, 31, 0x1A959Cu);
    ctx->pc = 0x1A9598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9594u;
    // 0x1a9598: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1A9594u, 0x1A959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A959Cu;
label_1a959c:
    // 0x1a959c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a95a0:
    // 0x1a95a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a95a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a95a4: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1A95A4u;
    SET_GPR_U32(ctx, 31, 0x1A95ACu);
    ctx->pc = 0x1A95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A95A4u;
    // 0x1a95a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1A95A4u, 0x1A95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A95ACu;
label_1a95ac:
    // 0x1a95ac: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x1a95acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1a95b0:
    // 0x1a95b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A95B0u;
    {
        const bool branch_taken_0x1a95b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95B0u;
        // 0x1a95b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95b0) {
            ctx->pc = 0x1A95D0u;
            goto label_1a95d0;
        }
    }
    ctx->pc = 0x1A95B8u;
    // 0x1a95b8: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1a95b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a95bc: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1a95bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a95c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a95c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a95c4: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x1a95c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1a95c8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1A95C8u;
    {
        const bool branch_taken_0x1a95c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95C8u;
        // 0x1a95cc: 0xc44c13a4  lwc1        $f12, 0x13A4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95c8) {
            ctx->pc = 0x1A9664u;
            goto label_1a9664;
        }
    }
    ctx->pc = 0x1A95D0u;
label_1a95d0:
    // 0x1a95d0: 0x2622ffb7  addiu       $v0, $s1, -0x49
    ctx->pc = 0x1a95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967223));
    // 0x1a95d4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1a95d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a95d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A95D8u;
    {
        const bool branch_taken_0x1a95d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95D8u;
        // 0x1a95dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95d8) {
            ctx->pc = 0x1A95F4u;
            goto label_1a95f4;
        }
    }
    ctx->pc = 0x1A95E0u;
    // 0x1a95e0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1a95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a95e4: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1a95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a95e8: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x1a95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1a95ec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A95ECu;
    {
        const bool branch_taken_0x1a95ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95ECu;
        // 0x1a95f0: 0xc44c13a8  lwc1        $f12, 0x13A8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95ec) {
            ctx->pc = 0x1A9664u;
            goto label_1a9664;
        }
    }
    ctx->pc = 0x1A95F4u;
label_1a95f4:
    // 0x1a95f4: 0x2622ffe3  addiu       $v0, $s1, -0x1D
    ctx->pc = 0x1a95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967267));
    // 0x1a95f8: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1a95f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a95fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A95FCu;
    {
        const bool branch_taken_0x1a95fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95FCu;
        // 0x1a9600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95fc) {
            ctx->pc = 0x1A961Cu;
            goto label_1a961c;
        }
    }
    ctx->pc = 0x1A9604u;
    // 0x1a9604: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1a9604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a9608: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1a9608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a960c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a960cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9610: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x1a9610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1a9614: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9614u;
    {
        const bool branch_taken_0x1a9614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9614u;
        // 0x1a9618: 0xc44c13ac  lwc1        $f12, 0x13AC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9614) {
            ctx->pc = 0x1A9664u;
            goto label_1a9664;
        }
    }
    ctx->pc = 0x1A961Cu;
label_1a961c:
    // 0x1a961c: 0x2622ffc3  addiu       $v0, $s1, -0x3D
    ctx->pc = 0x1a961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967235));
    // 0x1a9620: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1a9620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9624: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9624u;
    {
        const bool branch_taken_0x1a9624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9624u;
        // 0x1a9628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9624) {
            ctx->pc = 0x1A9640u;
            goto label_1a9640;
        }
    }
    ctx->pc = 0x1A962Cu;
    // 0x1a962c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1a962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a9630: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1a9630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9634: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x1a9634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1a9638: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A9638u;
    {
        const bool branch_taken_0x1a9638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9638u;
        // 0x1a963c: 0xc44c13b0  lwc1        $f12, 0x13B0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9638) {
            ctx->pc = 0x1A9664u;
            goto label_1a9664;
        }
    }
    ctx->pc = 0x1A9640u;
label_1a9640:
    // 0x1a9640: 0x2622ffbf  addiu       $v0, $s1, -0x41
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967231));
    // 0x1a9644: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1a9644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9648: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A9648u;
    {
        const bool branch_taken_0x1a9648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9648u;
        // 0x1a964c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9648) {
            ctx->pc = 0x1A9674u;
            goto label_1a9674;
        }
    }
    ctx->pc = 0x1A9650u;
    // 0x1a9650: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1a9650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a9654: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1a9654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a965c: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x1a965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1a9660: 0xc44c13b4  lwc1        $f12, 0x13B4($v0)
    ctx->pc = 0x1a9660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a9664:
    // 0x1a9664: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1A9664u;
    SET_GPR_U32(ctx, 31, 0x1A966Cu);
    ctx->pc = 0x1A9668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9664u;
    // 0x1a9668: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1A9664u, 0x1A966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A966Cu;
label_1a966c:
    // 0x1a966c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A966Cu;
    {
        const bool branch_taken_0x1a966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A966Cu;
        // 0x1a9670: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a966c) {
            ctx->pc = 0x1A9684u;
            goto label_1a9684;
        }
    }
    ctx->pc = 0x1A9674u;
label_1a9674:
    // 0x1a9674: 0xc60c01b0  lwc1        $f12, 0x1B0($s0)
    ctx->pc = 0x1a9674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9678: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1A9678u;
    SET_GPR_U32(ctx, 31, 0x1A9680u);
    ctx->pc = 0x1A967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9678u;
    // 0x1a967c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1A9678u, 0x1A9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9680u;
label_1a9680:
    // 0x1a9680: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a9680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9684:
    // 0x1a9684: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x1a9684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a9688: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x1a9688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1a968c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1a968cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a9690: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x1a9690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1a9694: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x1a9694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a9698: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x1a9698u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1a969c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1a969cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a96a0: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1a96a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a96a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A96A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96A4u;
        // 0x1a96a8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A96A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A96ACu;
    // 0x1a96ac: 0x0  nop
    ctx->pc = 0x1a96acu;
    // NOP
    ctx->pc = 0x1a96b0u;
}
