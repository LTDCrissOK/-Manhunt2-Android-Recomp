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

// Function: sub_00241118
// Address: 0x241118 - 0x2412c0
void sub_00241118_0x241118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241118_0x241118");
#endif

    switch (ctx->pc) {
        case 0x241118u: goto label_241118;
        case 0x24111cu: goto label_24111c;
        case 0x241120u: goto label_241120;
        case 0x241124u: goto label_241124;
        case 0x241128u: goto label_241128;
        case 0x24112cu: goto label_24112c;
        case 0x241130u: goto label_241130;
        case 0x241134u: goto label_241134;
        case 0x241138u: goto label_241138;
        case 0x24113cu: goto label_24113c;
        case 0x241140u: goto label_241140;
        case 0x241144u: goto label_241144;
        case 0x241148u: goto label_241148;
        case 0x24114cu: goto label_24114c;
        case 0x241150u: goto label_241150;
        case 0x241154u: goto label_241154;
        case 0x241158u: goto label_241158;
        case 0x24115cu: goto label_24115c;
        case 0x241160u: goto label_241160;
        case 0x241164u: goto label_241164;
        case 0x241168u: goto label_241168;
        case 0x24116cu: goto label_24116c;
        case 0x241170u: goto label_241170;
        case 0x241174u: goto label_241174;
        case 0x241178u: goto label_241178;
        case 0x24117cu: goto label_24117c;
        case 0x241180u: goto label_241180;
        case 0x241184u: goto label_241184;
        case 0x241188u: goto label_241188;
        case 0x24118cu: goto label_24118c;
        case 0x241190u: goto label_241190;
        case 0x241194u: goto label_241194;
        case 0x241198u: goto label_241198;
        case 0x24119cu: goto label_24119c;
        case 0x2411a0u: goto label_2411a0;
        case 0x2411a4u: goto label_2411a4;
        case 0x2411a8u: goto label_2411a8;
        case 0x2411acu: goto label_2411ac;
        case 0x2411b0u: goto label_2411b0;
        case 0x2411b4u: goto label_2411b4;
        case 0x2411b8u: goto label_2411b8;
        case 0x2411bcu: goto label_2411bc;
        case 0x2411c0u: goto label_2411c0;
        case 0x2411c4u: goto label_2411c4;
        case 0x2411c8u: goto label_2411c8;
        case 0x2411ccu: goto label_2411cc;
        case 0x2411d0u: goto label_2411d0;
        case 0x2411d4u: goto label_2411d4;
        case 0x2411d8u: goto label_2411d8;
        case 0x2411dcu: goto label_2411dc;
        case 0x2411e0u: goto label_2411e0;
        case 0x2411e4u: goto label_2411e4;
        case 0x2411e8u: goto label_2411e8;
        case 0x2411ecu: goto label_2411ec;
        case 0x2411f0u: goto label_2411f0;
        case 0x2411f4u: goto label_2411f4;
        case 0x2411f8u: goto label_2411f8;
        case 0x2411fcu: goto label_2411fc;
        case 0x241200u: goto label_241200;
        case 0x241204u: goto label_241204;
        case 0x241208u: goto label_241208;
        case 0x24120cu: goto label_24120c;
        case 0x241210u: goto label_241210;
        case 0x241214u: goto label_241214;
        case 0x241218u: goto label_241218;
        case 0x24121cu: goto label_24121c;
        case 0x241220u: goto label_241220;
        case 0x241224u: goto label_241224;
        case 0x241228u: goto label_241228;
        case 0x24122cu: goto label_24122c;
        case 0x241230u: goto label_241230;
        case 0x241234u: goto label_241234;
        case 0x241238u: goto label_241238;
        case 0x24123cu: goto label_24123c;
        case 0x241240u: goto label_241240;
        case 0x241244u: goto label_241244;
        case 0x241248u: goto label_241248;
        case 0x24124cu: goto label_24124c;
        case 0x241250u: goto label_241250;
        case 0x241254u: goto label_241254;
        case 0x241258u: goto label_241258;
        case 0x24125cu: goto label_24125c;
        case 0x241260u: goto label_241260;
        case 0x241264u: goto label_241264;
        case 0x241268u: goto label_241268;
        case 0x24126cu: goto label_24126c;
        case 0x241270u: goto label_241270;
        case 0x241274u: goto label_241274;
        case 0x241278u: goto label_241278;
        case 0x24127cu: goto label_24127c;
        case 0x241280u: goto label_241280;
        case 0x241284u: goto label_241284;
        case 0x241288u: goto label_241288;
        case 0x24128cu: goto label_24128c;
        case 0x241290u: goto label_241290;
        case 0x241294u: goto label_241294;
        case 0x241298u: goto label_241298;
        case 0x24129cu: goto label_24129c;
        case 0x2412a0u: goto label_2412a0;
        case 0x2412a4u: goto label_2412a4;
        case 0x2412a8u: goto label_2412a8;
        case 0x2412acu: goto label_2412ac;
        case 0x2412b0u: goto label_2412b0;
        case 0x2412b4u: goto label_2412b4;
        case 0x2412b8u: goto label_2412b8;
        case 0x2412bcu: goto label_2412bc;
        default: break;
    }

    ctx->pc = 0x241118u;

