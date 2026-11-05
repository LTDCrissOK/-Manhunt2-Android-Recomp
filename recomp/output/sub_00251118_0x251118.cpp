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

// Function: sub_00251118
// Address: 0x251118 - 0x251268
void sub_00251118_0x251118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251118_0x251118");
#endif

    switch (ctx->pc) {
        case 0x251118u: goto label_251118;
        case 0x25111cu: goto label_25111c;
        case 0x251120u: goto label_251120;
        case 0x251124u: goto label_251124;
        case 0x251128u: goto label_251128;
        case 0x25112cu: goto label_25112c;
        case 0x251130u: goto label_251130;
        case 0x251134u: goto label_251134;
        case 0x251138u: goto label_251138;
        case 0x25113cu: goto label_25113c;
        case 0x251140u: goto label_251140;
        case 0x251144u: goto label_251144;
        case 0x251148u: goto label_251148;
        case 0x25114cu: goto label_25114c;
        case 0x251150u: goto label_251150;
        case 0x251154u: goto label_251154;
        case 0x251158u: goto label_251158;
        case 0x25115cu: goto label_25115c;
        case 0x251160u: goto label_251160;
        case 0x251164u: goto label_251164;
        case 0x251168u: goto label_251168;
        case 0x25116cu: goto label_25116c;
        case 0x251170u: goto label_251170;
        case 0x251174u: goto label_251174;
        case 0x251178u: goto label_251178;
        case 0x25117cu: goto label_25117c;
        case 0x251180u: goto label_251180;
        case 0x251184u: goto label_251184;
        case 0x251188u: goto label_251188;
        case 0x25118cu: goto label_25118c;
        case 0x251190u: goto label_251190;
        case 0x251194u: goto label_251194;
        case 0x251198u: goto label_251198;
        case 0x25119cu: goto label_25119c;
        case 0x2511a0u: goto label_2511a0;
        case 0x2511a4u: goto label_2511a4;
        case 0x2511a8u: goto label_2511a8;
        case 0x2511acu: goto label_2511ac;
        case 0x2511b0u: goto label_2511b0;
        case 0x2511b4u: goto label_2511b4;
        case 0x2511b8u: goto label_2511b8;
        case 0x2511bcu: goto label_2511bc;
        case 0x2511c0u: goto label_2511c0;
        case 0x2511c4u: goto label_2511c4;
        case 0x2511c8u: goto label_2511c8;
        case 0x2511ccu: goto label_2511cc;
        case 0x2511d0u: goto label_2511d0;
        case 0x2511d4u: goto label_2511d4;
        case 0x2511d8u: goto label_2511d8;
        case 0x2511dcu: goto label_2511dc;
        case 0x2511e0u: goto label_2511e0;
        case 0x2511e4u: goto label_2511e4;
        case 0x2511e8u: goto label_2511e8;
        case 0x2511ecu: goto label_2511ec;
        case 0x2511f0u: goto label_2511f0;
        case 0x2511f4u: goto label_2511f4;
        case 0x2511f8u: goto label_2511f8;
        case 0x2511fcu: goto label_2511fc;
        case 0x251200u: goto label_251200;
        case 0x251204u: goto label_251204;
        case 0x251208u: goto label_251208;
        case 0x25120cu: goto label_25120c;
        case 0x251210u: goto label_251210;
        case 0x251214u: goto label_251214;
        case 0x251218u: goto label_251218;
        case 0x25121cu: goto label_25121c;
        case 0x251220u: goto label_251220;
        case 0x251224u: goto label_251224;
        case 0x251228u: goto label_251228;
        case 0x25122cu: goto label_25122c;
        case 0x251230u: goto label_251230;
        case 0x251234u: goto label_251234;
        case 0x251238u: goto label_251238;
        case 0x25123cu: goto label_25123c;
        case 0x251240u: goto label_251240;
        case 0x251244u: goto label_251244;
        case 0x251248u: goto label_251248;
        case 0x25124cu: goto label_25124c;
        case 0x251250u: goto label_251250;
        case 0x251254u: goto label_251254;
        case 0x251258u: goto label_251258;
        case 0x25125cu: goto label_25125c;
        case 0x251260u: goto label_251260;
        case 0x251264u: goto label_251264;
        default: break;
    }

    ctx->pc = 0x251118u;

label_251118:
    // 0x251118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25111c:
    // 0x25111c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x25111cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_251120:
    // 0x251120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_251124:
    // 0x251124: 0x24421c80  addiu       $v0, $v0, 0x1C80
    ctx->pc = 0x251124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7296));
