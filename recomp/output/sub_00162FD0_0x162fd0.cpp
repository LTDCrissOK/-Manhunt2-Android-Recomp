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

// Function: sub_00162FD0
// Address: 0x162fd0 - 0x163158
void sub_00162FD0_0x162fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162FD0_0x162fd0");
#endif

    switch (ctx->pc) {
        case 0x162fd0u: goto label_162fd0;
        case 0x162fd4u: goto label_162fd4;
        case 0x162fd8u: goto label_162fd8;
        case 0x162fdcu: goto label_162fdc;
        case 0x162fe0u: goto label_162fe0;
        case 0x162fe4u: goto label_162fe4;
        case 0x162fe8u: goto label_162fe8;
        case 0x162fecu: goto label_162fec;
        case 0x162ff0u: goto label_162ff0;
        case 0x162ff4u: goto label_162ff4;
        case 0x162ff8u: goto label_162ff8;
        case 0x162ffcu: goto label_162ffc;
        case 0x163000u: goto label_163000;
        case 0x163004u: goto label_163004;
        case 0x163008u: goto label_163008;
        case 0x16300cu: goto label_16300c;
        case 0x163010u: goto label_163010;
        case 0x163014u: goto label_163014;
        case 0x163018u: goto label_163018;
        case 0x16301cu: goto label_16301c;
        case 0x163020u: goto label_163020;
        case 0x163024u: goto label_163024;
        case 0x163028u: goto label_163028;
        case 0x16302cu: goto label_16302c;
        case 0x163030u: goto label_163030;
        case 0x163034u: goto label_163034;
        case 0x163038u: goto label_163038;
        case 0x16303cu: goto label_16303c;
        case 0x163040u: goto label_163040;
        case 0x163044u: goto label_163044;
        case 0x163048u: goto label_163048;
        case 0x16304cu: goto label_16304c;
        case 0x163050u: goto label_163050;
        case 0x163054u: goto label_163054;
        case 0x163058u: goto label_163058;
        case 0x16305cu: goto label_16305c;
        case 0x163060u: goto label_163060;
        case 0x163064u: goto label_163064;
        case 0x163068u: goto label_163068;
        case 0x16306cu: goto label_16306c;
        case 0x163070u: goto label_163070;
        case 0x163074u: goto label_163074;
        case 0x163078u: goto label_163078;
        case 0x16307cu: goto label_16307c;
        case 0x163080u: goto label_163080;
        case 0x163084u: goto label_163084;
        case 0x163088u: goto label_163088;
        case 0x16308cu: goto label_16308c;
        case 0x163090u: goto label_163090;
        case 0x163094u: goto label_163094;
        case 0x163098u: goto label_163098;
        case 0x16309cu: goto label_16309c;
        case 0x1630a0u: goto label_1630a0;
        case 0x1630a4u: goto label_1630a4;
        case 0x1630a8u: goto label_1630a8;
        case 0x1630acu: goto label_1630ac;
        case 0x1630b0u: goto label_1630b0;
        case 0x1630b4u: goto label_1630b4;
        case 0x1630b8u: goto label_1630b8;
        case 0x1630bcu: goto label_1630bc;
        case 0x1630c0u: goto label_1630c0;
        case 0x1630c4u: goto label_1630c4;
        case 0x1630c8u: goto label_1630c8;
        case 0x1630ccu: goto label_1630cc;
        case 0x1630d0u: goto label_1630d0;
        case 0x1630d4u: goto label_1630d4;
        case 0x1630d8u: goto label_1630d8;
        case 0x1630dcu: goto label_1630dc;
        case 0x1630e0u: goto label_1630e0;
        case 0x1630e4u: goto label_1630e4;
        case 0x1630e8u: goto label_1630e8;
        case 0x1630ecu: goto label_1630ec;
        case 0x1630f0u: goto label_1630f0;
        case 0x1630f4u: goto label_1630f4;
        case 0x1630f8u: goto label_1630f8;
        case 0x1630fcu: goto label_1630fc;
        case 0x163100u: goto label_163100;
        case 0x163104u: goto label_163104;
        case 0x163108u: goto label_163108;
        case 0x16310cu: goto label_16310c;
        case 0x163110u: goto label_163110;
        case 0x163114u: goto label_163114;
        case 0x163118u: goto label_163118;
        case 0x16311cu: goto label_16311c;
        case 0x163120u: goto label_163120;
        case 0x163124u: goto label_163124;
        case 0x163128u: goto label_163128;
        case 0x16312cu: goto label_16312c;
        case 0x163130u: goto label_163130;
        case 0x163134u: goto label_163134;
        case 0x163138u: goto label_163138;
        case 0x16313cu: goto label_16313c;
        case 0x163140u: goto label_163140;
        case 0x163144u: goto label_163144;
        case 0x163148u: goto label_163148;
        case 0x16314cu: goto label_16314c;
        case 0x163150u: goto label_163150;
        case 0x163154u: goto label_163154;
        default: break;
    }

    ctx->pc = 0x162fd0u;

