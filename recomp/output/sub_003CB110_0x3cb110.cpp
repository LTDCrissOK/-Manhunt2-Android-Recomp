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

// Function: sub_003CB110
// Address: 0x3cb110 - 0x3cb2e8
void sub_003CB110_0x3cb110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB110_0x3cb110");
#endif

    switch (ctx->pc) {
        case 0x3cb110u: goto label_3cb110;
        case 0x3cb114u: goto label_3cb114;
        case 0x3cb118u: goto label_3cb118;
        case 0x3cb11cu: goto label_3cb11c;
        case 0x3cb120u: goto label_3cb120;
        case 0x3cb124u: goto label_3cb124;
        case 0x3cb128u: goto label_3cb128;
        case 0x3cb12cu: goto label_3cb12c;
        case 0x3cb130u: goto label_3cb130;
        case 0x3cb134u: goto label_3cb134;
        case 0x3cb138u: goto label_3cb138;
        case 0x3cb13cu: goto label_3cb13c;
        case 0x3cb140u: goto label_3cb140;
        case 0x3cb144u: goto label_3cb144;
        case 0x3cb148u: goto label_3cb148;
        case 0x3cb14cu: goto label_3cb14c;
        case 0x3cb150u: goto label_3cb150;
        case 0x3cb154u: goto label_3cb154;
        case 0x3cb158u: goto label_3cb158;
        case 0x3cb15cu: goto label_3cb15c;
        case 0x3cb160u: goto label_3cb160;
        case 0x3cb164u: goto label_3cb164;
        case 0x3cb168u: goto label_3cb168;
        case 0x3cb16cu: goto label_3cb16c;
        case 0x3cb170u: goto label_3cb170;
        case 0x3cb174u: goto label_3cb174;
        case 0x3cb178u: goto label_3cb178;
        case 0x3cb17cu: goto label_3cb17c;
        case 0x3cb180u: goto label_3cb180;
        case 0x3cb184u: goto label_3cb184;
        case 0x3cb188u: goto label_3cb188;
        case 0x3cb18cu: goto label_3cb18c;
        case 0x3cb190u: goto label_3cb190;
        case 0x3cb194u: goto label_3cb194;
        case 0x3cb198u: goto label_3cb198;
        case 0x3cb19cu: goto label_3cb19c;
        case 0x3cb1a0u: goto label_3cb1a0;
        case 0x3cb1a4u: goto label_3cb1a4;
        case 0x3cb1a8u: goto label_3cb1a8;
        case 0x3cb1acu: goto label_3cb1ac;
        case 0x3cb1b0u: goto label_3cb1b0;
        case 0x3cb1b4u: goto label_3cb1b4;
        case 0x3cb1b8u: goto label_3cb1b8;
        case 0x3cb1bcu: goto label_3cb1bc;
        case 0x3cb1c0u: goto label_3cb1c0;
        case 0x3cb1c4u: goto label_3cb1c4;
        case 0x3cb1c8u: goto label_3cb1c8;
        case 0x3cb1ccu: goto label_3cb1cc;
        case 0x3cb1d0u: goto label_3cb1d0;
        case 0x3cb1d4u: goto label_3cb1d4;
        case 0x3cb1d8u: goto label_3cb1d8;
        case 0x3cb1dcu: goto label_3cb1dc;
        case 0x3cb1e0u: goto label_3cb1e0;
        case 0x3cb1e4u: goto label_3cb1e4;
        case 0x3cb1e8u: goto label_3cb1e8;
        case 0x3cb1ecu: goto label_3cb1ec;
        case 0x3cb1f0u: goto label_3cb1f0;
        case 0x3cb1f4u: goto label_3cb1f4;
        case 0x3cb1f8u: goto label_3cb1f8;
        case 0x3cb1fcu: goto label_3cb1fc;
        case 0x3cb200u: goto label_3cb200;
        case 0x3cb204u: goto label_3cb204;
        case 0x3cb208u: goto label_3cb208;
        case 0x3cb20cu: goto label_3cb20c;
        case 0x3cb210u: goto label_3cb210;
        case 0x3cb214u: goto label_3cb214;
        case 0x3cb218u: goto label_3cb218;
        case 0x3cb21cu: goto label_3cb21c;
        case 0x3cb220u: goto label_3cb220;
        case 0x3cb224u: goto label_3cb224;
        case 0x3cb228u: goto label_3cb228;
        case 0x3cb22cu: goto label_3cb22c;
        case 0x3cb230u: goto label_3cb230;
        case 0x3cb234u: goto label_3cb234;
        case 0x3cb238u: goto label_3cb238;
        case 0x3cb23cu: goto label_3cb23c;
        case 0x3cb240u: goto label_3cb240;
        case 0x3cb244u: goto label_3cb244;
        case 0x3cb248u: goto label_3cb248;
        case 0x3cb24cu: goto label_3cb24c;
        case 0x3cb250u: goto label_3cb250;
        case 0x3cb254u: goto label_3cb254;
        case 0x3cb258u: goto label_3cb258;
        case 0x3cb25cu: goto label_3cb25c;
        case 0x3cb260u: goto label_3cb260;
        case 0x3cb264u: goto label_3cb264;
        case 0x3cb268u: goto label_3cb268;
        case 0x3cb26cu: goto label_3cb26c;
        case 0x3cb270u: goto label_3cb270;
        case 0x3cb274u: goto label_3cb274;
        case 0x3cb278u: goto label_3cb278;
        case 0x3cb27cu: goto label_3cb27c;
        case 0x3cb280u: goto label_3cb280;
        case 0x3cb284u: goto label_3cb284;
        case 0x3cb288u: goto label_3cb288;
        case 0x3cb28cu: goto label_3cb28c;
        case 0x3cb290u: goto label_3cb290;
        case 0x3cb294u: goto label_3cb294;
        case 0x3cb298u: goto label_3cb298;
        case 0x3cb29cu: goto label_3cb29c;
        case 0x3cb2a0u: goto label_3cb2a0;
        case 0x3cb2a4u: goto label_3cb2a4;
        case 0x3cb2a8u: goto label_3cb2a8;
        case 0x3cb2acu: goto label_3cb2ac;
        case 0x3cb2b0u: goto label_3cb2b0;
        case 0x3cb2b4u: goto label_3cb2b4;
        case 0x3cb2b8u: goto label_3cb2b8;
        case 0x3cb2bcu: goto label_3cb2bc;
        case 0x3cb2c0u: goto label_3cb2c0;
        case 0x3cb2c4u: goto label_3cb2c4;
        case 0x3cb2c8u: goto label_3cb2c8;
        case 0x3cb2ccu: goto label_3cb2cc;
        case 0x3cb2d0u: goto label_3cb2d0;
        case 0x3cb2d4u: goto label_3cb2d4;
        case 0x3cb2d8u: goto label_3cb2d8;
        case 0x3cb2dcu: goto label_3cb2dc;
        case 0x3cb2e0u: goto label_3cb2e0;
        case 0x3cb2e4u: goto label_3cb2e4;
        default: break;
    }

    ctx->pc = 0x3cb110u;

