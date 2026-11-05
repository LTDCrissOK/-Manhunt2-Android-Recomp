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

// Function: sub_00187118
// Address: 0x187118 - 0x187290
void sub_00187118_0x187118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187118_0x187118");
#endif

    switch (ctx->pc) {
        case 0x187118u: goto label_187118;
        case 0x18711cu: goto label_18711c;
        case 0x187120u: goto label_187120;
        case 0x187124u: goto label_187124;
        case 0x187128u: goto label_187128;
        case 0x18712cu: goto label_18712c;
        case 0x187130u: goto label_187130;
        case 0x187134u: goto label_187134;
        case 0x187138u: goto label_187138;
        case 0x18713cu: goto label_18713c;
        case 0x187140u: goto label_187140;
        case 0x187144u: goto label_187144;
        case 0x187148u: goto label_187148;
        case 0x18714cu: goto label_18714c;
        case 0x187150u: goto label_187150;
        case 0x187154u: goto label_187154;
        case 0x187158u: goto label_187158;
        case 0x18715cu: goto label_18715c;
        case 0x187160u: goto label_187160;
        case 0x187164u: goto label_187164;
        case 0x187168u: goto label_187168;
        case 0x18716cu: goto label_18716c;
        case 0x187170u: goto label_187170;
        case 0x187174u: goto label_187174;
        case 0x187178u: goto label_187178;
        case 0x18717cu: goto label_18717c;
        case 0x187180u: goto label_187180;
        case 0x187184u: goto label_187184;
        case 0x187188u: goto label_187188;
        case 0x18718cu: goto label_18718c;
        case 0x187190u: goto label_187190;
        case 0x187194u: goto label_187194;
        case 0x187198u: goto label_187198;
        case 0x18719cu: goto label_18719c;
        case 0x1871a0u: goto label_1871a0;
        case 0x1871a4u: goto label_1871a4;
        case 0x1871a8u: goto label_1871a8;
        case 0x1871acu: goto label_1871ac;
        case 0x1871b0u: goto label_1871b0;
        case 0x1871b4u: goto label_1871b4;
        case 0x1871b8u: goto label_1871b8;
        case 0x1871bcu: goto label_1871bc;
        case 0x1871c0u: goto label_1871c0;
        case 0x1871c4u: goto label_1871c4;
        case 0x1871c8u: goto label_1871c8;
        case 0x1871ccu: goto label_1871cc;
        case 0x1871d0u: goto label_1871d0;
        case 0x1871d4u: goto label_1871d4;
        case 0x1871d8u: goto label_1871d8;
        case 0x1871dcu: goto label_1871dc;
        case 0x1871e0u: goto label_1871e0;
        case 0x1871e4u: goto label_1871e4;
        case 0x1871e8u: goto label_1871e8;
        case 0x1871ecu: goto label_1871ec;
        case 0x1871f0u: goto label_1871f0;
        case 0x1871f4u: goto label_1871f4;
        case 0x1871f8u: goto label_1871f8;
        case 0x1871fcu: goto label_1871fc;
        case 0x187200u: goto label_187200;
        case 0x187204u: goto label_187204;
        case 0x187208u: goto label_187208;
        case 0x18720cu: goto label_18720c;
        case 0x187210u: goto label_187210;
        case 0x187214u: goto label_187214;
        case 0x187218u: goto label_187218;
        case 0x18721cu: goto label_18721c;
        case 0x187220u: goto label_187220;
        case 0x187224u: goto label_187224;
        case 0x187228u: goto label_187228;
        case 0x18722cu: goto label_18722c;
        case 0x187230u: goto label_187230;
        case 0x187234u: goto label_187234;
        case 0x187238u: goto label_187238;
        case 0x18723cu: goto label_18723c;
        case 0x187240u: goto label_187240;
        case 0x187244u: goto label_187244;
        case 0x187248u: goto label_187248;
        case 0x18724cu: goto label_18724c;
        case 0x187250u: goto label_187250;
        case 0x187254u: goto label_187254;
        case 0x187258u: goto label_187258;
        case 0x18725cu: goto label_18725c;
        case 0x187260u: goto label_187260;
        case 0x187264u: goto label_187264;
        case 0x187268u: goto label_187268;
        case 0x18726cu: goto label_18726c;
        case 0x187270u: goto label_187270;
        case 0x187274u: goto label_187274;
        case 0x187278u: goto label_187278;
        case 0x18727cu: goto label_18727c;
        case 0x187280u: goto label_187280;
        case 0x187284u: goto label_187284;
        case 0x187288u: goto label_187288;
        case 0x18728cu: goto label_18728c;
        default: break;
    }

    ctx->pc = 0x187118u;