label_241118:
    // 0x241118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24111c:
    // 0x24111c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24111cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_241120:
    // 0x241120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_241124:
    // 0x241124: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_241128:
    // 0x241128: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x241128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_24112c:
    // 0x24112c: 0xc0899bc  jal         func_2266F0
label_241130:
    if (ctx->pc == 0x241130u) {
        ctx->pc = 0x241130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24112Cu;
        // 0x241130: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241134u;
        goto label_241134;
    }
    ctx->pc = 0x24112Cu;
    SET_GPR_U32(ctx, 31, 0x241134u);
    ctx->pc = 0x241130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24112Cu;
    // 0x241130: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x24112Cu, 0x241134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241134u;
label_241134:
    // 0x241134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x241134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241138:
    // 0x241138: 0x50800046  beql        $a0, $zero, . + 4 + (0x46 << 2)
label_24113c:
    if (ctx->pc == 0x24113Cu) {
        ctx->pc = 0x24113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241138u;
        // 0x24113c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241140u;
        goto label_241140;
    }
    ctx->pc = 0x241138u;
    {
        const bool branch_taken_0x241138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241138) {
            ctx->pc = 0x24113Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241138u;
            // 0x24113c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241254u;
            goto label_241254;
        }
    }
    ctx->pc = 0x241140u;
label_241140:
    // 0x241140: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_241144:
    // 0x241144: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x241144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_241148:
    // 0x241148: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_24114c:
    if (ctx->pc == 0x24114Cu) {
        ctx->pc = 0x24114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241148u;
        // 0x24114c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241150u;
        goto label_241150;
    }
    ctx->pc = 0x241148u;
    {
        const bool branch_taken_0x241148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241148) {
            ctx->pc = 0x24114Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241148u;
            // 0x24114c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241254u;
            goto label_241254;
        }
    }
    ctx->pc = 0x241150u;
label_241150:
    // 0x241150: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x241150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
label_241154:
    // 0x241154: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x241154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241158:
    // 0x241158: 0xc0d8de2  jal         func_363788
label_24115c:
    if (ctx->pc == 0x24115Cu) {
        ctx->pc = 0x24115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241158u;
        // 0x24115c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241160u;
        goto label_241160;
    }
    ctx->pc = 0x241158u;
    SET_GPR_U32(ctx, 31, 0x241160u);
    ctx->pc = 0x24115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241158u;
    // 0x24115c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x241158u, 0x241160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241160u;
label_241160:
    // 0x241160: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_241164:
    if (ctx->pc == 0x241164u) {
        ctx->pc = 0x241164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241160u;
        // 0x241164: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241168u;
        goto label_241168;
    }
    ctx->pc = 0x241160u;
    {
        const bool branch_taken_0x241160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241160) {
            ctx->pc = 0x241164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241160u;
            // 0x241164: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24117Cu;
            goto label_24117c;
        }
    }
    ctx->pc = 0x241168u;
label_241168:
    // 0x241168: 0xc0d8de2  jal         func_363788