label_3cb110:
    // 0x3cb110: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3cb110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3cb114:
    // 0x3cb114: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3cb114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_3cb118:
    // 0x3cb118: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3cb118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_3cb11c:
    // 0x3cb11c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3cb11cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cb120:
    // 0x3cb120: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3cb120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3cb124:
    // 0x3cb124: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3cb124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cb128:
    // 0x3cb128: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3cb128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3cb12c:
    // 0x3cb12c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3cb12cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb130:
    // 0x3cb130: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3cb130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3cb134:
    // 0x3cb134: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3cb134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb138:
    // 0x3cb138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3cb138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3cb13c:
    // 0x3cb13c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3cb13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cb140:
    // 0x3cb140: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3cb140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3cb144:
    // 0x3cb144: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3cb144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3cb148:
    // 0x3cb148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3cb148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cb14c:
    // 0x3cb14c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3cb150:
    if (ctx->pc == 0x3CB150u) {
        ctx->pc = 0x3CB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB14Cu;
        // 0x3cb150: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB154u;
        goto label_3cb154;
    }
    ctx->pc = 0x3CB14Cu;
    {
        const bool branch_taken_0x3cb14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB14Cu;
        // 0x3cb150: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb14c) {
            ctx->pc = 0x3CB15Cu;
            goto label_3cb15c;
        }
    }
    ctx->pc = 0x3CB154u;
label_3cb154:
    // 0x3cb154: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3cb158:
    if (ctx->pc == 0x3CB158u) {
        ctx->pc = 0x3CB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB154u;
        // 0x3cb158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB15Cu;
        goto label_3cb15c;
    }
    ctx->pc = 0x3CB154u;
    {
        const bool branch_taken_0x3cb154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB154u;
        // 0x3cb158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb154) {
            ctx->pc = 0x3CB2C0u;
            goto label_3cb2c0;
        }
    }
    ctx->pc = 0x3CB15Cu;