label_187118:
    // 0x187118: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x187118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18711c:
    // 0x18711c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x18711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_187120:
    // 0x187120: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x187120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_187124:
    // 0x187124: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x187124u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187128:
    // 0x187128: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x187128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_18712c:
    // 0x18712c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x18712cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_187130:
    // 0x187130: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x187130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_187134:
    // 0x187134: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x187134u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_187138:
    // 0x187138: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x187138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_18713c:
    // 0x18713c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18713cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_187140:
    // 0x187140: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x187140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_187144:
    // 0x187144: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x187144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_187148:
    // 0x187148: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x187148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_18714c:
    // 0x18714c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x18714cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_187150:
    // 0x187150: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x187150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_187154:
    // 0x187154: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x187154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_187158:
    // 0x187158: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x187158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_18715c:
    // 0x18715c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187160:
    if (ctx->pc == 0x187160u) {
        ctx->pc = 0x187160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18715Cu;
        // 0x187160: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x187164u;
        goto label_187164;
    }
    ctx->pc = 0x18715Cu;
    {
        const bool branch_taken_0x18715c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18715Cu;
        // 0x187160: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18715c) {
            ctx->pc = 0x187174u;
            goto label_187174;
        }
    }
    ctx->pc = 0x187164u;
label_187164:
    // 0x187164: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187168:
    // 0x187168: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x187168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18716c:
    // 0x18716c: 0x40f809  jalr        $v0
label_187170:
    if (ctx->pc == 0x187170u) {
        ctx->pc = 0x187174u;
        goto label_187174;
    }
    ctx->pc = 0x18716Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187174u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18716Cu, 0x187174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187174u;
label_187174:
    // 0x187174: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x187174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_187178:
    // 0x187178: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_18717c:
    if (ctx->pc == 0x18717Cu) {
        ctx->pc = 0x18717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187178u;
        // 0x18717c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187180u;
        goto label_187180;
    }
    ctx->pc = 0x187178u;
    {
        const bool branch_taken_0x187178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187178u;
        // 0x18717c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187178) {
            ctx->pc = 0x187238u;
            goto label_187238;
        }
    }
    ctx->pc = 0x187180u;
label_187180:
    // 0x187180: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x187180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_187184:
    // 0x187184: 0xc0f5240  jal         func_3D4900
label_187188:
    if (ctx->pc == 0x187188u) {
        ctx->pc = 0x187188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187184u;
        // 0x187188: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18718Cu;
        goto label_18718c;
    }
    ctx->pc = 0x187184u;
    SET_GPR_U32(ctx, 31, 0x18718Cu);
    ctx->pc = 0x187188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187184u;
    // 0x187188: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187184u, 0x18718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18718Cu;
label_18718c:
    // 0x18718c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18718cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187190:
    // 0x187190: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x187190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_187194:
    // 0x187194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187198:
    // 0x187198: 0xc061a32  jal         func_1868C8
label_18719c:
    if (ctx->pc == 0x18719Cu) {
        ctx->pc = 0x18719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187198u;
        // 0x18719c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1871A0u;
        goto label_1871a0;
    }
    ctx->pc = 0x187198u;
    SET_GPR_U32(ctx, 31, 0x1871A0u);
    ctx->pc = 0x18719Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187198u;
    // 0x18719c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x187198u, 0x1871A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871A0u;
label_1871a0:
    // 0x1871a0: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x1871a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1871a4:
    // 0x1871a4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1871a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1871a8:
    // 0x1871a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1871a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1871ac:
    // 0x1871ac: 0x244212c0  addiu       $v0, $v0, 0x12C0
    ctx->pc = 0x1871acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1871b0:
    // 0x1871b0: 0x26140050  addiu       $s4, $s0, 0x50
    ctx->pc = 0x1871b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1871b4:
    // 0x1871b4: 0xc0f6a96  jal         func_3DAA58
label_1871b8:
    if (ctx->pc == 0x1871B8u) {
        ctx->pc = 0x1871B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871B4u;
        // 0x1871b8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1871BCu;
        goto label_1871bc;
    }
    ctx->pc = 0x1871B4u;
    SET_GPR_U32(ctx, 31, 0x1871BCu);
    ctx->pc = 0x1871B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1871B4u;
    // 0x1871b8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1871B4u, 0x1871BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871BCu;
label_1871bc:
    // 0x1871bc: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x1871bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
label_1871c0:
    // 0x1871c0: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x1871c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