label_162fd0:
    // 0x162fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_162fd4:
    // 0x162fd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x162fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_162fd8:
    // 0x162fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162fdc:
    // 0x162fdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_162fe0:
    // 0x162fe0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x162fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162fe4:
    // 0x162fe4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_162fe8:
    // 0x162fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162fec:
    // 0x162fec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x162fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_162ff0:
    // 0x162ff0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x162ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_162ff4:
    // 0x162ff4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x162ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_162ff8:
    // 0x162ff8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x162ff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_162ffc:
    // 0x162ffc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x162ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_163000:
    // 0x163000: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x163000u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_163004:
    // 0x163004: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x163004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_163008:
    // 0x163008: 0x3a830001  xori        $v1, $s4, 0x1
    ctx->pc = 0x163008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
label_16300c:
    // 0x16300c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x16300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_163010:
    // 0x163010: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x163010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_163014:
    // 0x163014: 0x8e240300  lw          $a0, 0x300($s1)
    ctx->pc = 0x163014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_163018:
    // 0x163018: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_16301c:
    if (ctx->pc == 0x16301Cu) {
        ctx->pc = 0x16301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163018u;
        // 0x16301c: 0x43b00a  movz        $s6, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163020u;
        goto label_163020;
    }
    ctx->pc = 0x163018u;
    {
        const bool branch_taken_0x163018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163018u;
        // 0x16301c: 0x43b00a  movz        $s6, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163018) {
            ctx->pc = 0x163030u;
            goto label_163030;
        }
    }
    ctx->pc = 0x163020u;
label_163020:
    // 0x163020: 0xc058f44  jal         func_163D10
label_163024:
    if (ctx->pc == 0x163024u) {
        ctx->pc = 0x163024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163020u;
        // 0x163024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163028u;
        goto label_163028;
    }
    ctx->pc = 0x163020u;
    SET_GPR_U32(ctx, 31, 0x163028u);
    ctx->pc = 0x163024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163020u;
    // 0x163024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D10u, 0x163020u, 0x163028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163028u;
label_163028:
    // 0x163028: 0x10000004  b           . + 4 + (0x4 << 2)
label_16302c:
    if (ctx->pc == 0x16302Cu) {
        ctx->pc = 0x16302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163028u;
        // 0x16302c: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163030u;
        goto label_163030;
    }
    ctx->pc = 0x163028u;
    {
        const bool branch_taken_0x163028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163028u;
        // 0x16302c: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163028) {
            ctx->pc = 0x16303Cu;
            goto label_16303c;
        }
    }
    ctx->pc = 0x163030u;
label_163030:
    // 0x163030: 0xc058f44  jal         func_163D10