label_251128:
    // 0x251128: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x251128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_25112c:
    // 0x25112c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25112cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_251130:
    // 0x251130: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x251130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_251134:
    // 0x251134: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x251134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_251138:
    // 0x251138: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x251138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25113c:
    // 0x25113c: 0xc0944a2  jal         func_251288
label_251140:
    if (ctx->pc == 0x251140u) {
        ctx->pc = 0x251140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25113Cu;
        // 0x251140: 0xae020218  sw          $v0, 0x218($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251144u;
        goto label_251144;
    }
    ctx->pc = 0x25113Cu;
    SET_GPR_U32(ctx, 31, 0x251144u);
    ctx->pc = 0x251140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25113Cu;
    // 0x251140: 0xae020218  sw          $v0, 0x218($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251288u, 0x25113Cu, 0x251144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251144u;
label_251144:
    // 0x251144: 0x8e040ffc  lw          $a0, 0xFFC($s0)
    ctx->pc = 0x251144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
label_251148:
    // 0x251148: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_25114c:
    if (ctx->pc == 0x25114Cu) {
        ctx->pc = 0x25114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251148u;
        // 0x25114c: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251150u;
        goto label_251150;
    }
    ctx->pc = 0x251148u;
    {
        const bool branch_taken_0x251148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x251148) {
            ctx->pc = 0x25114Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251148u;
            // 0x25114c: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251168u;
            goto label_251168;
        }
    }
    ctx->pc = 0x251150u;
label_251150:
    // 0x251150: 0x8c830350  lw          $v1, 0x350($a0)
    ctx->pc = 0x251150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 848)));
label_251154:
    // 0x251154: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x251154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_251158:
    // 0x251158: 0x40f809  jalr        $v0
label_25115c:
    if (ctx->pc == 0x25115Cu) {
        ctx->pc = 0x25115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251158u;
        // 0x25115c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251160u;
        goto label_251160;
    }
    ctx->pc = 0x251158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251160u);
        ctx->pc = 0x25115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251158u;
        // 0x25115c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251158u, 0x251160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251160u;
label_251160:
    // 0x251160: 0xae000ffc  sw          $zero, 0xFFC($s0)
    ctx->pc = 0x251160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4092), GPR_U32(ctx, 0));
label_251164:
    // 0x251164: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x251164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
label_251168:
    // 0x251168: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_25116c:
    if (ctx->pc == 0x25116Cu) {
        ctx->pc = 0x25116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251168u;
        // 0x25116c: 0x8e040fe8  lw          $a0, 0xFE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251170u;
        goto label_251170;
    }
    ctx->pc = 0x251168u;
    {
        const bool branch_taken_0x251168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x251168) {
            ctx->pc = 0x25116Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251168u;
            // 0x25116c: 0x8e040fe8  lw          $a0, 0xFE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251188u;
            goto label_251188;
        }
    }
    ctx->pc = 0x251170u;
label_251170:
    // 0x251170: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x251170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_251174:
    // 0x251174: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x251174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_251178:
    // 0x251178: 0x40f809  jalr        $v0
label_25117c:
    if (ctx->pc == 0x25117Cu) {
        ctx->pc = 0x25117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251178u;
        // 0x25117c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251180u;
        goto label_251180;
    }
    ctx->pc = 0x251178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251180u);
        ctx->pc = 0x25117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251178u;
        // 0x25117c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251178u, 0x251180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251180u;
label_251180:
    // 0x251180: 0xae000fe4  sw          $zero, 0xFE4($s0)
    ctx->pc = 0x251180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4068), GPR_U32(ctx, 0));
label_251184:
    // 0x251184: 0x8e040fe8  lw          $a0, 0xFE8($s0)
    ctx->pc = 0x251184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
label_251188:
    // 0x251188: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_25118c:
    if (ctx->pc == 0x25118Cu) {
        ctx->pc = 0x25118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251188u;
        // 0x25118c: 0x8e040fec  lw          $a0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251190u;
        goto label_251190;
    }
    ctx->pc = 0x251188u;
    {
        const bool branch_taken_0x251188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x251188) {
            ctx->pc = 0x25118Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251188u;
            // 0x25118c: 0x8e040fec  lw          $a0, 0xFEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2511A8u;
            goto label_2511a8;
        }
    }
    ctx->pc = 0x251190u;
label_251190:
    // 0x251190: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x251190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
label_251194:
    // 0x251194: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x251194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_251198:
    // 0x251198: 0x40f809  jalr        $v0
label_25119c:
    if (ctx->pc == 0x25119Cu) {
        ctx->pc = 0x25119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251198u;
        // 0x25119c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2511A0u;
        goto label_2511a0;
    }
    ctx->pc = 0x251198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2511A0u);
        ctx->pc = 0x25119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251198u;
        // 0x25119c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251198u, 0x2511A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2511A0u;
