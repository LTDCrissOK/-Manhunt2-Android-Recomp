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

// Function: sub_00269128
// Address: 0x269128 - 0x269320
void sub_00269128_0x269128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269128_0x269128");
#endif

    switch (ctx->pc) {
        case 0x269128u: goto label_269128;
        case 0x26912cu: goto label_26912c;
        case 0x269130u: goto label_269130;
        case 0x269134u: goto label_269134;
        case 0x269138u: goto label_269138;
        case 0x26913cu: goto label_26913c;
        case 0x269140u: goto label_269140;
        case 0x269144u: goto label_269144;
        case 0x269148u: goto label_269148;
        case 0x26914cu: goto label_26914c;
        case 0x269150u: goto label_269150;
        case 0x269154u: goto label_269154;
        case 0x269158u: goto label_269158;
        case 0x26915cu: goto label_26915c;
        case 0x269160u: goto label_269160;
        case 0x269164u: goto label_269164;
        case 0x269168u: goto label_269168;
        case 0x26916cu: goto label_26916c;
        case 0x269170u: goto label_269170;
        case 0x269174u: goto label_269174;
        case 0x269178u: goto label_269178;
        case 0x26917cu: goto label_26917c;
        case 0x269180u: goto label_269180;
        case 0x269184u: goto label_269184;
        case 0x269188u: goto label_269188;
        case 0x26918cu: goto label_26918c;
        case 0x269190u: goto label_269190;
        case 0x269194u: goto label_269194;
        case 0x269198u: goto label_269198;
        case 0x26919cu: goto label_26919c;
        case 0x2691a0u: goto label_2691a0;
        case 0x2691a4u: goto label_2691a4;
        case 0x2691a8u: goto label_2691a8;
        case 0x2691acu: goto label_2691ac;
        case 0x2691b0u: goto label_2691b0;
        case 0x2691b4u: goto label_2691b4;
        case 0x2691b8u: goto label_2691b8;
        case 0x2691bcu: goto label_2691bc;
        case 0x2691c0u: goto label_2691c0;
        case 0x2691c4u: goto label_2691c4;
        case 0x2691c8u: goto label_2691c8;
        case 0x2691ccu: goto label_2691cc;
        case 0x2691d0u: goto label_2691d0;
        case 0x2691d4u: goto label_2691d4;
        case 0x2691d8u: goto label_2691d8;
        case 0x2691dcu: goto label_2691dc;
        case 0x2691e0u: goto label_2691e0;
        case 0x2691e4u: goto label_2691e4;
        case 0x2691e8u: goto label_2691e8;
        case 0x2691ecu: goto label_2691ec;
        case 0x2691f0u: goto label_2691f0;
        case 0x2691f4u: goto label_2691f4;
        case 0x2691f8u: goto label_2691f8;
        case 0x2691fcu: goto label_2691fc;
        case 0x269200u: goto label_269200;
        case 0x269204u: goto label_269204;
        case 0x269208u: goto label_269208;
        case 0x26920cu: goto label_26920c;
        case 0x269210u: goto label_269210;
        case 0x269214u: goto label_269214;
        case 0x269218u: goto label_269218;
        case 0x26921cu: goto label_26921c;
        case 0x269220u: goto label_269220;
        case 0x269224u: goto label_269224;
        case 0x269228u: goto label_269228;
        case 0x26922cu: goto label_26922c;
        case 0x269230u: goto label_269230;
        case 0x269234u: goto label_269234;
        case 0x269238u: goto label_269238;
        case 0x26923cu: goto label_26923c;
        case 0x269240u: goto label_269240;
        case 0x269244u: goto label_269244;
        case 0x269248u: goto label_269248;
        case 0x26924cu: goto label_26924c;
        case 0x269250u: goto label_269250;
        case 0x269254u: goto label_269254;
        case 0x269258u: goto label_269258;
        case 0x26925cu: goto label_26925c;
        case 0x269260u: goto label_269260;
        case 0x269264u: goto label_269264;
        case 0x269268u: goto label_269268;
        case 0x26926cu: goto label_26926c;
        case 0x269270u: goto label_269270;
        case 0x269274u: goto label_269274;
        case 0x269278u: goto label_269278;
        case 0x26927cu: goto label_26927c;
        case 0x269280u: goto label_269280;
        case 0x269284u: goto label_269284;
        case 0x269288u: goto label_269288;
        case 0x26928cu: goto label_26928c;
        case 0x269290u: goto label_269290;
        case 0x269294u: goto label_269294;
        case 0x269298u: goto label_269298;
        case 0x26929cu: goto label_26929c;
        case 0x2692a0u: goto label_2692a0;
        case 0x2692a4u: goto label_2692a4;
        case 0x2692a8u: goto label_2692a8;
        case 0x2692acu: goto label_2692ac;
        case 0x2692b0u: goto label_2692b0;
        case 0x2692b4u: goto label_2692b4;
        case 0x2692b8u: goto label_2692b8;
        case 0x2692bcu: goto label_2692bc;
        case 0x2692c0u: goto label_2692c0;
        case 0x2692c4u: goto label_2692c4;
        case 0x2692c8u: goto label_2692c8;
        case 0x2692ccu: goto label_2692cc;
        case 0x2692d0u: goto label_2692d0;
        case 0x2692d4u: goto label_2692d4;
        case 0x2692d8u: goto label_2692d8;
        case 0x2692dcu: goto label_2692dc;
        case 0x2692e0u: goto label_2692e0;
        case 0x2692e4u: goto label_2692e4;
        case 0x2692e8u: goto label_2692e8;
        case 0x2692ecu: goto label_2692ec;
        case 0x2692f0u: goto label_2692f0;
        case 0x2692f4u: goto label_2692f4;
        case 0x2692f8u: goto label_2692f8;
        case 0x2692fcu: goto label_2692fc;
        case 0x269300u: goto label_269300;
        case 0x269304u: goto label_269304;
        case 0x269308u: goto label_269308;
        case 0x26930cu: goto label_26930c;
        case 0x269310u: goto label_269310;
        case 0x269314u: goto label_269314;
        case 0x269318u: goto label_269318;
        case 0x26931cu: goto label_26931c;
        default: break;
    }

    ctx->pc = 0x269128u;

