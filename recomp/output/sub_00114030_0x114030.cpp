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

// Function: sub_00114030
// Address: 0x114030 - 0x1141c0
void sub_00114030_0x114030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114030_0x114030");
#endif

    switch (ctx->pc) {
        case 0x114030u: goto label_114030;
        case 0x114034u: goto label_114034;
        case 0x114038u: goto label_114038;
        case 0x11403cu: goto label_11403c;
        case 0x114040u: goto label_114040;
        case 0x114044u: goto label_114044;
        case 0x114048u: goto label_114048;
        case 0x11404cu: goto label_11404c;
        case 0x114050u: goto label_114050;
        case 0x114054u: goto label_114054;
        case 0x114058u: goto label_114058;
        case 0x11405cu: goto label_11405c;
        case 0x114060u: goto label_114060;
        case 0x114064u: goto label_114064;
        case 0x114068u: goto label_114068;
        case 0x11406cu: goto label_11406c;
        case 0x114070u: goto label_114070;
        case 0x114074u: goto label_114074;
        case 0x114078u: goto label_114078;
        case 0x11407cu: goto label_11407c;
        case 0x114080u: goto label_114080;
        case 0x114084u: goto label_114084;
        case 0x114088u: goto label_114088;
        case 0x11408cu: goto label_11408c;
        case 0x114090u: goto label_114090;
        case 0x114094u: goto label_114094;
        case 0x114098u: goto label_114098;
        case 0x11409cu: goto label_11409c;
        case 0x1140a0u: goto label_1140a0;
        case 0x1140a4u: goto label_1140a4;
        case 0x1140a8u: goto label_1140a8;
        case 0x1140acu: goto label_1140ac;
        case 0x1140b0u: goto label_1140b0;
        case 0x1140b4u: goto label_1140b4;
        case 0x1140b8u: goto label_1140b8;
        case 0x1140bcu: goto label_1140bc;
        case 0x1140c0u: goto label_1140c0;
        case 0x1140c4u: goto label_1140c4;
        case 0x1140c8u: goto label_1140c8;
        case 0x1140ccu: goto label_1140cc;
        case 0x1140d0u: goto label_1140d0;
        case 0x1140d4u: goto label_1140d4;
        case 0x1140d8u: goto label_1140d8;
        case 0x1140dcu: goto label_1140dc;
        case 0x1140e0u: goto label_1140e0;
        case 0x1140e4u: goto label_1140e4;
        case 0x1140e8u: goto label_1140e8;
        case 0x1140ecu: goto label_1140ec;
        case 0x1140f0u: goto label_1140f0;
        case 0x1140f4u: goto label_1140f4;
        case 0x1140f8u: goto label_1140f8;
        case 0x1140fcu: goto label_1140fc;
        case 0x114100u: goto label_114100;
        case 0x114104u: goto label_114104;
        case 0x114108u: goto label_114108;
        case 0x11410cu: goto label_11410c;
        case 0x114110u: goto label_114110;
        case 0x114114u: goto label_114114;
        case 0x114118u: goto label_114118;
        case 0x11411cu: goto label_11411c;
        case 0x114120u: goto label_114120;
        case 0x114124u: goto label_114124;
        case 0x114128u: goto label_114128;
        case 0x11412cu: goto label_11412c;
        case 0x114130u: goto label_114130;
        case 0x114134u: goto label_114134;
        case 0x114138u: goto label_114138;
        case 0x11413cu: goto label_11413c;
        case 0x114140u: goto label_114140;
        case 0x114144u: goto label_114144;
        case 0x114148u: goto label_114148;
        case 0x11414cu: goto label_11414c;
        case 0x114150u: goto label_114150;
        case 0x114154u: goto label_114154;
        case 0x114158u: goto label_114158;
        case 0x11415cu: goto label_11415c;
        case 0x114160u: goto label_114160;
        case 0x114164u: goto label_114164;
        case 0x114168u: goto label_114168;
        case 0x11416cu: goto label_11416c;
        case 0x114170u: goto label_114170;
        case 0x114174u: goto label_114174;
        case 0x114178u: goto label_114178;
        case 0x11417cu: goto label_11417c;
        case 0x114180u: goto label_114180;
        case 0x114184u: goto label_114184;
        case 0x114188u: goto label_114188;
        case 0x11418cu: goto label_11418c;
        case 0x114190u: goto label_114190;
        case 0x114194u: goto label_114194;
        case 0x114198u: goto label_114198;
        case 0x11419cu: goto label_11419c;
        case 0x1141a0u: goto label_1141a0;
        case 0x1141a4u: goto label_1141a4;
        case 0x1141a8u: goto label_1141a8;
        case 0x1141acu: goto label_1141ac;
        case 0x1141b0u: goto label_1141b0;
        case 0x1141b4u: goto label_1141b4;
        case 0x1141b8u: goto label_1141b8;
        case 0x1141bcu: goto label_1141bc;
        default: break;
    }

    ctx->pc = 0x114030u;