label_24116c:
    if (ctx->pc == 0x24116Cu) {
        ctx->pc = 0x24116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241168u;
        // 0x24116c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241170u;
        goto label_241170;
    }
    ctx->pc = 0x241168u;
    SET_GPR_U32(ctx, 31, 0x241170u);
    ctx->pc = 0x24116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241168u;
    // 0x24116c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x241168u, 0x241170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241170u;
label_241170:
    // 0x241170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241174:
    // 0x241174: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_241178:
    if (ctx->pc == 0x241178u) {
        ctx->pc = 0x241178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241174u;
        // 0x241178: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24117Cu;
        goto label_24117c;
    }
    ctx->pc = 0x241174u;
    {
        const bool branch_taken_0x241174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x241174) {
            ctx->pc = 0x241178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241174u;
            // 0x241178: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24117Cu;
            goto label_24117c;
        }
    }
    ctx->pc = 0x24117Cu;
label_24117c:
    // 0x24117c: 0x52400035  beql        $s2, $zero, . + 4 + (0x35 << 2)
label_241180:
    if (ctx->pc == 0x241180u) {
        ctx->pc = 0x241180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24117Cu;
        // 0x241180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241184u;
        goto label_241184;
    }
    ctx->pc = 0x24117Cu;
    {
        const bool branch_taken_0x24117c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24117c) {
            ctx->pc = 0x241180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24117Cu;
            // 0x241180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241254u;
            goto label_241254;
        }
    }
    ctx->pc = 0x241184u;
label_241184:
    // 0x241184: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x241184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_241188:
    // 0x241188: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x241188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_24118c:
    // 0x24118c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_241190:
    if (ctx->pc == 0x241190u) {
        ctx->pc = 0x241190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24118Cu;
        // 0x241190: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241194u;
        goto label_241194;
    }
    ctx->pc = 0x24118Cu;
    {
        const bool branch_taken_0x24118c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24118c) {
            ctx->pc = 0x241190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24118Cu;
            // 0x241190: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24119Cu;
            goto label_24119c;
        }
    }
    ctx->pc = 0x241194u;
label_241194:
    // 0x241194: 0x1000000a  b           . + 4 + (0xA << 2)
label_241198:
    if (ctx->pc == 0x241198u) {
        ctx->pc = 0x241198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241194u;
        // 0x241198: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24119Cu;
        goto label_24119c;
    }
    ctx->pc = 0x241194u;
    {
        const bool branch_taken_0x241194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241194u;
        // 0x241198: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241194) {
            ctx->pc = 0x2411C0u;
            goto label_2411c0;
        }
    }
    ctx->pc = 0x24119Cu;
label_24119c:
    // 0x24119c: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x24119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_2411a0:
    // 0x2411a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2411a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2411a4:
    // 0x2411a4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2411a8:
    if (ctx->pc == 0x2411A8u) {
        ctx->pc = 0x2411A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411A4u;
        // 0x2411a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411ACu;
        goto label_2411ac;
    }
    ctx->pc = 0x2411A4u;
    {
        const bool branch_taken_0x2411a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2411a4) {
            ctx->pc = 0x2411A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2411A4u;
            // 0x2411a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2411C0u;
            goto label_2411c0;
        }
    }
    ctx->pc = 0x2411ACu;
label_2411ac:
    // 0x2411ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2411acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2411b0:
    // 0x2411b0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2411b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_2411b4:
    // 0x2411b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2411b8:
    if (ctx->pc == 0x2411B8u) {
        ctx->pc = 0x2411B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411B4u;
        // 0x2411b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411BCu;
        goto label_2411bc;
    }
    ctx->pc = 0x2411B4u;
    {
        const bool branch_taken_0x2411b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2411B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411B4u;
        // 0x2411b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411b4) {
            ctx->pc = 0x2411A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2411a0;
        }
    }
    ctx->pc = 0x2411BCu;
label_2411bc:
    // 0x2411bc: 0x8ca301e8  lw          $v1, 0x1E8($a1)
    ctx->pc = 0x2411bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_2411c0:
    // 0x2411c0: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x2411c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_2411c4:
    // 0x2411c4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2411c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_2411c8:
    // 0x2411c8: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x2411c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
