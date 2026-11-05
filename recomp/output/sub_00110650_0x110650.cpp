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

// Function: sub_00110650
// Address: 0x110650 - 0x1107c0
void sub_00110650_0x110650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110650_0x110650");
#endif

    switch (ctx->pc) {
        case 0x1106a0u: goto label_1106a0;
        case 0x1106d0u: goto label_1106d0;
        case 0x110700u: goto label_110700;
        case 0x110754u: goto label_110754;
        default: break;
    }

    ctx->pc = 0x110650u;

    // 0x110650: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x110650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x110654: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x110654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x110658: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x110658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x11065c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11065cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110660: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x110660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x110664: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x110664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110668: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x110668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x11066c: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x11066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x110670: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x110670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x110674: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x110674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x110678: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x110678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x11067c: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x11067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x110680: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x110680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x110684: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x110684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x110688: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x110688u;
    {
        const bool branch_taken_0x110688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110688u;
        // 0x11068c: 0x460c6502  mul.s       $f20, $f12, $f12 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110688) {
            ctx->pc = 0x11078Cu;
            goto label_11078c;
        }
    }
    ctx->pc = 0x110690u;
    // 0x110690: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x110690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x110694: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x110694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110698: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x110698u;
    SET_GPR_U32(ctx, 31, 0x1106A0u);
    ctx->pc = 0x11069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110698u;
    // 0x11069c: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B958u, 0x110698u, 0x1106A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1106A0u;
label_1106a0:
    // 0x1106a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1106a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106a4: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x1106A4u;
    {
        const bool branch_taken_0x1106a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106A4u;
        // 0x1106a8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106a4) {
            ctx->pc = 0x11078Cu;
            goto label_11078c;
        }
    }
    ctx->pc = 0x1106ACu;
    // 0x1106ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1106acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1106b0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1106b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1106b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1106b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1106b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1106b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1106bc: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x1106bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1106c0: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1106C0u;
    {
        const bool branch_taken_0x1106c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1106c0) {
            ctx->pc = 0x1106C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1106C0u;
            // 0x1106c4: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1106D8u;
            goto label_1106d8;
        }
    }
    ctx->pc = 0x1106C8u;
    // 0x1106c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1106C8u;
    {
        const bool branch_taken_0x1106c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106C8u;
        // 0x1106cc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106c8) {
            ctx->pc = 0x1106E0u;
            goto label_1106e0;
        }
    }
    ctx->pc = 0x1106D0u;
label_1106d0:
    // 0x1106d0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1106D0u;
    {
        const bool branch_taken_0x1106d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106D0u;
        // 0x1106d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106d0) {
            ctx->pc = 0x110790u;
            goto label_110790;
        }
    }
    ctx->pc = 0x1106D8u;
label_1106d8:
    // 0x1106d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1106d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1106dc: 0x24750070  addiu       $s5, $v1, 0x70
    ctx->pc = 0x1106dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1106e0:
    // 0x1106e0: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1106E0u;
    {
        const bool branch_taken_0x1106e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106E0u;
        // 0x1106e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106e0) {
            ctx->pc = 0x11078Cu;
            goto label_11078c;
        }
    }
    ctx->pc = 0x1106E8u;
    // 0x1106e8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1106e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1106ec: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x1106ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1106f0: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x1106f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x1106f4: 0x2696fefc  addiu       $s6, $s4, -0x104
    ctx->pc = 0x1106f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967036));
    // 0x1106f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1106f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1106fc: 0x0  nop
    ctx->pc = 0x1106fcu;
    // NOP
label_110700:
    // 0x110700: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x110700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x110704: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x110704u;
    {
        const bool branch_taken_0x110704 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x110708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110704u;
        // 0x110708: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110704) {
            ctx->pc = 0x110714u;
            goto label_110714;
        }
    }
    ctx->pc = 0x11070Cu;
    // 0x11070c: 0x1671001b  bne         $s3, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x11070Cu;
    {
        const bool branch_taken_0x11070c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x110710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11070Cu;
        // 0x110710: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11070c) {
            ctx->pc = 0x11077Cu;
            goto label_11077c;
        }
    }
    ctx->pc = 0x110714u;
label_110714:
    // 0x110714: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x110714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x110718: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x110718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x11071c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110720: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x110720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x110724: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110728: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x110728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x11072c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110730: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x110730u;
    {
        const bool branch_taken_0x110730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x110730) {
            ctx->pc = 0x110734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110730u;
            // 0x110734: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110740u;
            goto label_110740;
        }
    }
    ctx->pc = 0x110738u;
    // 0x110738: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x110738u;
    {
        const bool branch_taken_0x110738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110738u;
        // 0x11073c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110738) {
            ctx->pc = 0x110748u;
            goto label_110748;
        }
    }
    ctx->pc = 0x110740u;
label_110740:
    // 0x110740: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x110740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110744: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x110744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_110748:
    // 0x110748: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x110748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x11074c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x11074Cu;
    SET_GPR_U32(ctx, 31, 0x110754u);
    ctx->pc = 0x110750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11074Cu;
    // 0x110750: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x11074Cu, 0x110754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110754u;
label_110754:
    // 0x110754: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x110754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x110758: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x110758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11075c: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x11075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x110760: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x110760u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x110764: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x110764u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x110768: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x110768u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x11076c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x11076cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x110770: 0x0  nop
    ctx->pc = 0x110770u;
    // NOP
    // 0x110774: 0x4501ffd6  bc1t        . + 4 + (-0x2A << 2)
    ctx->pc = 0x110774u;
    {
        const bool branch_taken_0x110774 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x110778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110774u;
        // 0x110778: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110774) {
            ctx->pc = 0x1106D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1106d0;
        }
    }
    ctx->pc = 0x11077Cu;
label_11077c:
    // 0x11077c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11077cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x110780: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x110780u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x110784: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x110784u;
    {
        const bool branch_taken_0x110784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110784u;
        // 0x110788: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110784) {
            ctx->pc = 0x110700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110700;
        }
    }
    ctx->pc = 0x11078Cu;
label_11078c:
    // 0x11078c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11078cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110790:
    // 0x110790: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x110790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x110794: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x110794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x110798: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x110798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11079c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x11079cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1107a0: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1107a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1107a4: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1107a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1107a8: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1107a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1107ac: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x1107acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1107b0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1107b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1107b4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1107b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1107b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1107B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1107BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107B8u;
        // 0x1107bc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1107B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1107C0u;
}