label_269128:
    // 0x269128: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x269128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_26912c:
    // 0x26912c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x26912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_269130:
    // 0x269130: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x269130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_269134:
    // 0x269134: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x269134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_269138:
    // 0x269138: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x269138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_26913c:
    // 0x26913c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x26913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_269140:
    // 0x269140: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x269140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_269144:
    // 0x269144: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x269144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_269148:
    // 0x269148: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x269148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26914c:
    // 0x26914c: 0x92220114  lbu         $v0, 0x114($s1)
    ctx->pc = 0x26914cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 276)));
label_269150:
    // 0x269150: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_269154:
    if (ctx->pc == 0x269154u) {
        ctx->pc = 0x269154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269150u;
        // 0x269154: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269158u;
        goto label_269158;
    }
    ctx->pc = 0x269150u;
    {
        const bool branch_taken_0x269150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269150u;
        // 0x269154: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269150) {
            ctx->pc = 0x2691DCu;
            goto label_2691dc;
        }
    }
    ctx->pc = 0x269158u;
label_269158:
    // 0x269158: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x269158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26915c:
    // 0x26915c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26915cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_269160:
    // 0x269160: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x269160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269164:
    // 0x269164: 0x10000018  b           . + 4 + (0x18 << 2)
label_269168:
    if (ctx->pc == 0x269168u) {
        ctx->pc = 0x269168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269164u;
        // 0x269168: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26916Cu;
        goto label_26916c;
    }
    ctx->pc = 0x269164u;
    {
        const bool branch_taken_0x269164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269164u;
        // 0x269168: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269164) {
            ctx->pc = 0x2691C8u;
            goto label_2691c8;
        }
    }
    ctx->pc = 0x26916Cu;
label_26916c:
    // 0x26916c: 0x0  nop
    ctx->pc = 0x26916cu;
    // NOP
label_269170:
    // 0x269170: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x269170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_269174:
    // 0x269174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_269178:
    // 0x269178: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x269178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26917c:
    // 0x26917c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x26917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_269180:
    // 0x269180: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x269180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_269184:
    // 0x269184: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