label_163034:
    if (ctx->pc == 0x163034u) {
        ctx->pc = 0x163034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163030u;
        // 0x163034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163038u;
        goto label_163038;
    }
    ctx->pc = 0x163030u;
    SET_GPR_U32(ctx, 31, 0x163038u);
    ctx->pc = 0x163034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163030u;
    // 0x163034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D10u, 0x163030u, 0x163038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163038u;
label_163038:
    // 0x163038: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x163038u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_16303c:
    // 0x16303c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16303cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163040:
    // 0x163040: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_163044:
    if (ctx->pc == 0x163044u) {
        ctx->pc = 0x163044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163040u;
        // 0x163044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163048u;
        goto label_163048;
    }
    ctx->pc = 0x163040u;
    {
        const bool branch_taken_0x163040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163040u;
        // 0x163044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163040) {
            ctx->pc = 0x163098u;
            goto label_163098;
        }
    }
    ctx->pc = 0x163048u;
label_163048:
    // 0x163048: 0x8e230354  lw          $v1, 0x354($s1)
    ctx->pc = 0x163048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 852)));
label_16304c:
    // 0x16304c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_163050:
    if (ctx->pc == 0x163050u) {
        ctx->pc = 0x163050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16304Cu;
        // 0x163050: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163054u;
        goto label_163054;
    }
    ctx->pc = 0x16304Cu;
    {
        const bool branch_taken_0x16304c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16304Cu;
        // 0x163050: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16304c) {
            ctx->pc = 0x163074u;
            goto label_163074;
        }
    }
    ctx->pc = 0x163054u;
label_163054:
    // 0x163054: 0xc058aa6  jal         func_162A98
label_163058:
    if (ctx->pc == 0x163058u) {
        ctx->pc = 0x163058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163054u;
        // 0x163058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16305Cu;
        goto label_16305c;
    }
    ctx->pc = 0x163054u;
    SET_GPR_U32(ctx, 31, 0x16305Cu);
    ctx->pc = 0x163058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163054u;
    // 0x163058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A98u, 0x163054u, 0x16305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16305Cu;
label_16305c:
    // 0x16305c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163060:
    // 0x163060: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x163060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163064:
    // 0x163064: 0xc058a8a  jal         func_162A28
label_163068:
    if (ctx->pc == 0x163068u) {
        ctx->pc = 0x163068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163064u;
        // 0x163068: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16306Cu;
        goto label_16306c;
    }
    ctx->pc = 0x163064u;
    SET_GPR_U32(ctx, 31, 0x16306Cu);
    ctx->pc = 0x163068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163064u;
    // 0x163068: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A28u, 0x163064u, 0x16306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16306Cu;
label_16306c:
    // 0x16306c: 0x10000030  b           . + 4 + (0x30 << 2)
label_163070:
    if (ctx->pc == 0x163070u) {
        ctx->pc = 0x163070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16306Cu;
        // 0x163070: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163074u;
        goto label_163074;
    }
    ctx->pc = 0x16306Cu;
    {
        const bool branch_taken_0x16306c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16306Cu;
        // 0x163070: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16306c) {
            ctx->pc = 0x163130u;
            goto label_163130;
        }
    }
    ctx->pc = 0x163074u;
label_163074:
    // 0x163074: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_163078:
    if (ctx->pc == 0x163078u) {
        ctx->pc = 0x163078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163074u;
        // 0x163078: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16307Cu;
        goto label_16307c;
    }
    ctx->pc = 0x163074u;
    {
        const bool branch_taken_0x163074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163074u;
        // 0x163078: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163074) {
            ctx->pc = 0x16309Cu;
            goto label_16309c;
        }
    }
    ctx->pc = 0x16307Cu;
label_16307c:
    // 0x16307c: 0xc058a5a  jal         func_162968
label_163080:
    if (ctx->pc == 0x163080u) {
        ctx->pc = 0x163080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16307Cu;
        // 0x163080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163084u;
        goto label_163084;
    }
    ctx->pc = 0x16307Cu;
    SET_GPR_U32(ctx, 31, 0x163084u);
    ctx->pc = 0x163080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16307Cu;
    // 0x163080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162968u, 0x16307Cu, 0x163084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163084u;