label_3cb15c:
    // 0x3cb15c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3cb15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb160:
    // 0x3cb160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb164:
    // 0x3cb164: 0xc0f50e0  jal         func_3D4380
label_3cb168:
    if (ctx->pc == 0x3CB168u) {
        ctx->pc = 0x3CB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB164u;
        // 0x3cb168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB16Cu;
        goto label_3cb16c;
    }
    ctx->pc = 0x3CB164u;
    SET_GPR_U32(ctx, 31, 0x3CB16Cu);
    ctx->pc = 0x3CB168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB164u;
    // 0x3cb168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3CB164u, 0x3CB16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB16Cu;
label_3cb16c:
    // 0x3cb16c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_3cb170:
    if (ctx->pc == 0x3CB170u) {
        ctx->pc = 0x3CB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB16Cu;
        // 0x3cb170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB174u;
        goto label_3cb174;
    }
    ctx->pc = 0x3CB16Cu;
    {
        const bool branch_taken_0x3cb16c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB16Cu;
        // 0x3cb170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb16c) {
            ctx->pc = 0x3CB1A0u;
            goto label_3cb1a0;
        }
    }
    ctx->pc = 0x3CB174u;
label_3cb174:
    // 0x3cb174: 0xc0f4f7c  jal         func_3D3DF0
label_3cb178:
    if (ctx->pc == 0x3CB178u) {
        ctx->pc = 0x3CB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB174u;
        // 0x3cb178: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB17Cu;
        goto label_3cb17c;
    }
    ctx->pc = 0x3CB174u;
    SET_GPR_U32(ctx, 31, 0x3CB17Cu);
    ctx->pc = 0x3CB178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB174u;
    // 0x3cb178: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3CB174u, 0x3CB17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB17Cu;
label_3cb17c:
    // 0x3cb17c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3cb17cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb180:
    // 0x3cb180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cb180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb184:
    // 0x3cb184: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3cb184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cb188:
    // 0x3cb188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cb188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb18c:
    // 0x3cb18c: 0x2a0f809  jalr        $s5
label_3cb190:
    if (ctx->pc == 0x3CB190u) {
        ctx->pc = 0x3CB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB18Cu;
        // 0x3cb190: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB194u;
        goto label_3cb194;
    }
    ctx->pc = 0x3CB18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x3CB194u);
        ctx->pc = 0x3CB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB18Cu;
        // 0x3cb190: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB18Cu, 0x3CB194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB194u;
label_3cb194:
    // 0x3cb194: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3cb194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cb198:
    // 0x3cb198: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3cb198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3cb19c:
    // 0x3cb19c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3cb19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3cb1a0:
    // 0x3cb1a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x3cb1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_3cb1a4:
    // 0x3cb1a4: 0xdc251a98  ld          $a1, 0x1A98($at)
    ctx->pc = 0x3cb1a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 6808)));
label_3cb1a8:
    // 0x3cb1a8: 0xc0f50e0  jal         func_3D4380
label_3cb1ac:
    if (ctx->pc == 0x3CB1ACu) {
        ctx->pc = 0x3CB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1A8u;
        // 0x3cb1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1B0u;
        goto label_3cb1b0;
    }
    ctx->pc = 0x3CB1A8u;
    SET_GPR_U32(ctx, 31, 0x3CB1B0u);
    ctx->pc = 0x3CB1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB1A8u;
    // 0x3cb1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3CB1A8u, 0x3CB1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB1B0u;
label_3cb1b0:
    // 0x3cb1b0: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_3cb1b4:
    if (ctx->pc == 0x3CB1B4u) {
        ctx->pc = 0x3CB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1B0u;
        // 0x3cb1b4: 0x3c130048  lui         $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1B8u;
        goto label_3cb1b8;
    }
    ctx->pc = 0x3CB1B0u;
    {
        const bool branch_taken_0x3cb1b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1B0u;
        // 0x3cb1b4: 0x3c130048  lui         $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1b0) {
            ctx->pc = 0x3CB1F4u;
            goto label_3cb1f4;
        }
    }
    ctx->pc = 0x3CB1B8u;