label_269188:
    if (ctx->pc == 0x269188u) {
        ctx->pc = 0x269188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269184u;
        // 0x269188: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26918Cu;
        goto label_26918c;
    }
    ctx->pc = 0x269184u;
    {
        const bool branch_taken_0x269184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x269184) {
            ctx->pc = 0x269188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269184u;
            // 0x269188: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2691C8u;
            goto label_2691c8;
        }
    }
    ctx->pc = 0x26918Cu;
label_26918c:
    // 0x26918c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_269190:
    // 0x269190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269194:
    // 0x269194: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x269194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269198:
    // 0x269198: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x269198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26919c:
    // 0x26919c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x26919cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2691a0:
    // 0x2691a0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2691a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2691a4:
    // 0x2691a4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2691a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2691a8:
    // 0x2691a8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2691a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2691ac:
    // 0x2691ac: 0x8e220218  lw          $v0, 0x218($s1)
    ctx->pc = 0x2691acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2691b0:
    // 0x2691b0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x2691b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2691b4:
    // 0x2691b4: 0x60f809  jalr        $v1
label_2691b8:
    if (ctx->pc == 0x2691B8u) {
        ctx->pc = 0x2691B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691B4u;
        // 0x2691b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691BCu;
        goto label_2691bc;
    }
    ctx->pc = 0x2691B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2691BCu);
        ctx->pc = 0x2691B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691B4u;
        // 0x2691b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2691B4u, 0x2691BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2691BCu;
label_2691bc:
    // 0x2691bc: 0xc09a4c8  jal         func_269320
label_2691c0:
    if (ctx->pc == 0x2691C0u) {
        ctx->pc = 0x2691C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691BCu;
        // 0x2691c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691C4u;
        goto label_2691c4;
    }
    ctx->pc = 0x2691BCu;
    SET_GPR_U32(ctx, 31, 0x2691C4u);
    ctx->pc = 0x2691C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691BCu;
    // 0x2691c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269320u, 0x2691BCu, 0x2691C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691C4u;
label_2691c4:
    // 0x2691c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2691c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2691c8:
    // 0x2691c8: 0xc0796ac  jal         func_1E5AB0
label_2691cc:
    if (ctx->pc == 0x2691CCu) {
        ctx->pc = 0x2691D0u;
        goto label_2691d0;
    }
    ctx->pc = 0x2691C8u;
    SET_GPR_U32(ctx, 31, 0x2691D0u);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x2691C8u, 0x2691D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691D0u;
label_2691d0:
    // 0x2691d0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2691d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2691d4:
    // 0x2691d4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2691d8:
    if (ctx->pc == 0x2691D8u) {
        ctx->pc = 0x2691D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691D4u;
        // 0x2691d8: 0x8e4391dc  lw          $v1, -0x6E24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691DCu;
        goto label_2691dc;
    }
    ctx->pc = 0x2691D4u;
    {
        const bool branch_taken_0x2691d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2691D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691D4u;
        // 0x2691d8: 0x8e4391dc  lw          $v1, -0x6E24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691d4) {
            ctx->pc = 0x269170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269170;
        }
    }
    ctx->pc = 0x2691DCu;
label_2691dc:
    // 0x2691dc: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x2691dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2691e0:
    // 0x2691e0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2691e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2691e4:
    // 0x2691e4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2691e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2691e8:
    // 0x2691e8: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
label_2691ec:
    if (ctx->pc == 0x2691ECu) {
        ctx->pc = 0x2691ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691E8u;
        // 0x2691ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691F0u;
        goto label_2691f0;
    }
    ctx->pc = 0x2691E8u;
    {
        const bool branch_taken_0x2691e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691E8u;
        // 0x2691ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691e8) {
            ctx->pc = 0x2692F0u;
            goto label_2692f0;
        }
    }
    ctx->pc = 0x2691F0u;
label_2691f0:
    // 0x2691f0: 0xc076e46  jal         func_1DB918
label_2691f4:
    if (ctx->pc == 0x2691F4u) {
        ctx->pc = 0x2691F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691F0u;
        // 0x2691f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691F8u;
        goto label_2691f8;
    }
    ctx->pc = 0x2691F0u;
    SET_GPR_U32(ctx, 31, 0x2691F8u);
    ctx->pc = 0x2691F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691F0u;
    // 0x2691f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2691F0u, 0x2691F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691F8u;