label_163084:
    // 0x163084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163088:
    // 0x163088: 0xc058a4c  jal         func_162930
label_16308c:
    if (ctx->pc == 0x16308Cu) {
        ctx->pc = 0x16308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163088u;
        // 0x16308c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163090u;
        goto label_163090;
    }
    ctx->pc = 0x163088u;
    SET_GPR_U32(ctx, 31, 0x163090u);
    ctx->pc = 0x16308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163088u;
    // 0x16308c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162930u, 0x163088u, 0x163090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163090u;
label_163090:
    // 0x163090: 0x10000027  b           . + 4 + (0x27 << 2)
label_163094:
    if (ctx->pc == 0x163094u) {
        ctx->pc = 0x163094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163090u;
        // 0x163094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163098u;
        goto label_163098;
    }
    ctx->pc = 0x163090u;
    {
        const bool branch_taken_0x163090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163090u;
        // 0x163094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163090) {
            ctx->pc = 0x163130u;
            goto label_163130;
        }
    }
    ctx->pc = 0x163098u;
label_163098:
    // 0x163098: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x163098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16309c:
    // 0x16309c: 0x26370228  addiu       $s7, $s1, 0x228
    ctx->pc = 0x16309cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
label_1630a0:
    // 0x1630a0: 0x2635022c  addiu       $s5, $s1, 0x22C
    ctx->pc = 0x1630a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 556));
label_1630a4:
    // 0x1630a4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1630a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_1630a8:
    // 0x1630a8: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x1630a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_1630ac:
    // 0x1630ac: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1630acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1630b0:
    // 0x1630b0: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_1630b4:
    if (ctx->pc == 0x1630B4u) {
        ctx->pc = 0x1630B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630B0u;
        // 0x1630b4: 0x2a31021  addu        $v0, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630B8u;
        goto label_1630b8;
    }
    ctx->pc = 0x1630B0u;
    {
        const bool branch_taken_0x1630b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1630B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630B0u;
        // 0x1630b4: 0x2a31021  addu        $v0, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630b0) {
            ctx->pc = 0x163118u;
            goto label_163118;
        }
    }
    ctx->pc = 0x1630B8u;
label_1630b8:
    // 0x1630b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1630b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1630bc:
    // 0x1630bc: 0x14760017  bne         $v1, $s6, . + 4 + (0x17 << 2)
label_1630c0:
    if (ctx->pc == 0x1630C0u) {
        ctx->pc = 0x1630C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630BCu;
        // 0x1630c0: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630C4u;
        goto label_1630c4;
    }
    ctx->pc = 0x1630BCu;
    {
        const bool branch_taken_0x1630bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x1630C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630BCu;
        // 0x1630c0: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630bc) {
            ctx->pc = 0x16311Cu;
            goto label_16311c;
        }
    }
    ctx->pc = 0x1630C4u;
label_1630c4:
    // 0x1630c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1630c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1630c8:
    // 0x1630c8: 0xc04f0b6  jal         func_13C2D8
label_1630cc:
    if (ctx->pc == 0x1630CCu) {
        ctx->pc = 0x1630CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630C8u;
        // 0x1630cc: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630D0u;
        goto label_1630d0;
    }
    ctx->pc = 0x1630C8u;
    SET_GPR_U32(ctx, 31, 0x1630D0u);
    ctx->pc = 0x1630CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1630C8u;
    // 0x1630cc: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x1630C8u, 0x1630D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1630D0u;
label_1630d0:
    // 0x1630d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1630d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1630d4:
    // 0x1630d4: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x1630d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_1630d8:
    // 0x1630d8: 0xc045fea  jal         func_117FA8