label_114030:
    // 0x114030: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x114030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_114034:
    // 0x114034: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x114034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_114038:
    // 0x114038: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11403c:
    // 0x11403c: 0xc460a7c4  lwc1        $f0, -0x583C($v1)
    ctx->pc = 0x11403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294944708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114040:
    // 0x114040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_114044:
    // 0x114044: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x114044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_114048:
    // 0x114048: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x114048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_11404c:
    // 0x11404c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11404cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_114050:
    // 0x114050: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_114054:
    // 0x114054: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x114054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_114058:
    // 0x114058: 0x24439a08  addiu       $v1, $v0, -0x65F8
    ctx->pc = 0x114058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_11405c:
    // 0x11405c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11405cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_114060:
    // 0x114060: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x114060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114064:
    // 0x114064: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x114064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_114068:
    // 0x114068: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x114068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11406c:
    // 0x11406c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_114070:
    // 0x114070: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x114070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_114074:
    // 0x114074: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x114074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_114078:
    // 0x114078: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_11407c:
    if (ctx->pc == 0x11407Cu) {
        ctx->pc = 0x11407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114078u;
        // 0x11407c: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114080u;
        goto label_114080;
    }
    ctx->pc = 0x114078u;
    {
        const bool branch_taken_0x114078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114078u;
        // 0x11407c: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114078) {
            ctx->pc = 0x1141A0u;
            goto label_1141a0;
        }
    }
    ctx->pc = 0x114080u;
label_114080:
    // 0x114080: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x114080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_114084:
    // 0x114084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_114088:
    // 0x114088: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x114088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11408c:
    // 0x11408c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x11408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_114090:
    // 0x114090: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_114094:
    if (ctx->pc == 0x114094u) {
        ctx->pc = 0x114094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114090u;
        // 0x114094: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114098u;
        goto label_114098;
    }
    ctx->pc = 0x114090u;
    {
        const bool branch_taken_0x114090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114090) {
            ctx->pc = 0x114094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114090u;
            // 0x114094: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1140A0u;
            goto label_1140a0;
        }
    }
    ctx->pc = 0x114098u;
label_114098:
    // 0x114098: 0x10000003  b           . + 4 + (0x3 << 2)
label_11409c:
    if (ctx->pc == 0x11409Cu) {
        ctx->pc = 0x11409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114098u;
        // 0x11409c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1140A0u;
        goto label_1140a0;
    }
    ctx->pc = 0x114098u;
    {
        const bool branch_taken_0x114098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114098u;
        // 0x11409c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114098) {
            ctx->pc = 0x1140A8u;
            goto label_1140a8;
        }
    }
    ctx->pc = 0x1140A0u;
label_1140a0:
    // 0x1140a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1140a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1140a4:
    // 0x1140a4: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x1140a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1140a8:
    // 0x1140a8: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
label_1140ac:
    if (ctx->pc == 0x1140ACu) {
        ctx->pc = 0x1140ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140A8u;
        // 0x1140ac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1140B0u;
        goto label_1140b0;
    }
    ctx->pc = 0x1140A8u;
    {
        const bool branch_taken_0x1140a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140A8u;
        // 0x1140ac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140a8) {
            ctx->pc = 0x1141A0u;
            goto label_1141a0;
        }
    }
    ctx->pc = 0x1140B0u;