label_2691f8:
    // 0x2691f8: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x2691f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2691fc:
    // 0x2691fc: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2691fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_269200:
    // 0x269200: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x269200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_269204:
    // 0x269204: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x269204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_269208:
    // 0x269208: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x269208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26920c:
    // 0x26920c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x26920cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_269210:
    // 0x269210: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x269210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_269214:
    // 0x269214: 0xc079f06  jal         func_1E7C18
label_269218:
    if (ctx->pc == 0x269218u) {
        ctx->pc = 0x269218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269214u;
        // 0x269218: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26921Cu;
        goto label_26921c;
    }
    ctx->pc = 0x269214u;
    SET_GPR_U32(ctx, 31, 0x26921Cu);
    ctx->pc = 0x269218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269214u;
    // 0x269218: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7C18u, 0x269214u, 0x26921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26921Cu;
label_26921c:
    // 0x26921c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26921cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_269220:
    // 0x269220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269224:
    // 0x269224: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x269224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_269228:
    // 0x269228: 0x8c6391f0  lw          $v1, -0x6E10($v1)
    ctx->pc = 0x269228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939120)));
label_26922c:
    // 0x26922c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_269230:
    if (ctx->pc == 0x269230u) {
        ctx->pc = 0x269230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26922Cu;
        // 0x269230: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x269234u;
        goto label_269234;
    }
    ctx->pc = 0x26922Cu;
    {
        const bool branch_taken_0x26922c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26922c) {
            ctx->pc = 0x269230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26922Cu;
            // 0x269230: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26924Cu;
            goto label_26924c;
        }
    }
    ctx->pc = 0x269234u;
label_269234:
    // 0x269234: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x269234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_269238:
    // 0x269238: 0x8c4391ec  lw          $v1, -0x6E14($v0)
    ctx->pc = 0x269238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939116)));
label_26923c:
    // 0x26923c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26923cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_269240:
    // 0x269240: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x269240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_269244:
    // 0x269244: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x269244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_269248:
    // 0x269248: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x269248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26924c:
    // 0x26924c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_269250:
    if (ctx->pc == 0x269250u) {
        ctx->pc = 0x269250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26924Cu;
        // 0x269250: 0x8e4291f0  lw          $v0, -0x6E10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269254u;
        goto label_269254;
    }
    ctx->pc = 0x26924Cu;
    {
        const bool branch_taken_0x26924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26924Cu;
        // 0x269250: 0x8e4291f0  lw          $v0, -0x6E10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26924c) {
            ctx->pc = 0x2692E4u;
            goto label_2692e4;
        }
    }
    ctx->pc = 0x269254u;
label_269254:
    // 0x269254: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_269258:
    if (ctx->pc == 0x269258u) {
        ctx->pc = 0x269258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269254u;
        // 0x269258: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26925Cu;
        goto label_26925c;
    }
    ctx->pc = 0x269254u;
    {
        const bool branch_taken_0x269254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269254u;
        // 0x269258: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269254) {
            ctx->pc = 0x2692E4u;
            goto label_2692e4;
        }
    }
    ctx->pc = 0x26925Cu;
label_26925c:
    // 0x26925c: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x26925cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
label_269260:
    // 0x269260: 0x8e6291ec  lw          $v0, -0x6E14($s3)
    ctx->pc = 0x269260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939116)));
label_269264:
    // 0x269264: 0x0  nop
    ctx->pc = 0x269264u;
    // NOP
label_269268:
    // 0x269268: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x269268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_26926c:
    // 0x26926c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_269270:
    // 0x269270: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x269270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_269274:
    // 0x269274: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x269274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_269278:
    // 0x269278: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x269278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_26927c:
    // 0x26927c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_269280:
    if (ctx->pc == 0x269280u) {
        ctx->pc = 0x269280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26927Cu;
        // 0x269280: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269284u;
        goto label_269284;
    }
    ctx->pc = 0x26927Cu;
    {
        const bool branch_taken_0x26927c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26927Cu;
        // 0x269280: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26927c) {
            ctx->pc = 0x269288u;
            goto label_269288;
        }
    }
    ctx->pc = 0x269284u;