label_1630dc:
    if (ctx->pc == 0x1630DCu) {
        ctx->pc = 0x1630DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630D8u;
        // 0x1630dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630E0u;
        goto label_1630e0;
    }
    ctx->pc = 0x1630D8u;
    SET_GPR_U32(ctx, 31, 0x1630E0u);
    ctx->pc = 0x1630DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1630D8u;
    // 0x1630dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1630D8u, 0x1630E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1630E0u;
label_1630e0:
    // 0x1630e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1630e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1630e4:
    // 0x1630e4: 0xc046058  jal         func_118160
label_1630e8:
    if (ctx->pc == 0x1630E8u) {
        ctx->pc = 0x1630E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630E4u;
        // 0x1630e8: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630ECu;
        goto label_1630ec;
    }
    ctx->pc = 0x1630E4u;
    SET_GPR_U32(ctx, 31, 0x1630ECu);
    ctx->pc = 0x1630E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1630E4u;
    // 0x1630e8: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x1630E4u, 0x1630ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1630ECu;
label_1630ec:
    // 0x1630ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1630ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1630f0:
    // 0x1630f0: 0xc046104  jal         func_118410
label_1630f4:
    if (ctx->pc == 0x1630F4u) {
        ctx->pc = 0x1630F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630F0u;
        // 0x1630f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630F8u;
        goto label_1630f8;
    }
    ctx->pc = 0x1630F0u;
    SET_GPR_U32(ctx, 31, 0x1630F8u);
    ctx->pc = 0x1630F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1630F0u;
    // 0x1630f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x1630F0u, 0x1630F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1630F8u;
label_1630f8:
    // 0x1630f8: 0xc058f54  jal         func_163D50
label_1630fc:
    if (ctx->pc == 0x1630FCu) {
        ctx->pc = 0x1630FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630F8u;
        // 0x1630fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163100u;
        goto label_163100;
    }
    ctx->pc = 0x1630F8u;
    SET_GPR_U32(ctx, 31, 0x163100u);
    ctx->pc = 0x1630FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1630F8u;
    // 0x1630fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D50u, 0x1630F8u, 0x163100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163100u;
label_163100:
    // 0x163100: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x163100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_163104:
    // 0x163104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163108:
    // 0x163108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16310c:
    // 0x16310c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_163110:
    // 0x163110: 0x40f809  jalr        $v0
label_163114:
    if (ctx->pc == 0x163114u) {
        ctx->pc = 0x163114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163110u;
        // 0x163114: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163118u;
        goto label_163118;
    }
    ctx->pc = 0x163110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163118u);
        ctx->pc = 0x163114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163110u;
        // 0x163114: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163110u, 0x163118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163118u;
label_163118:
    // 0x163118: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x163118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16311c:
    // 0x16311c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x16311cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_163120:
    // 0x163120: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x163120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_163124:
    // 0x163124: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_163128:
    if (ctx->pc == 0x163128u) {
        ctx->pc = 0x163128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163124u;
        // 0x163128: 0x1318c0  sll         $v1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16312Cu;
        goto label_16312c;
    }
    ctx->pc = 0x163124u;
    {
        const bool branch_taken_0x163124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163124u;
        // 0x163128: 0x1318c0  sll         $v1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163124) {
            ctx->pc = 0x1630A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1630a8;
        }
    }
    ctx->pc = 0x16312Cu;
label_16312c:
    // 0x16312c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16312cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163130:
    // 0x163130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x163130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163134:
    // 0x163134: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x163134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163138:
    // 0x163138: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x163138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16313c:
    // 0x16313c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16313cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_163140:
    // 0x163140: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x163140u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_163144:
    // 0x163144: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x163144u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_163148:
    // 0x163148: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x163148u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16314c:
    // 0x16314c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163150:
    // 0x163150: 0x3e00008  jr          $ra
label_163154:
    if (ctx->pc == 0x163154u) {
        ctx->pc = 0x163154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163150u;
        // 0x163154: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163158u;
        goto label_fallthrough_0x163150;
    }
    ctx->pc = 0x163150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163150u;
        // 0x163154: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x163150:
    ctx->pc = 0x163158u;
}