label_2511a0:
    // 0x2511a0: 0xae000fe8  sw          $zero, 0xFE8($s0)
    ctx->pc = 0x2511a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4072), GPR_U32(ctx, 0));
label_2511a4:
    // 0x2511a4: 0x8e040fec  lw          $a0, 0xFEC($s0)
    ctx->pc = 0x2511a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_2511a8:
    // 0x2511a8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2511ac:
    if (ctx->pc == 0x2511ACu) {
        ctx->pc = 0x2511ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511A8u;
        // 0x2511ac: 0x8e040ff8  lw          $a0, 0xFF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2511B0u;
        goto label_2511b0;
    }
    ctx->pc = 0x2511A8u;
    {
        const bool branch_taken_0x2511a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2511a8) {
            ctx->pc = 0x2511ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2511A8u;
            // 0x2511ac: 0x8e040ff8  lw          $a0, 0xFF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2511C8u;
            goto label_2511c8;
        }
    }
    ctx->pc = 0x2511B0u;
label_2511b0:
    // 0x2511b0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x2511b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_2511b4:
    // 0x2511b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2511b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2511b8:
    // 0x2511b8: 0x40f809  jalr        $v0
label_2511bc:
    if (ctx->pc == 0x2511BCu) {
        ctx->pc = 0x2511BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511B8u;
        // 0x2511bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2511C0u;
        goto label_2511c0;
    }
    ctx->pc = 0x2511B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2511C0u);
        ctx->pc = 0x2511BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511B8u;
        // 0x2511bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2511B8u, 0x2511C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2511C0u;
label_2511c0:
    // 0x2511c0: 0xae000fec  sw          $zero, 0xFEC($s0)
    ctx->pc = 0x2511c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4076), GPR_U32(ctx, 0));
label_2511c4:
    // 0x2511c4: 0x8e040ff8  lw          $a0, 0xFF8($s0)
    ctx->pc = 0x2511c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
label_2511c8:
    // 0x2511c8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2511cc:
    if (ctx->pc == 0x2511CCu) {
        ctx->pc = 0x2511CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511C8u;
        // 0x2511cc: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2511D0u;
        goto label_2511d0;
    }
    ctx->pc = 0x2511C8u;
    {
        const bool branch_taken_0x2511c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2511c8) {
            ctx->pc = 0x2511CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2511C8u;
            // 0x2511cc: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2511E0u;
            goto label_2511e0;
        }
    }
    ctx->pc = 0x2511D0u;
label_2511d0:
    // 0x2511d0: 0xc072d18  jal         func_1CB460
label_2511d4:
    if (ctx->pc == 0x2511D4u) {
        ctx->pc = 0x2511D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511D0u;
        // 0x2511d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2511D8u;
        goto label_2511d8;
    }
    ctx->pc = 0x2511D0u;
    SET_GPR_U32(ctx, 31, 0x2511D8u);
    ctx->pc = 0x2511D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2511D0u;
    // 0x2511d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB460u, 0x2511D0u, 0x2511D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511D8u;
label_2511d8:
    // 0x2511d8: 0xae000ff8  sw          $zero, 0xFF8($s0)
    ctx->pc = 0x2511d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4088), GPR_U32(ctx, 0));
label_2511dc:
    // 0x2511dc: 0x8e040ff4  lw          $a0, 0xFF4($s0)
    ctx->pc = 0x2511dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
label_2511e0:
    // 0x2511e0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2511e4:
    if (ctx->pc == 0x2511E4u) {
        ctx->pc = 0x2511E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511E0u;
        // 0x2511e4: 0x8e030ff0  lw          $v1, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2511E8u;
        goto label_2511e8;
    }
    ctx->pc = 0x2511E0u;
    {
        const bool branch_taken_0x2511e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2511e0) {
            ctx->pc = 0x2511E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2511E0u;
            // 0x2511e4: 0x8e030ff0  lw          $v1, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2511F8u;
            goto label_2511f8;
        }
    }
    ctx->pc = 0x2511E8u;
label_2511e8:
    // 0x2511e8: 0xc0f5222  jal         func_3D4888
label_2511ec:
    if (ctx->pc == 0x2511ECu) {
        ctx->pc = 0x2511F0u;
        goto label_2511f0;
    }
    ctx->pc = 0x2511E8u;
    SET_GPR_U32(ctx, 31, 0x2511F0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2511E8u, 0x2511F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511F0u;
label_2511f0:
    // 0x2511f0: 0xae000ff4  sw          $zero, 0xFF4($s0)
    ctx->pc = 0x2511f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4084), GPR_U32(ctx, 0));