label_2411cc:
    // 0x2411cc: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x2411ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2411d0:
    // 0x2411d0: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2411d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_2411d4:
    // 0x2411d4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2411d8:
    if (ctx->pc == 0x2411D8u) {
        ctx->pc = 0x2411D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411D4u;
        // 0x2411d8: 0x9442002a  lhu         $v0, 0x2A($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411DCu;
        goto label_2411dc;
    }
    ctx->pc = 0x2411D4u;
    {
        const bool branch_taken_0x2411d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2411d4) {
            ctx->pc = 0x2411D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2411D4u;
            // 0x2411d8: 0x9442002a  lhu         $v0, 0x2A($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241208u;
            goto label_241208;
        }
    }
    ctx->pc = 0x2411DCu;
label_2411dc:
    // 0x2411dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2411dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2411e0:
    // 0x2411e0: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x2411e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_2411e4:
    // 0x2411e4: 0x0  nop
    ctx->pc = 0x2411e4u;
    // NOP
label_2411e8:
    // 0x2411e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2411e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2411ec:
    // 0x2411ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2411f0:
    if (ctx->pc == 0x2411F0u) {
        ctx->pc = 0x2411F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411ECu;
        // 0x2411f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2411F4u;
        goto label_2411f4;
    }
    ctx->pc = 0x2411ECu;
    {
        const bool branch_taken_0x2411ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2411F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411ECu;
        // 0x2411f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411ec) {
            ctx->pc = 0x241204u;
            goto label_241204;
        }
    }
    ctx->pc = 0x2411F4u;
label_2411f4:
    // 0x2411f4: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2411f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_2411f8:
    // 0x2411f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2411fc:
    if (ctx->pc == 0x2411FCu) {
        ctx->pc = 0x2411FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411F8u;
        // 0x2411fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241200u;
        goto label_241200;
    }
    ctx->pc = 0x2411F8u;
    {
        const bool branch_taken_0x2411f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2411FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411F8u;
        // 0x2411fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411f8) {
            ctx->pc = 0x2411E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2411e8;
        }
    }
    ctx->pc = 0x241200u;
label_241200:
    // 0x241200: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x241200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_241204:
    // 0x241204: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x241204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_241208:
    // 0x241208: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x241208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24120c:
    // 0x24120c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_241210:
    if (ctx->pc == 0x241210u) {
        ctx->pc = 0x241210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24120Cu;
        // 0x241210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241214u;
        goto label_241214;
    }
    ctx->pc = 0x24120Cu;
    {
        const bool branch_taken_0x24120c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24120Cu;
        // 0x241210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24120c) {
            ctx->pc = 0x241254u;
            goto label_241254;
        }
    }
    ctx->pc = 0x241214u;
label_241214:
    // 0x241214: 0x8e260334  lw          $a2, 0x334($s1)
    ctx->pc = 0x241214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_241218:
    // 0x241218: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x241218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_24121c:
    // 0x24121c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_241220:
    if (ctx->pc == 0x241220u) {
        ctx->pc = 0x241220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24121Cu;
        // 0x241220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241224u;
        goto label_241224;
    }
    ctx->pc = 0x24121Cu;
    {
        const bool branch_taken_0x24121c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24121Cu;
        // 0x241220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24121c) {
            ctx->pc = 0x241244u;
            goto label_241244;
        }
    }
    ctx->pc = 0x241224u;
label_241224:
    // 0x241224: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x241224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_241228:
    // 0x241228: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24122c:
    // 0x24122c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_241230:
    if (ctx->pc == 0x241230u) {
        ctx->pc = 0x241230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24122Cu;
        // 0x241230: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241234u;
        goto label_241234;
    }
    ctx->pc = 0x24122Cu;
    {
        const bool branch_taken_0x24122c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24122Cu;
        // 0x241230: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24122c) {
            ctx->pc = 0x241244u;
            goto label_241244;
        }
    }
    ctx->pc = 0x241234u;
label_241234:
    // 0x241234: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x241234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_241238:
    // 0x241238: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_24123c:
    if (ctx->pc == 0x24123Cu) {
        ctx->pc = 0x24123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241238u;
        // 0x24123c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241240u;
        goto label_241240;
    }
    ctx->pc = 0x241238u;
    {
        const bool branch_taken_0x241238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241238u;
        // 0x24123c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241238) {
            ctx->pc = 0x241228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241228;
        }
    }
    ctx->pc = 0x241240u;
