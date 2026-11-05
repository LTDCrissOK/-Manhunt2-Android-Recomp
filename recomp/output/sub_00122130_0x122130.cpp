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

// Function: sub_00122130
// Address: 0x122130 - 0x1222d8
void sub_00122130_0x122130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122130_0x122130");
#endif

    switch (ctx->pc) {
        case 0x122178u: goto label_122178;
        case 0x122190u: goto label_122190;
        case 0x12219cu: goto label_12219c;
        case 0x1221acu: goto label_1221ac;
        case 0x122214u: goto label_122214;
        case 0x122224u: goto label_122224;
        case 0x122234u: goto label_122234;
        case 0x122240u: goto label_122240;
        case 0x122254u: goto label_122254;
        case 0x122260u: goto label_122260;
        case 0x122270u: goto label_122270;
        case 0x12227cu: goto label_12227c;
        case 0x12228cu: goto label_12228c;
        case 0x12229cu: goto label_12229c;
        case 0x1222a8u: goto label_1222a8;
        default: break;
    }

    ctx->pc = 0x122130u;

    // 0x122130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122134: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x122134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x122138: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x122138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12213c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12213cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122144: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x122144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122148: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12214c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12214cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122150: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122154: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x122154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122158: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x122158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12215c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12215cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122160: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x122160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x122164: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x122164u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122168: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x122168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x12216c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x122170: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122170u;
    SET_GPR_U32(ctx, 31, 0x122178u);
    ctx->pc = 0x122174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122170u;
    // 0x122174: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122170u, 0x122178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122178u;
label_122178:
    // 0x122178: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x122178u;
    {
        const bool branch_taken_0x122178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122178u;
        // 0x12217c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122178) {
            ctx->pc = 0x122204u;
            goto label_122204;
        }
    }
    ctx->pc = 0x122180u;
    // 0x122180: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x122180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122184: 0x24a5cdb0  addiu       $a1, $a1, -0x3250
    ctx->pc = 0x122184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
    // 0x122188: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x122188u;
    SET_GPR_U32(ctx, 31, 0x122190u);
    ctx->pc = 0x12218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122188u;
    // 0x12218c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x122188u, 0x122190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122190u;
label_122190:
    // 0x122190: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x122190u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x122194: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122194u;
    SET_GPR_U32(ctx, 31, 0x12219Cu);
    ctx->pc = 0x122198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122194u;
    // 0x122198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122194u, 0x12219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12219Cu;
label_12219c:
    // 0x12219c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12219Cu;
    {
        const bool branch_taken_0x12219c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12219c) {
            ctx->pc = 0x1221A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12219Cu;
            // 0x1221a0: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1221BCu;
            goto label_1221bc;
        }
    }
    ctx->pc = 0x1221A4u;
    // 0x1221a4: 0xc040a7a  jal         func_1029E8
    ctx->pc = 0x1221A4u;
    SET_GPR_U32(ctx, 31, 0x1221ACu);
    ctx->pc = 0x1221A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1221A4u;
    // 0x1221a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E8u, 0x1221A4u, 0x1221ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1221ACu;
label_1221ac:
    // 0x1221ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1221acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1221b0: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x1221B0u;
    {
        const bool branch_taken_0x1221b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1221B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221B0u;
        // 0x1221b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221b0) {
            ctx->pc = 0x1222ACu;
            goto label_1222ac;
        }
    }
    ctx->pc = 0x1221B8u;
    // 0x1221b8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1221b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1221bc:
    // 0x1221bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1221bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1221c0: 0x0  nop
    ctx->pc = 0x1221c0u;
    // NOP
    // 0x1221c4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1221c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1221c8: 0x0  nop
    ctx->pc = 0x1221c8u;
    // NOP
    // 0x1221cc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1221CCu;
    {
        const bool branch_taken_0x1221cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1221D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221CCu;
        // 0x1221d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221cc) {
            ctx->pc = 0x1221FCu;
            goto label_1221fc;
        }
    }
    ctx->pc = 0x1221D4u;
    // 0x1221d4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1221d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1221d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1221d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1221dc: 0x0  nop
    ctx->pc = 0x1221dcu;
    // NOP
    // 0x1221e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1221E0u;
    {
        const bool branch_taken_0x1221e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1221e0) {
            ctx->pc = 0x1221FCu;
            goto label_1221fc;
        }
    }
    ctx->pc = 0x1221E8u;
    // 0x1221e8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1221e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1221ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1221ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1221f0: 0x0  nop
    ctx->pc = 0x1221f0u;
    // NOP
    // 0x1221f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1221F4u;
    {
        const bool branch_taken_0x1221f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1221f4) {
            ctx->pc = 0x1221F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1221F4u;
            // 0x1221f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1221FCu;
            goto label_1221fc;
        }
    }
    ctx->pc = 0x1221FCu;
label_1221fc:
    // 0x1221fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1221FCu;
    {
        const bool branch_taken_0x1221fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221FCu;
        // 0x122200: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221fc) {
            ctx->pc = 0x12220Cu;
            goto label_12220c;
        }
    }
    ctx->pc = 0x122204u;
label_122204:
    // 0x122204: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x122204u;
    {
        const bool branch_taken_0x122204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122204u;
        // 0x122208: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122204) {
            ctx->pc = 0x1222ACu;
            goto label_1222ac;
        }
    }
    ctx->pc = 0x12220Cu;