label_2511f4:
    // 0x2511f4: 0x8e030ff0  lw          $v1, 0xFF0($s0)
    ctx->pc = 0x2511f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_2511f8:
    // 0x2511f8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2511fc:
    if (ctx->pc == 0x2511FCu) {
        ctx->pc = 0x2511FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511F8u;
        // 0x2511fc: 0x3c110043  lui         $s1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251200u;
        goto label_251200;
    }
    ctx->pc = 0x2511F8u;
    {
        const bool branch_taken_0x2511f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2511FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511F8u;
        // 0x2511fc: 0x3c110043  lui         $s1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511f8) {
            ctx->pc = 0x25121Cu;
            goto label_25121c;
        }
    }
    ctx->pc = 0x251200u;
label_251200:
    // 0x251200: 0x26220f90  addiu       $v0, $s1, 0xF90
    ctx->pc = 0x251200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3984));
label_251204:
    // 0x251204: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x251204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_251208:
    // 0x251208: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x251208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_25120c:
    // 0x25120c: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x25120cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_251210:
    // 0x251210: 0xc0f5222  jal         func_3D4888
label_251214:
    if (ctx->pc == 0x251214u) {
        ctx->pc = 0x251214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251210u;
        // 0x251214: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251218u;
        goto label_251218;
    }
    ctx->pc = 0x251210u;
    SET_GPR_U32(ctx, 31, 0x251218u);
    ctx->pc = 0x251214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251210u;
    // 0x251214: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x251210u, 0x251218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251218u;
label_251218:
    // 0x251218: 0xae000ff0  sw          $zero, 0xFF0($s0)
    ctx->pc = 0x251218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4080), GPR_U32(ctx, 0));
label_25121c:
    // 0x25121c: 0x8e041000  lw          $a0, 0x1000($s0)
    ctx->pc = 0x25121cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4096)));
label_251220:
    // 0x251220: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_251224:
    if (ctx->pc == 0x251224u) {
        ctx->pc = 0x251224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251220u;
        // 0x251224: 0x26220f90  addiu       $v0, $s1, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251228u;
        goto label_251228;
    }
    ctx->pc = 0x251220u;
    {
        const bool branch_taken_0x251220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x251224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251220u;
        // 0x251224: 0x26220f90  addiu       $v0, $s1, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251220) {
            ctx->pc = 0x251240u;
            goto label_251240;
        }
    }
    ctx->pc = 0x251228u;
label_251228:
    // 0x251228: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x251228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_25122c:
    // 0x25122c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_251230:
    // 0x251230: 0x40f809  jalr        $v0
label_251234:
    if (ctx->pc == 0x251234u) {
        ctx->pc = 0x251234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251230u;
        // 0x251234: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251238u;
        goto label_251238;
    }
    ctx->pc = 0x251230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251238u);
        ctx->pc = 0x251234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251230u;
        // 0x251234: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251230u, 0x251238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251238u;
label_251238:
    // 0x251238: 0xae001000  sw          $zero, 0x1000($s0)
    ctx->pc = 0x251238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4096), GPR_U32(ctx, 0));
label_25123c:
    // 0x25123c: 0x26220f90  addiu       $v0, $s1, 0xF90
    ctx->pc = 0x25123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3984));
label_251240:
    // 0x251240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_251244:
    // 0x251244: 0xae021058  sw          $v0, 0x1058($s0)
    ctx->pc = 0x251244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4184), GPR_U32(ctx, 2));
label_251248:
    // 0x251248: 0xc089dc0  jal         func_227700
label_25124c:
    if (ctx->pc == 0x25124Cu) {
        ctx->pc = 0x25124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251248u;
        // 0x25124c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251250u;
        goto label_251250;
    }
    ctx->pc = 0x251248u;
    SET_GPR_U32(ctx, 31, 0x251250u);
    ctx->pc = 0x25124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251248u;
    // 0x25124c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227700u, 0x251248u, 0x251250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251250u;
label_251250:
    // 0x251250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251254:
    // 0x251254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_251258:
    // 0x251258: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x251258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25125c:
    // 0x25125c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x25125cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_251260:
    // 0x251260: 0x3e00008  jr          $ra
label_251264:
    if (ctx->pc == 0x251264u) {
        ctx->pc = 0x251264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251260u;
        // 0x251264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251268u;
        goto label_fallthrough_0x251260;
    }
    ctx->pc = 0x251260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251260u;
        // 0x251264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x251260:
    ctx->pc = 0x251268u;
}