label_1871c4:
    // 0x1871c4: 0x26520f90  addiu       $s2, $s2, 0xF90
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3984));
label_1871c8:
    // 0x1871c8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1871c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1871cc:
    // 0x1871cc: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x1871ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
label_1871d0:
    // 0x1871d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1871d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1871d4:
    // 0x1871d4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1871d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1871d8:
    // 0x1871d8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1871d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1871dc:
    // 0x1871dc: 0xc0f6a96  jal         func_3DAA58
label_1871e0:
    if (ctx->pc == 0x1871E0u) {
        ctx->pc = 0x1871E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871DCu;
        // 0x1871e0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1871E4u;
        goto label_1871e4;
    }
    ctx->pc = 0x1871DCu;
    SET_GPR_U32(ctx, 31, 0x1871E4u);
    ctx->pc = 0x1871E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1871DCu;
    // 0x1871e0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1871DCu, 0x1871E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871E4u;
label_1871e4:
    // 0x1871e4: 0xae720018  sw          $s2, 0x18($s3)
    ctx->pc = 0x1871e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 18));
label_1871e8:
    // 0x1871e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1871e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1871ec:
    // 0x1871ec: 0xae750010  sw          $s5, 0x10($s3)
    ctx->pc = 0x1871ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 21));
label_1871f0:
    // 0x1871f0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1871f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_1871f4:
    // 0x1871f4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1871f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1871f8:
    // 0x1871f8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1871f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1871fc:
    // 0x1871fc: 0xc0f6a96  jal         func_3DAA58
label_187200:
    if (ctx->pc == 0x187200u) {
        ctx->pc = 0x187200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871FCu;
        // 0x187200: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187204u;
        goto label_187204;
    }
    ctx->pc = 0x1871FCu;
    SET_GPR_U32(ctx, 31, 0x187204u);
    ctx->pc = 0x187200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1871FCu;
    // 0x187200: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1871FCu, 0x187204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187204u;
label_187204:
    // 0x187204: 0xae920018  sw          $s2, 0x18($s4)
    ctx->pc = 0x187204u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 18));
label_187208:
    // 0x187208: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x187208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_18720c:
    // 0x18720c: 0xae950010  sw          $s5, 0x10($s4)
    ctx->pc = 0x18720cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
label_187210:
    // 0x187210: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x187210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_187214:
    // 0x187214: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x187214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_187218:
    // 0x187218: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x187218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_18721c:
    // 0x18721c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x18721cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_187220:
    // 0x187220: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x187220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_187224:
    // 0x187224: 0xaed00020  sw          $s0, 0x20($s6)
    ctx->pc = 0x187224u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 16));
label_187228:
    // 0x187228: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x187228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_18722c:
    // 0x18722c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x18722cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_187230:
    // 0x187230: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x187230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_187234:
    // 0x187234: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x187234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_187238:
    // 0x187238: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x187238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18723c:
    // 0x18723c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x18723cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_187240:
    // 0x187240: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x187240u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_187244:
    // 0x187244: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x187244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_187248:
    // 0x187248: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x187248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_18724c:
    // 0x18724c: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x18724cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_187250:
    // 0x187250: 0x100f809  jalr        $t0
label_187254:
    if (ctx->pc == 0x187254u) {
        ctx->pc = 0x187254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187250u;
        // 0x187254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187258u;
        goto label_187258;
    }
    ctx->pc = 0x187250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x187258u);
        ctx->pc = 0x187254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187250u;
        // 0x187254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187250u, 0x187258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187258u;
label_187258:
    // 0x187258: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x187258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18725c:
    // 0x18725c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x18725cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_187260:
    // 0x187260: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x187260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_187264:
    // 0x187264: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x187264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_187268:
    // 0x187268: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x187268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18726c:
    // 0x18726c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x18726cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_187270:
    // 0x187270: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x187270u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_187274:
    // 0x187274: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x187274u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_187278:
    // 0x187278: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x187278u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18727c:
    // 0x18727c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x18727cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_187280:
    // 0x187280: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x187280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_187284:
    // 0x187284: 0x3e00008  jr          $ra
label_187288:
    if (ctx->pc == 0x187288u) {
        ctx->pc = 0x187288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187284u;
        // 0x187288: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18728Cu;
        goto label_18728c;
    }
    ctx->pc = 0x187284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187284u;
        // 0x187288: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18728Cu;
label_18728c:
    // 0x18728c: 0x0  nop
    ctx->pc = 0x18728cu;
    // NOP
    ctx->pc = 0x187290u;
}