label_1140b0:
    // 0x1140b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1140b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1140b4:
    // 0x1140b4: 0xc0f6a9a  jal         func_3DAA68
label_1140b8:
    if (ctx->pc == 0x1140B8u) {
        ctx->pc = 0x1140B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140B4u;
        // 0x1140b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1140BCu;
        goto label_1140bc;
    }
    ctx->pc = 0x1140B4u;
    SET_GPR_U32(ctx, 31, 0x1140BCu);
    ctx->pc = 0x1140B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140B4u;
    // 0x1140b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1140B4u, 0x1140BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140BCu;
label_1140bc:
    // 0x1140bc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1140bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1140c0:
    // 0x1140c0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1140c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1140c4:
    // 0x1140c4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1140c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1140c8:
    // 0x1140c8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1140c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1140cc:
    // 0x1140cc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1140ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1140d0:
    // 0x1140d0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1140d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1140d4:
    // 0x1140d4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1140d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1140d8:
    // 0x1140d8: 0x0  nop
    ctx->pc = 0x1140d8u;
    // NOP
label_1140dc:
    // 0x1140dc: 0x45030031  bc1tl       . + 4 + (0x31 << 2)
label_1140e0:
    if (ctx->pc == 0x1140E0u) {
        ctx->pc = 0x1140E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140DCu;
        // 0x1140e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1140E4u;
        goto label_1140e4;
    }
    ctx->pc = 0x1140DCu;
    {
        const bool branch_taken_0x1140dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1140dc) {
            ctx->pc = 0x1140E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1140DCu;
            // 0x1140e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1141A4u;
            goto label_1141a4;
        }
    }
    ctx->pc = 0x1140E4u;
label_1140e4:
    // 0x1140e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1140e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1140e8:
    // 0x1140e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1140e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1140ec:
    // 0x1140ec: 0xc0f6a9a  jal         func_3DAA68
label_1140f0:
    if (ctx->pc == 0x1140F0u) {
        ctx->pc = 0x1140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140ECu;
        // 0x1140f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1140F4u;
        goto label_1140f4;
    }
    ctx->pc = 0x1140ECu;
    SET_GPR_U32(ctx, 31, 0x1140F4u);
    ctx->pc = 0x1140F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140ECu;
    // 0x1140f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1140ECu, 0x1140F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140F4u;
label_1140f4:
    // 0x1140f4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1140f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1140f8:
    // 0x1140f8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1140f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1140fc:
    // 0x1140fc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1140fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_114100:
    // 0x114100: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x114100u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_114104:
    // 0x114104: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x114104u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_114108:
    // 0x114108: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x114108u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_11410c:
    // 0x11410c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x11410cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_114110:
    // 0x114110: 0x0  nop
    ctx->pc = 0x114110u;
    // NOP
label_114114:
    // 0x114114: 0x45010023  bc1t        . + 4 + (0x23 << 2)
label_114118:
    if (ctx->pc == 0x114118u) {
        ctx->pc = 0x114118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114114u;
        // 0x114118: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11411Cu;
        goto label_11411c;
    }
    ctx->pc = 0x114114u;
    {
        const bool branch_taken_0x114114 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x114118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114114u;
        // 0x114118: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114114) {
            ctx->pc = 0x1141A4u;
            goto label_1141a4;
        }
    }
    ctx->pc = 0x11411Cu;
label_11411c:
    // 0x11411c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11411cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_114120:
    // 0x114120: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x114120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_114124:
    // 0x114124: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x114124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_114128:
    // 0x114128: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x114128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_11412c:
    // 0x11412c: 0xc04956e  jal         func_1255B8
label_114130:
    if (ctx->pc == 0x114130u) {
        ctx->pc = 0x114130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11412Cu;
        // 0x114130: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114134u;
        goto label_114134;
    }
    ctx->pc = 0x11412Cu;
    SET_GPR_U32(ctx, 31, 0x114134u);
    ctx->pc = 0x114130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11412Cu;
    // 0x114130: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1255B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1255B8u, 0x11412Cu, 0x114134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114134u;