label_3cb1b8:
    // 0x3cb1b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cb1bc:
    if (ctx->pc == 0x3CB1BCu) {
        ctx->pc = 0x3CB1C0u;
        goto label_3cb1c0;
    }
    ctx->pc = 0x3CB1B8u;
    {
        const bool branch_taken_0x3cb1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb1b8) {
            ctx->pc = 0x3CB1D4u;
            goto label_3cb1d4;
        }
    }
    ctx->pc = 0x3CB1C0u;
label_3cb1c0:
    // 0x3cb1c0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x3cb1c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_3cb1c4:
    // 0x3cb1c4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3cb1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_3cb1c8:
    // 0x3cb1c8: 0xc0f4f96  jal         func_3D3E58
label_3cb1cc:
    if (ctx->pc == 0x3CB1CCu) {
        ctx->pc = 0x3CB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1C8u;
        // 0x3cb1cc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1D0u;
        goto label_3cb1d0;
    }
    ctx->pc = 0x3CB1C8u;
    SET_GPR_U32(ctx, 31, 0x3CB1D0u);
    ctx->pc = 0x3CB1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB1C8u;
    // 0x3cb1cc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3CB1C8u, 0x3CB1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB1D0u;
label_3cb1d0:
    // 0x3cb1d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cb1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb1d4:
    // 0x3cb1d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x3cb1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_3cb1d8:
    // 0x3cb1d8: 0xdc251aa0  ld          $a1, 0x1AA0($at)
    ctx->pc = 0x3cb1d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 6816)));
label_3cb1dc:
    // 0x3cb1dc: 0xc0f50e0  jal         func_3D4380
label_3cb1e0:
    if (ctx->pc == 0x3CB1E0u) {
        ctx->pc = 0x3CB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1DCu;
        // 0x3cb1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1E4u;
        goto label_3cb1e4;
    }
    ctx->pc = 0x3CB1DCu;
    SET_GPR_U32(ctx, 31, 0x3CB1E4u);
    ctx->pc = 0x3CB1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB1DCu;
    // 0x3cb1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3CB1DCu, 0x3CB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB1E4u;
label_3cb1e4:
    // 0x3cb1e4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_3cb1e8:
    if (ctx->pc == 0x3CB1E8u) {
        ctx->pc = 0x3CB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1E4u;
        // 0x3cb1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1ECu;
        goto label_3cb1ec;
    }
    ctx->pc = 0x3CB1E4u;
    {
        const bool branch_taken_0x3cb1e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1E4u;
        // 0x3cb1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1e4) {
            ctx->pc = 0x3CB1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb1c0;
        }
    }
    ctx->pc = 0x3CB1ECu;
label_3cb1ec:
    // 0x3cb1ec: 0x10000015  b           . + 4 + (0x15 << 2)
label_3cb1f0:
    if (ctx->pc == 0x3CB1F0u) {
        ctx->pc = 0x3CB1F4u;
        goto label_3cb1f4;
    }
    ctx->pc = 0x3CB1ECu;
    {
        const bool branch_taken_0x3cb1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb1ec) {
            ctx->pc = 0x3CB244u;
            goto label_3cb244;
        }
    }
    ctx->pc = 0x3CB1F4u;
label_3cb1f4:
    // 0x3cb1f4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3cb1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_3cb1f8:
    // 0x3cb1f8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3cb1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_3cb1fc:
    // 0x3cb1fc: 0xc0f50e0  jal         func_3D4380
label_3cb200:
    if (ctx->pc == 0x3CB200u) {
        ctx->pc = 0x3CB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1FCu;
        // 0x3cb200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB204u;
        goto label_3cb204;
    }
    ctx->pc = 0x3CB1FCu;
    SET_GPR_U32(ctx, 31, 0x3CB204u);
    ctx->pc = 0x3CB200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB1FCu;
    // 0x3cb200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3CB1FCu, 0x3CB204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB204u;
label_3cb204:
    // 0x3cb204: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_3cb208:
    if (ctx->pc == 0x3CB208u) {
        ctx->pc = 0x3CB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB204u;
        // 0x3cb208: 0x3c130048  lui         $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB20Cu;
        goto label_3cb20c;
    }
    ctx->pc = 0x3CB204u;
    {
        const bool branch_taken_0x3cb204 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB204u;
        // 0x3cb208: 0x3c130048  lui         $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb204) {
            ctx->pc = 0x3CB244u;
            goto label_3cb244;
        }
    }
    ctx->pc = 0x3CB20Cu;