label_12220c:
    // 0x12220c: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x12220Cu;
    SET_GPR_U32(ctx, 31, 0x122214u);
    ctx->pc = 0x122210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12220Cu;
    // 0x122210: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x12220Cu, 0x122214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122214u;
label_122214:
    // 0x122214: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x122214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122218: 0x24050860  addiu       $a1, $zero, 0x860
    ctx->pc = 0x122218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x12221c: 0xc04a2e0  jal         func_128B80
    ctx->pc = 0x12221Cu;
    SET_GPR_U32(ctx, 31, 0x122224u);
    ctx->pc = 0x122220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12221Cu;
    // 0x122220: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B80u, 0x12221Cu, 0x122224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122224u;
label_122224:
    // 0x122224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122228: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x122228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12222c: 0xc05a6b0  jal         func_169AC0
    ctx->pc = 0x12222Cu;
    SET_GPR_U32(ctx, 31, 0x122234u);
    ctx->pc = 0x122230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12222Cu;
    // 0x122230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AC0u, 0x12222Cu, 0x122234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122234u;
label_122234:
    // 0x122234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122238: 0xc05a6ba  jal         func_169AE8
    ctx->pc = 0x122238u;
    SET_GPR_U32(ctx, 31, 0x122240u);
    ctx->pc = 0x12223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122238u;
    // 0x12223c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE8u, 0x122238u, 0x122240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122240u;
label_122240:
    // 0x122240: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x122240u;
    {
        const bool branch_taken_0x122240 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x122244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122240u;
        // 0x122244: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122240) {
            ctx->pc = 0x122258u;
            goto label_122258;
        }
    }
    ctx->pc = 0x122248u;
    // 0x122248: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x122248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12224c: 0xc05a6d2  jal         func_169B48
    ctx->pc = 0x12224Cu;
    SET_GPR_U32(ctx, 31, 0x122254u);
    ctx->pc = 0x122250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12224Cu;
    // 0x122250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B48u, 0x12224Cu, 0x122254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122254u;
label_122254:
    // 0x122254: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x122254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_122258:
    // 0x122258: 0xc05a70e  jal         func_169C38
    ctx->pc = 0x122258u;
    SET_GPR_U32(ctx, 31, 0x122260u);
    ctx->pc = 0x12225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122258u;
    // 0x12225c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C38u, 0x122258u, 0x122260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122260u;
label_122260:
    // 0x122260: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x122260u;
    {
        const bool branch_taken_0x122260 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x122264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122260u;
        // 0x122264: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122260) {
            ctx->pc = 0x122270u;
            goto label_122270;
        }
    }
    ctx->pc = 0x122268u;
    // 0x122268: 0xc05a6e6  jal         func_169B98
    ctx->pc = 0x122268u;
    SET_GPR_U32(ctx, 31, 0x122270u);
    ctx->pc = 0x12226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122268u;
    // 0x12226c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B98u, 0x122268u, 0x122270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122270u;
label_122270:
    // 0x122270: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122274: 0xc05a6fa  jal         func_169BE8
    ctx->pc = 0x122274u;
    SET_GPR_U32(ctx, 31, 0x12227Cu);
    ctx->pc = 0x122278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122274u;
    // 0x122278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169BE8u, 0x122274u, 0x12227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12227Cu;
label_12227c:
    // 0x12227c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12227Cu;
    {
        const bool branch_taken_0x12227c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x122280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12227Cu;
        // 0x122280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12227c) {
            ctx->pc = 0x122294u;
            goto label_122294;
        }
    }
    ctx->pc = 0x122284u;
    // 0x122284: 0xc05a74a  jal         func_169D28
    ctx->pc = 0x122284u;
    SET_GPR_U32(ctx, 31, 0x12228Cu);
    ctx->pc = 0x122288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122284u;
    // 0x122288: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169D28u, 0x122284u, 0x12228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12228Cu;
label_12228c:
    // 0x12228c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12228Cu;
    {
        const bool branch_taken_0x12228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12228Cu;
        // 0x122290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12228c) {
            ctx->pc = 0x1222A0u;
            goto label_1222a0;
        }
    }
    ctx->pc = 0x122294u;
label_122294:
    // 0x122294: 0xc05a74a  jal         func_169D28
    ctx->pc = 0x122294u;
    SET_GPR_U32(ctx, 31, 0x12229Cu);
    ctx->pc = 0x122298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122294u;
    // 0x122298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169D28u, 0x122294u, 0x12229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12229Cu;
label_12229c:
    // 0x12229c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12229cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1222a0:
    // 0x1222a0: 0xc049944  jal         func_126510
    ctx->pc = 0x1222A0u;
    SET_GPR_U32(ctx, 31, 0x1222A8u);
    ctx->pc = 0x1222A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222A0u;
    // 0x1222a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x1222A0u, 0x1222A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222A8u;
label_1222a8:
    // 0x1222a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1222a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1222ac:
    // 0x1222ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1222acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1222b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1222b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1222b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1222b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1222b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1222b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1222bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1222bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1222c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1222c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1222c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1222c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1222c8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1222c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1222cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1222ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1222d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1222D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1222D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222D0u;
        // 0x1222d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1222D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1222D8u;
}