label_241240:
    // 0x241240: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x241240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_241244:
    // 0x241244: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_241248:
    // 0x241248: 0xc073ef8  jal         func_1CFBE0
label_24124c:
    if (ctx->pc == 0x24124Cu) {
        ctx->pc = 0x241250u;
        goto label_241250;
    }
    ctx->pc = 0x241248u;
    SET_GPR_U32(ctx, 31, 0x241250u);
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x241248u, 0x241250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241250u;
label_241250:
    // 0x241250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241254:
    // 0x241254: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x241254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_241258:
    // 0x241258: 0xc08fed2  jal         func_23FB48
label_24125c:
    if (ctx->pc == 0x24125Cu) {
        ctx->pc = 0x24125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241258u;
        // 0x24125c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241260u;
        goto label_241260;
    }
    ctx->pc = 0x241258u;
    SET_GPR_U32(ctx, 31, 0x241260u);
    ctx->pc = 0x24125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241258u;
    // 0x24125c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x241258u, 0x241260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241260u;
label_241260:
    // 0x241260: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x241260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_241264:
    // 0x241264: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x241264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_241268:
    // 0x241268: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x241268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_24126c:
    // 0x24126c: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x24126cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
label_241270:
    // 0x241270: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x241270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_241274:
    // 0x241274: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x241274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_241278:
    // 0x241278: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_24127c:
    if (ctx->pc == 0x24127Cu) {
        ctx->pc = 0x24127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241278u;
        // 0x24127c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241280u;
        goto label_241280;
    }
    ctx->pc = 0x241278u;
    {
        const bool branch_taken_0x241278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241278u;
        // 0x24127c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241278) {
            ctx->pc = 0x241290u;
            goto label_241290;
        }
    }
    ctx->pc = 0x241280u;
label_241280:
    // 0x241280: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x241280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_241284:
    // 0x241284: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x241284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_241288:
    // 0x241288: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_24128c:
    if (ctx->pc == 0x24128Cu) {
        ctx->pc = 0x24128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241288u;
        // 0x24128c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241290u;
        goto label_241290;
    }
    ctx->pc = 0x241288u;
    {
        const bool branch_taken_0x241288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x241288) {
            ctx->pc = 0x24128Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241288u;
            // 0x24128c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24129Cu;
            goto label_24129c;
        }
    }
    ctx->pc = 0x241290u;
label_241290:
    // 0x241290: 0xc08e528  jal         func_2394A0
label_241294:
    if (ctx->pc == 0x241294u) {
        ctx->pc = 0x241294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241290u;
        // 0x241294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241298u;
        goto label_241298;
    }
    ctx->pc = 0x241290u;
    SET_GPR_U32(ctx, 31, 0x241298u);
    ctx->pc = 0x241294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241290u;
    // 0x241294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x241290u, 0x241298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241298u;
label_241298:
    // 0x241298: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x241298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_24129c:
    // 0x24129c: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x24129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_2412a0:
    // 0x2412a0: 0x40f809  jalr        $v0
label_2412a4:
    if (ctx->pc == 0x2412A4u) {
        ctx->pc = 0x2412A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412A0u;
        // 0x2412a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412A8u;
        goto label_2412a8;
    }
    ctx->pc = 0x2412A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2412A8u);
        ctx->pc = 0x2412A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412A0u;
        // 0x2412a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2412A0u, 0x2412A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2412A8u;
label_2412a8:
    // 0x2412a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2412a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2412ac:
    // 0x2412ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2412acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2412b0:
    // 0x2412b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2412b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2412b4:
    // 0x2412b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2412b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2412b8:
    // 0x2412b8: 0x3e00008  jr          $ra
label_2412bc:
    if (ctx->pc == 0x2412BCu) {
        ctx->pc = 0x2412BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412B8u;
        // 0x2412bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412C0u;
        goto label_fallthrough_0x2412b8;
    }
    ctx->pc = 0x2412B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2412BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412B8u;
        // 0x2412bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2412B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2412b8:
    ctx->pc = 0x2412C0u;
}