label_114134:
    // 0x114134: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_114138:
    if (ctx->pc == 0x114138u) {
        ctx->pc = 0x114138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114134u;
        // 0x114138: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11413Cu;
        goto label_11413c;
    }
    ctx->pc = 0x114134u;
    {
        const bool branch_taken_0x114134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114134u;
        // 0x114138: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114134) {
            ctx->pc = 0x1141A4u;
            goto label_1141a4;
        }
    }
    ctx->pc = 0x11413Cu;
label_11413c:
    // 0x11413c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x11413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_114140:
    // 0x114140: 0x26639a08  addiu       $v1, $s3, -0x65F8
    ctx->pc = 0x114140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941192));
label_114144:
    // 0x114144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_114148:
    // 0x114148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11414c:
    // 0x11414c: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x11414cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_114150:
    // 0x114150: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_114154:
    if (ctx->pc == 0x114154u) {
        ctx->pc = 0x114154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114150u;
        // 0x114154: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114158u;
        goto label_114158;
    }
    ctx->pc = 0x114150u;
    {
        const bool branch_taken_0x114150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x114150) {
            ctx->pc = 0x114154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114150u;
            // 0x114154: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1141A4u;
            goto label_1141a4;
        }
    }
    ctx->pc = 0x114158u;
label_114158:
    // 0x114158: 0xc094ed4  jal         func_253B50
label_11415c:
    if (ctx->pc == 0x11415Cu) {
        ctx->pc = 0x11415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114158u;
        // 0x11415c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114160u;
        goto label_114160;
    }
    ctx->pc = 0x114158u;
    SET_GPR_U32(ctx, 31, 0x114160u);
    ctx->pc = 0x11415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114158u;
    // 0x11415c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x114158u, 0x114160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114160u;
label_114160:
    // 0x114160: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x114160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_114164:
    // 0x114164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114168:
    // 0x114168: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x114168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11416c:
    // 0x11416c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11416cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_114170:
    // 0x114170: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x114170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114174:
    // 0x114174: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x114174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114178:
    // 0x114178: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x114178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_11417c:
    // 0x11417c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11417cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_114180:
    // 0x114180: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x114180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_114184:
    // 0x114184: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x114184u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_114188:
    // 0x114188: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x114188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_11418c:
    // 0x11418c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x11418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_114190:
    // 0x114190: 0x60f809  jalr        $v1
label_114194:
    if (ctx->pc == 0x114194u) {
        ctx->pc = 0x114194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114190u;
        // 0x114194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114198u;
        goto label_114198;
    }
    ctx->pc = 0x114190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x114198u);
        ctx->pc = 0x114194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114190u;
        // 0x114194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114190u, 0x114198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114198u;
label_114198:
    // 0x114198: 0xc0b814e  jal         func_2E0538
label_11419c:
    if (ctx->pc == 0x11419Cu) {
        ctx->pc = 0x11419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114198u;
        // 0x11419c: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1141A0u;
        goto label_1141a0;
    }
    ctx->pc = 0x114198u;
    SET_GPR_U32(ctx, 31, 0x1141A0u);
    ctx->pc = 0x11419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114198u;
    // 0x11419c: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0538u, 0x114198u, 0x1141A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141A0u;
label_1141a0:
    // 0x1141a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1141a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1141a4:
    // 0x1141a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1141a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1141a8:
    // 0x1141a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1141a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1141ac:
    // 0x1141ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1141acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1141b0:
    // 0x1141b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1141b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1141b4:
    // 0x1141b4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1141b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1141b8:
    // 0x1141b8: 0x3e00008  jr          $ra
label_1141bc:
    if (ctx->pc == 0x1141BCu) {
        ctx->pc = 0x1141BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141B8u;
        // 0x1141bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1141C0u;
        goto label_fallthrough_0x1141b8;
    }
    ctx->pc = 0x1141B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1141BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141B8u;
        // 0x1141bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1141B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1141b8:
    ctx->pc = 0x1141C0u;
}