label_3cb20c:
    // 0x3cb20c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3cb210:
    if (ctx->pc == 0x3CB210u) {
        ctx->pc = 0x3CB214u;
        goto label_3cb214;
    }
    ctx->pc = 0x3CB20Cu;
    {
        const bool branch_taken_0x3cb20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb20c) {
            ctx->pc = 0x3CB22Cu;
            goto label_3cb22c;
        }
    }
    ctx->pc = 0x3CB214u;
label_3cb214:
    // 0x3cb214: 0x0  nop
    ctx->pc = 0x3cb214u;
    // NOP
label_3cb218:
    // 0x3cb218: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x3cb218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_3cb21c:
    // 0x3cb21c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3cb21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_3cb220:
    // 0x3cb220: 0xc0f5040  jal         func_3D4100
label_3cb224:
    if (ctx->pc == 0x3CB224u) {
        ctx->pc = 0x3CB224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB220u;
        // 0x3cb224: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB228u;
        goto label_3cb228;
    }
    ctx->pc = 0x3CB220u;
    SET_GPR_U32(ctx, 31, 0x3CB228u);
    ctx->pc = 0x3CB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB220u;
    // 0x3cb224: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4100u, 0x3CB220u, 0x3CB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB228u;
label_3cb228:
    // 0x3cb228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cb228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb22c:
    // 0x3cb22c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3cb22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_3cb230:
    // 0x3cb230: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3cb230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_3cb234:
    // 0x3cb234: 0xc0f50e0  jal         func_3D4380
label_3cb238:
    if (ctx->pc == 0x3CB238u) {
        ctx->pc = 0x3CB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB234u;
        // 0x3cb238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB23Cu;
        goto label_3cb23c;
    }
    ctx->pc = 0x3CB234u;
    SET_GPR_U32(ctx, 31, 0x3CB23Cu);
    ctx->pc = 0x3CB238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB234u;
    // 0x3cb238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3CB234u, 0x3CB23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB23Cu;
label_3cb23c:
    // 0x3cb23c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_3cb240:
    if (ctx->pc == 0x3CB240u) {
        ctx->pc = 0x3CB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB23Cu;
        // 0x3cb240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB244u;
        goto label_3cb244;
    }
    ctx->pc = 0x3CB23Cu;
    {
        const bool branch_taken_0x3cb23c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB23Cu;
        // 0x3cb240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb23c) {
            ctx->pc = 0x3CB218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb218;
        }
    }
    ctx->pc = 0x3CB244u;
label_3cb244:
    // 0x3cb244: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x3cb244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_3cb248:
    // 0x3cb248: 0xdc251aa8  ld          $a1, 0x1AA8($at)
    ctx->pc = 0x3cb248u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 6824)));
label_3cb24c:
    // 0x3cb24c: 0xc0f4f96  jal         func_3D3E58
label_3cb250:
    if (ctx->pc == 0x3CB250u) {
        ctx->pc = 0x3CB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB24Cu;
        // 0x3cb250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB254u;
        goto label_3cb254;
    }
    ctx->pc = 0x3CB24Cu;
    SET_GPR_U32(ctx, 31, 0x3CB254u);
    ctx->pc = 0x3CB250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB24Cu;
    // 0x3cb250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3CB24Cu, 0x3CB254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB254u;
label_3cb254:
    // 0x3cb254: 0xc0f4912  jal         func_3D2448
label_3cb258:
    if (ctx->pc == 0x3CB258u) {
        ctx->pc = 0x3CB258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB254u;
        // 0x3cb258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB25Cu;
        goto label_3cb25c;
    }
    ctx->pc = 0x3CB254u;
    SET_GPR_U32(ctx, 31, 0x3CB25Cu);
    ctx->pc = 0x3CB258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB254u;
    // 0x3cb258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2448u, 0x3CB254u, 0x3CB25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB25Cu;
label_3cb25c:
    // 0x3cb25c: 0xc0f2c20  jal         func_3CB080
label_3cb260:
    if (ctx->pc == 0x3CB260u) {
        ctx->pc = 0x3CB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB25Cu;
        // 0x3cb260: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB264u;
        goto label_3cb264;
    }
    ctx->pc = 0x3CB25Cu;
    SET_GPR_U32(ctx, 31, 0x3CB264u);
    ctx->pc = 0x3CB260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB25Cu;
    // 0x3cb260: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CB080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CB080u, 0x3CB25Cu, 0x3CB264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB264u;
