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

// Function: sub_001520C0
// Address: 0x1520c0 - 0x152230
void sub_001520C0_0x1520c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001520C0_0x1520c0");
#endif

    switch (ctx->pc) {
        case 0x152130u: goto label_152130;
        case 0x152158u: goto label_152158;
        case 0x15218cu: goto label_15218c;
        case 0x1521d8u: goto label_1521d8;
        case 0x15220cu: goto label_15220c;
        default: break;
    }

    ctx->pc = 0x1520c0u;

    // 0x1520c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1520c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1520c4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1520c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1520c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1520c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1520cc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1520ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1520d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1520d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1520d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1520d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1520d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1520dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1520dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520e0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1520e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1520e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1520e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1520e8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1520e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1520ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1520ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1520f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1520f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1520f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1520f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1520f8: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1520F8u;
    {
        const bool branch_taken_0x1520f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1520FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520F8u;
        // 0x1520fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520f8) {
            ctx->pc = 0x152210u;
            goto label_152210;
        }
    }
    ctx->pc = 0x152100u;
    // 0x152100: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x152100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x152104: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x152104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152108: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x152108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15210c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152110: 0x8c510108  lw          $s1, 0x108($v0)
    ctx->pc = 0x152110u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x152114: 0x5220003e  beql        $s1, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x152114u;
    {
        const bool branch_taken_0x152114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x152114) {
            ctx->pc = 0x152118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152114u;
            // 0x152118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152210u;
            goto label_152210;
        }
    }
    ctx->pc = 0x15211Cu;
    // 0x15211c: 0x8e240ffc  lw          $a0, 0xFFC($s1)
    ctx->pc = 0x15211cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
    // 0x152120: 0x5080003b  beql        $a0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x152120u;
    {
        const bool branch_taken_0x152120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152120) {
            ctx->pc = 0x152124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152120u;
            // 0x152124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152210u;
            goto label_152210;
        }
    }
    ctx->pc = 0x152128u;
    // 0x152128: 0xc07192e  jal         func_1C64B8
    ctx->pc = 0x152128u;
    SET_GPR_U32(ctx, 31, 0x152130u);
    ctx->pc = 0x15212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152128u;
    // 0x15212c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C64B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C64B8u, 0x152128u, 0x152130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152130u;
label_152130:
    // 0x152130: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152134: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x152134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x152138: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x152138u;
    {
        const bool branch_taken_0x152138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152138u;
        // 0x15213c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152138) {
            ctx->pc = 0x152210u;
            goto label_152210;
        }
    }
    ctx->pc = 0x152140u;
    // 0x152140: 0x8e4208c0  lw          $v0, 0x8C0($s2)
    ctx->pc = 0x152140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2240)));
    // 0x152144: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x152144u;
    {
        const bool branch_taken_0x152144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152144u;
        // 0x152148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152144) {
            ctx->pc = 0x152210u;
            goto label_152210;
        }
    }
    ctx->pc = 0x15214Cu;
    // 0x15214c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x15214cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x152150: 0xc053c6a  jal         func_14F1A8
    ctx->pc = 0x152150u;
    SET_GPR_U32(ctx, 31, 0x152158u);
    ctx->pc = 0x152154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152150u;
    // 0x152154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A8u, 0x152150u, 0x152158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152158u;
label_152158:
    // 0x152158: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x152158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15215c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15215cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152160: 0x10b0002b  beq         $a1, $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x152160u;
    {
        const bool branch_taken_0x152160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x152164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152160u;
        // 0x152164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152160) {
            ctx->pc = 0x152210u;
            goto label_152210;
        }
    }
    ctx->pc = 0x152168u;
    // 0x152168: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x152168u;
    {
        const bool branch_taken_0x152168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152168u;
        // 0x15216c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152168) {
            ctx->pc = 0x15220Cu;
            goto label_15220c;
        }
    }
    ctx->pc = 0x152170u;
    // 0x152170: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x152170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x152174: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152178: 0xc440c710  lwc1        $f0, -0x38F0($v0)
    ctx->pc = 0x152178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15217c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152180: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x152180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152184: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x152184u;
    SET_GPR_U32(ctx, 31, 0x15218Cu);
    ctx->pc = 0x152188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152184u;
    // 0x152188: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x152184u, 0x15218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15218Cu;
label_15218c:
    // 0x15218c: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x15218cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x152190: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x152190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152194: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x152194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152198: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x152198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15219c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15219cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1521a0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1521a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1521a4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1521a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1521a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1521a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1521ac: 0x0  nop
    ctx->pc = 0x1521acu;
    // NOP
    // 0x1521b0: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1521B0u;
    {
        const bool branch_taken_0x1521b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1521B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521B0u;
        // 0x1521b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521b0) {
            ctx->pc = 0x152210u;
            goto label_152210;
        }
    }
    ctx->pc = 0x1521B8u;
    // 0x1521b8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x1521b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1521bc: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x1521bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x1521c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1521c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1521c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1521c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1521cc: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x1521ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1521d0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1521D0u;
    SET_GPR_U32(ctx, 31, 0x1521D8u);
    ctx->pc = 0x1521D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1521D0u;
    // 0x1521d4: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1521D0u, 0x1521D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1521D8u;
label_1521d8:
    // 0x1521d8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1521d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1521dc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1521dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1521e0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1521e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1521e4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1521e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1521e8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1521e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1521ec: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1521ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1521f0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1521f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1521f4: 0x0  nop
    ctx->pc = 0x1521f4u;
    // NOP
    // 0x1521f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1521F8u;
    {
        const bool branch_taken_0x1521f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1521FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521F8u;
        // 0x1521fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521f8) {
            ctx->pc = 0x15220Cu;
            goto label_15220c;
        }
    }
    ctx->pc = 0x152200u;
    // 0x152200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152204: 0xc053c48  jal         func_14F120
    ctx->pc = 0x152204u;
    SET_GPR_U32(ctx, 31, 0x15220Cu);
    ctx->pc = 0x152208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152204u;
    // 0x152208: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F120u, 0x152204u, 0x15220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15220Cu;
label_15220c:
    // 0x15220c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152210:
    // 0x152210: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x152210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152214: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x152214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x152218: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x152218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15221c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15221cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x152220: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x152220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152224: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x152224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152228: 0x3e00008  jr          $ra
    ctx->pc = 0x152228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152228u;
        // 0x15222c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152230u;
}