label_269284:
    // 0x269284: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x269284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_269288:
    // 0x269288: 0x8c84010c  lw          $a0, 0x10C($a0)
    ctx->pc = 0x269288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_26928c:
    // 0x26928c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x26928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_269290:
    // 0x269290: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x269290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_269294:
    // 0x269294: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x269294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_269298:
    // 0x269298: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x269298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26929c:
    // 0x26929c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x26929cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2692a0:
    // 0x2692a0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2692a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2692a4:
    // 0x2692a4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2692a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2692a8:
    // 0x2692a8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2692a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2692ac:
    // 0x2692ac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2692acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2692b0:
    // 0x2692b0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2692b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2692b4:
    // 0x2692b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2692b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2692b8:
    // 0x2692b8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2692b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2692bc:
    // 0x2692bc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2692bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2692c0:
    // 0x2692c0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2692c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2692c4:
    // 0x2692c4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2692c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2692c8:
    // 0x2692c8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2692c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2692cc:
    // 0x2692cc: 0xc0b7264  jal         func_2DC990
label_2692d0:
    if (ctx->pc == 0x2692D0u) {
        ctx->pc = 0x2692D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692CCu;
        // 0x2692d0: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692D4u;
        goto label_2692d4;
    }
    ctx->pc = 0x2692CCu;
    SET_GPR_U32(ctx, 31, 0x2692D4u);
    ctx->pc = 0x2692D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2692CCu;
    // 0x2692d0: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2692CCu, 0x2692D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692D4u;
label_2692d4:
    // 0x2692d4: 0x8e4291f0  lw          $v0, -0x6E10($s2)
    ctx->pc = 0x2692d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939120)));
label_2692d8:
    // 0x2692d8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2692d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2692dc:
    // 0x2692dc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_2692e0:
    if (ctx->pc == 0x2692E0u) {
        ctx->pc = 0x2692E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692DCu;
        // 0x2692e0: 0x8e6291ec  lw          $v0, -0x6E14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692E4u;
        goto label_2692e4;
    }
    ctx->pc = 0x2692DCu;
    {
        const bool branch_taken_0x2692dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2692E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692DCu;
        // 0x2692e0: 0x8e6291ec  lw          $v0, -0x6E14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692dc) {
            ctx->pc = 0x269268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269268;
        }
    }
    ctx->pc = 0x2692E4u;
label_2692e4:
    // 0x2692e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2692e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2692e8:
    // 0x2692e8: 0xc076e38  jal         func_1DB8E0
label_2692ec:
    if (ctx->pc == 0x2692ECu) {
        ctx->pc = 0x2692ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692E8u;
        // 0x2692ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692F0u;
        goto label_2692f0;
    }
    ctx->pc = 0x2692E8u;
    SET_GPR_U32(ctx, 31, 0x2692F0u);
    ctx->pc = 0x2692ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2692E8u;
    // 0x2692ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2692E8u, 0x2692F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692F0u;
label_2692f0:
    // 0x2692f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2692f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2692f4:
    // 0x2692f4: 0xc083e40  jal         func_20F900
label_2692f8:
    if (ctx->pc == 0x2692F8u) {
        ctx->pc = 0x2692F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692F4u;
        // 0x2692f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692FCu;
        goto label_2692fc;
    }
    ctx->pc = 0x2692F4u;
    SET_GPR_U32(ctx, 31, 0x2692FCu);
    ctx->pc = 0x2692F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2692F4u;
    // 0x2692f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F900u, 0x2692F4u, 0x2692FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692FCu;
label_2692fc:
    // 0x2692fc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2692fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_269300:
    // 0x269300: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x269300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_269304:
    // 0x269304: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x269304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_269308:
    // 0x269308: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x269308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_26930c:
    // 0x26930c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x26930cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_269310:
    // 0x269310: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x269310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_269314:
    // 0x269314: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x269314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_269318:
    // 0x269318: 0x3e00008  jr          $ra
label_26931c:
    if (ctx->pc == 0x26931Cu) {
        ctx->pc = 0x26931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269318u;
        // 0x26931c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269320u;
        goto label_fallthrough_0x269318;
    }
    ctx->pc = 0x269318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269318u;
        // 0x26931c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x269318:
    ctx->pc = 0x269320u;
}