label_3cb264:
    // 0x3cb264: 0x26671a80  addiu       $a3, $s3, 0x1A80
    ctx->pc = 0x3cb264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 6784));
label_3cb268:
    // 0x3cb268: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3cb268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb26c:
    // 0x3cb26c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3cb26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cb270:
    // 0x3cb270: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cb270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cb274:
    // 0x3cb274: 0xc0f302a  jal         func_3CC0A8
label_3cb278:
    if (ctx->pc == 0x3CB278u) {
        ctx->pc = 0x3CB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB274u;
        // 0x3cb278: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB27Cu;
        goto label_3cb27c;
    }
    ctx->pc = 0x3CB274u;
    SET_GPR_U32(ctx, 31, 0x3CB27Cu);
    ctx->pc = 0x3CB278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB274u;
    // 0x3cb278: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC0A8u, 0x3CB274u, 0x3CB27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB27Cu;
label_3cb27c:
    // 0x3cb27c: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_3cb280:
    if (ctx->pc == 0x3CB280u) {
        ctx->pc = 0x3CB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB27Cu;
        // 0x3cb280: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB284u;
        goto label_3cb284;
    }
    ctx->pc = 0x3CB27Cu;
    {
        const bool branch_taken_0x3cb27c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3CB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB27Cu;
        // 0x3cb280: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb27c) {
            ctx->pc = 0x3CB29Cu;
            goto label_3cb29c;
        }
    }
    ctx->pc = 0x3CB284u;
label_3cb284:
    // 0x3cb284: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x3cb284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
label_3cb288:
    // 0x3cb288: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3cb288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cb28c:
    // 0x3cb28c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cb28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cb290:
    // 0x3cb290: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb294:
    // 0x3cb294: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cb298:
    if (ctx->pc == 0x3CB298u) {
        ctx->pc = 0x3CB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB294u;
        // 0x3cb298: 0x24e71a88  addiu       $a3, $a3, 0x1A88 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB29Cu;
        goto label_3cb29c;
    }
    ctx->pc = 0x3CB294u;
    {
        const bool branch_taken_0x3cb294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB294u;
        // 0x3cb298: 0x24e71a88  addiu       $a3, $a3, 0x1A88 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb294) {
            ctx->pc = 0x3CB2B0u;
            goto label_3cb2b0;
        }
    }
    ctx->pc = 0x3CB29Cu;
label_3cb29c:
    // 0x3cb29c: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x3cb29cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
label_3cb2a0:
    // 0x3cb2a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3cb2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cb2a4:
    // 0x3cb2a4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cb2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cb2a8:
    // 0x3cb2a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb2ac:
    // 0x3cb2ac: 0x24e71a90  addiu       $a3, $a3, 0x1A90
    ctx->pc = 0x3cb2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6800));
label_3cb2b0:
    // 0x3cb2b0: 0xc0f302a  jal         func_3CC0A8
label_3cb2b4:
    if (ctx->pc == 0x3CB2B4u) {
        ctx->pc = 0x3CB2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2B0u;
        // 0x3cb2b4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB2B8u;
        goto label_3cb2b8;
    }
    ctx->pc = 0x3CB2B0u;
    SET_GPR_U32(ctx, 31, 0x3CB2B8u);
    ctx->pc = 0x3CB2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB2B0u;
    // 0x3cb2b4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC0A8u, 0x3CB2B0u, 0x3CB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB2B8u;
label_3cb2b8:
    // 0x3cb2b8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x3cb2b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3cb2bc:
    // 0x3cb2bc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3cb2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb2c0:
    // 0x3cb2c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3cb2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb2c4:
    // 0x3cb2c4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3cb2c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb2c8:
    // 0x3cb2c8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3cb2c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3cb2cc:
    // 0x3cb2cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3cb2ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3cb2d0:
    // 0x3cb2d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3cb2d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cb2d4:
    // 0x3cb2d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3cb2d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3cb2d8:
    // 0x3cb2d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3cb2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3cb2dc:
    // 0x3cb2dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cb2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3cb2e0:
    // 0x3cb2e0: 0x3e00008  jr          $ra
label_3cb2e4:
    if (ctx->pc == 0x3CB2E4u) {
        ctx->pc = 0x3CB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2E0u;
        // 0x3cb2e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB2E8u;
        goto label_fallthrough_0x3cb2e0;
    }
    ctx->pc = 0x3CB2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2E0u;
        // 0x3cb2e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cb2e0:
    ctx->pc = 0x3CB2E8u;
}
