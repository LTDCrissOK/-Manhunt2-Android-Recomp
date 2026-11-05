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

// Function: sub_0031CE30
// Address: 0x31ce30 - 0x31d570
void sub_0031CE30_0x31ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CE30_0x31ce30");
#endif

    switch (ctx->pc) {
        case 0x31ce58u: goto label_31ce58;
        case 0x31ce70u: goto label_31ce70;
        case 0x31ce7cu: goto label_31ce7c;
        case 0x31ce94u: goto label_31ce94;
        case 0x31ceacu: goto label_31ceac;
        case 0x31cec4u: goto label_31cec4;
        case 0x31cedcu: goto label_31cedc;
        case 0x31cef4u: goto label_31cef4;
        case 0x31cf0cu: goto label_31cf0c;
        case 0x31cf24u: goto label_31cf24;
        case 0x31cf3cu: goto label_31cf3c;
        case 0x31cf54u: goto label_31cf54;
        case 0x31cf6cu: goto label_31cf6c;
        case 0x31cf84u: goto label_31cf84;
        case 0x31cf9cu: goto label_31cf9c;
        case 0x31cfb4u: goto label_31cfb4;
        case 0x31cfccu: goto label_31cfcc;
        case 0x31cfe4u: goto label_31cfe4;
        case 0x31cffcu: goto label_31cffc;
        case 0x31d014u: goto label_31d014;
        case 0x31d02cu: goto label_31d02c;
        case 0x31d044u: goto label_31d044;
        case 0x31d05cu: goto label_31d05c;
        case 0x31d074u: goto label_31d074;
        case 0x31d08cu: goto label_31d08c;
        case 0x31d0a4u: goto label_31d0a4;
        case 0x31d0bcu: goto label_31d0bc;
        case 0x31d0d4u: goto label_31d0d4;
        case 0x31d0ecu: goto label_31d0ec;
        case 0x31d104u: goto label_31d104;
        case 0x31d11cu: goto label_31d11c;
        case 0x31d134u: goto label_31d134;
        case 0x31d14cu: goto label_31d14c;
        case 0x31d164u: goto label_31d164;
        case 0x31d17cu: goto label_31d17c;
        case 0x31d194u: goto label_31d194;
        case 0x31d1acu: goto label_31d1ac;
        case 0x31d1c4u: goto label_31d1c4;
        case 0x31d1dcu: goto label_31d1dc;
        case 0x31d1f4u: goto label_31d1f4;
        case 0x31d20cu: goto label_31d20c;
        case 0x31d224u: goto label_31d224;
        case 0x31d23cu: goto label_31d23c;
        case 0x31d254u: goto label_31d254;
        case 0x31d26cu: goto label_31d26c;
        case 0x31d284u: goto label_31d284;
        case 0x31d29cu: goto label_31d29c;
        case 0x31d2b4u: goto label_31d2b4;
        case 0x31d2ccu: goto label_31d2cc;
        case 0x31d2e4u: goto label_31d2e4;
        case 0x31d2fcu: goto label_31d2fc;
        case 0x31d314u: goto label_31d314;
        case 0x31d32cu: goto label_31d32c;
        case 0x31d344u: goto label_31d344;
        case 0x31d35cu: goto label_31d35c;
        case 0x31d374u: goto label_31d374;
        case 0x31d38cu: goto label_31d38c;
        case 0x31d3a4u: goto label_31d3a4;
        case 0x31d3bcu: goto label_31d3bc;
        case 0x31d3d8u: goto label_31d3d8;
        case 0x31d3f0u: goto label_31d3f0;
        case 0x31d408u: goto label_31d408;
        case 0x31d420u: goto label_31d420;
        case 0x31d438u: goto label_31d438;
        case 0x31d450u: goto label_31d450;
        case 0x31d468u: goto label_31d468;
        case 0x31d480u: goto label_31d480;
        case 0x31d49cu: goto label_31d49c;
        case 0x31d4b4u: goto label_31d4b4;
        case 0x31d4ccu: goto label_31d4cc;
        case 0x31d4e4u: goto label_31d4e4;
        case 0x31d4fcu: goto label_31d4fc;
        case 0x31d514u: goto label_31d514;
        case 0x31d530u: goto label_31d530;
        case 0x31d53cu: goto label_31d53c;
        case 0x31d550u: goto label_31d550;
        default: break;
    }

    ctx->pc = 0x31ce30u;

    // 0x31ce30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31ce34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31ce34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31ce38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ce38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31ce3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31ce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31ce44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31ce48: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31ce4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31ce4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31ce50: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31CE50u;
    SET_GPR_U32(ctx, 31, 0x31CE58u);
    ctx->pc = 0x31CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE50u;
    // 0x31ce54: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31CE50u, 0x31CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE58u;
label_31ce58:
    // 0x31ce58: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x31ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x31ce5c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x31ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x31ce60: 0x2471cda0  addiu       $s1, $v1, -0x3260
    ctx->pc = 0x31ce60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954400));
    // 0x31ce64: 0x2452cd70  addiu       $s2, $v0, -0x3290
    ctx->pc = 0x31ce64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954352));
    // 0x31ce68: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x31CE68u;
    {
        const bool branch_taken_0x31ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE68u;
        // 0x31ce6c: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce68) {
            ctx->pc = 0x31D530u;
            goto label_31d530;
        }
    }
    ctx->pc = 0x31CE70u;
label_31ce70:
    // 0x31ce70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ce70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce74: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CE74u;
    SET_GPR_U32(ctx, 31, 0x31CE7Cu);
    ctx->pc = 0x31CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE74u;
    // 0x31ce78: 0x24a54158  addiu       $a1, $a1, 0x4158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CE74u, 0x31CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE7Cu;
label_31ce7c:
    // 0x31ce7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31ce80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CE80u;
    {
        const bool branch_taken_0x31ce80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE80u;
        // 0x31ce84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce80) {
            ctx->pc = 0x31CE9Cu;
            goto label_31ce9c;
        }
    }
    ctx->pc = 0x31CE88u;
    // 0x31ce88: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31ce88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31ce8c: 0xc09df16  jal         func_277C58
    ctx->pc = 0x31CE8Cu;
    SET_GPR_U32(ctx, 31, 0x31CE94u);
    ctx->pc = 0x31CE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE8Cu;
    // 0x31ce90: 0x24a5c9b0  addiu       $a1, $a1, -0x3650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x31CE8Cu, 0x31CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE94u;
label_31ce94:
    // 0x31ce94: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x31CE94u;
    {
        const bool branch_taken_0x31ce94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE94u;
        // 0x31ce98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce94) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31CE9Cu;
label_31ce9c:
    // 0x31ce9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cea0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cea4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CEA4u;
    SET_GPR_U32(ctx, 31, 0x31CEACu);
    ctx->pc = 0x31CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CEA4u;
    // 0x31cea8: 0x24a54168  addiu       $a1, $a1, 0x4168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CEA4u, 0x31CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CEACu;
label_31ceac:
    // 0x31ceac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ceacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31ceb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CEB0u;
    {
        const bool branch_taken_0x31ceb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEB0u;
        // 0x31ceb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ceb0) {
            ctx->pc = 0x31CECCu;
            goto label_31cecc;
        }
    }
    ctx->pc = 0x31CEB8u;
    // 0x31ceb8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31cebc: 0xc09e056  jal         func_278158
    ctx->pc = 0x31CEBCu;
    SET_GPR_U32(ctx, 31, 0x31CEC4u);
    ctx->pc = 0x31CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CEBCu;
    // 0x31cec0: 0x24a5c9b4  addiu       $a1, $a1, -0x364C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31CEBCu, 0x31CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CEC4u;
label_31cec4:
    // 0x31cec4: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x31CEC4u;
    {
        const bool branch_taken_0x31cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEC4u;
        // 0x31cec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cec4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31CECCu;
label_31cecc:
    // 0x31cecc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31ceccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31ced0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ced4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CED4u;
    SET_GPR_U32(ctx, 31, 0x31CEDCu);
    ctx->pc = 0x31CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CED4u;
    // 0x31ced8: 0x24a54178  addiu       $a1, $a1, 0x4178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CED4u, 0x31CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CEDCu;
label_31cedc:
    // 0x31cedc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cee0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CEE0u;
    {
        const bool branch_taken_0x31cee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEE0u;
        // 0x31cee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cee0) {
            ctx->pc = 0x31CEFCu;
            goto label_31cefc;
        }
    }
    ctx->pc = 0x31CEE8u;
    // 0x31cee8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31cee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31ceec: 0xc09e056  jal         func_278158
    ctx->pc = 0x31CEECu;
    SET_GPR_U32(ctx, 31, 0x31CEF4u);
    ctx->pc = 0x31CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CEECu;
    // 0x31cef0: 0x24a5c9b8  addiu       $a1, $a1, -0x3648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31CEECu, 0x31CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CEF4u;
label_31cef4:
    // 0x31cef4: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x31CEF4u;
    {
        const bool branch_taken_0x31cef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEF4u;
        // 0x31cef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cef4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31CEFCu;
label_31cefc:
    // 0x31cefc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cf00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf04: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CF04u;
    SET_GPR_U32(ctx, 31, 0x31CF0Cu);
    ctx->pc = 0x31CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF04u;
    // 0x31cf08: 0x24a54188  addiu       $a1, $a1, 0x4188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CF04u, 0x31CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF0Cu;
label_31cf0c:
    // 0x31cf0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cf10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CF10u;
    {
        const bool branch_taken_0x31cf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF10u;
        // 0x31cf14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf10) {
            ctx->pc = 0x31CF2Cu;
            goto label_31cf2c;
        }
    }
    ctx->pc = 0x31CF18u;
    // 0x31cf18: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31cf1c: 0xc09e056  jal         func_278158
    ctx->pc = 0x31CF1Cu;
    SET_GPR_U32(ctx, 31, 0x31CF24u);
    ctx->pc = 0x31CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF1Cu;
    // 0x31cf20: 0x24a5c9bc  addiu       $a1, $a1, -0x3644 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31CF1Cu, 0x31CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF24u;
label_31cf24:
    // 0x31cf24: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x31CF24u;
    {
        const bool branch_taken_0x31cf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF24u;
        // 0x31cf28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf24) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31CF2Cu;
label_31cf2c:
    // 0x31cf2c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cf30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf34: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CF34u;
    SET_GPR_U32(ctx, 31, 0x31CF3Cu);
    ctx->pc = 0x31CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF34u;
    // 0x31cf38: 0x24a54198  addiu       $a1, $a1, 0x4198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CF34u, 0x31CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF3Cu;
label_31cf3c:
    // 0x31cf3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cf40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CF40u;
    {
        const bool branch_taken_0x31cf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF40u;
        // 0x31cf44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf40) {
            ctx->pc = 0x31CF5Cu;
            goto label_31cf5c;
        }
    }
    ctx->pc = 0x31CF48u;
    // 0x31cf48: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31cf48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31cf4c: 0xc09e056  jal         func_278158
    ctx->pc = 0x31CF4Cu;
    SET_GPR_U32(ctx, 31, 0x31CF54u);
    ctx->pc = 0x31CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF4Cu;
    // 0x31cf50: 0x24a5c9e4  addiu       $a1, $a1, -0x361C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31CF4Cu, 0x31CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF54u;
label_31cf54:
    // 0x31cf54: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x31CF54u;
    {
        const bool branch_taken_0x31cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF54u;
        // 0x31cf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf54) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31CF5Cu;
label_31cf5c:
    // 0x31cf5c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cf60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf64: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CF64u;
    SET_GPR_U32(ctx, 31, 0x31CF6Cu);
    ctx->pc = 0x31CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF64u;
    // 0x31cf68: 0x24a541b0  addiu       $a1, $a1, 0x41B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CF64u, 0x31CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF6Cu;
label_31cf6c:
    // 0x31cf6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cf70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CF70u;
    {
        const bool branch_taken_0x31cf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF70u;
        // 0x31cf74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf70) {
            ctx->pc = 0x31CF8Cu;
            goto label_31cf8c;
        }
    }
    ctx->pc = 0x31CF78u;
    // 0x31cf78: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31cf78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31cf7c: 0xc09df16  jal         func_277C58
    ctx->pc = 0x31CF7Cu;
    SET_GPR_U32(ctx, 31, 0x31CF84u);
    ctx->pc = 0x31CF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF7Cu;
    // 0x31cf80: 0x24a5c9c0  addiu       $a1, $a1, -0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x31CF7Cu, 0x31CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF84u;
label_31cf84:
    // 0x31cf84: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x31CF84u;
    {
        const bool branch_taken_0x31cf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF84u;
        // 0x31cf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf84) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31CF8Cu;
label_31cf8c:
    // 0x31cf8c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cf90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf94: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CF94u;
    SET_GPR_U32(ctx, 31, 0x31CF9Cu);
    ctx->pc = 0x31CF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF94u;
    // 0x31cf98: 0x24a541c0  addiu       $a1, $a1, 0x41C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CF94u, 0x31CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF9Cu;
label_31cf9c:
    // 0x31cf9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cfa0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CFA0u;
    {
        const bool branch_taken_0x31cfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFA0u;
        // 0x31cfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cfa0) {
            ctx->pc = 0x31CFBCu;
            goto label_31cfbc;
        }
    }
    ctx->pc = 0x31CFA8u;
    // 0x31cfa8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31cfac: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31CFACu;
    SET_GPR_U32(ctx, 31, 0x31CFB4u);
    ctx->pc = 0x31CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CFACu;
    // 0x31cfb0: 0x24a5c9c4  addiu       $a1, $a1, -0x363C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31CFACu, 0x31CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CFB4u;
label_31cfb4:
    // 0x31cfb4: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x31CFB4u;
    {
        const bool branch_taken_0x31cfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFB4u;
        // 0x31cfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cfb4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31CFBCu;
label_31cfbc:
    // 0x31cfbc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cfc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cfc4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CFC4u;
    SET_GPR_U32(ctx, 31, 0x31CFCCu);
    ctx->pc = 0x31CFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CFC4u;
    // 0x31cfc8: 0x24a541d0  addiu       $a1, $a1, 0x41D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CFC4u, 0x31CFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CFCCu;
label_31cfcc:
    // 0x31cfcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cfd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CFD0u;
    {
        const bool branch_taken_0x31cfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFD0u;
        // 0x31cfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cfd0) {
            ctx->pc = 0x31CFECu;
            goto label_31cfec;
        }
    }
    ctx->pc = 0x31CFD8u;
    // 0x31cfd8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31cfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31cfdc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31CFDCu;
    SET_GPR_U32(ctx, 31, 0x31CFE4u);
    ctx->pc = 0x31CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CFDCu;
    // 0x31cfe0: 0x24a5c9c8  addiu       $a1, $a1, -0x3638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31CFDCu, 0x31CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CFE4u;
label_31cfe4:
    // 0x31cfe4: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x31CFE4u;
    {
        const bool branch_taken_0x31cfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFE4u;
        // 0x31cfe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cfe4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31CFECu;
label_31cfec:
    // 0x31cfec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cfecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cff0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cff4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CFF4u;
    SET_GPR_U32(ctx, 31, 0x31CFFCu);
    ctx->pc = 0x31CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CFF4u;
    // 0x31cff8: 0x24a541e0  addiu       $a1, $a1, 0x41E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CFF4u, 0x31CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CFFCu;
label_31cffc:
    // 0x31cffc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d000: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D000u;
    {
        const bool branch_taken_0x31d000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D000u;
        // 0x31d004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d000) {
            ctx->pc = 0x31D01Cu;
            goto label_31d01c;
        }
    }
    ctx->pc = 0x31D008u;
    // 0x31d008: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d00c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D00Cu;
    SET_GPR_U32(ctx, 31, 0x31D014u);
    ctx->pc = 0x31D010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D00Cu;
    // 0x31d010: 0x24a5c9cc  addiu       $a1, $a1, -0x3634 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D00Cu, 0x31D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D014u;
label_31d014:
    // 0x31d014: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x31D014u;
    {
        const bool branch_taken_0x31d014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D014u;
        // 0x31d018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d014) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D01Cu;
label_31d01c:
    // 0x31d01c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d020: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d024: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D024u;
    SET_GPR_U32(ctx, 31, 0x31D02Cu);
    ctx->pc = 0x31D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D024u;
    // 0x31d028: 0x24a541f0  addiu       $a1, $a1, 0x41F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D024u, 0x31D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D02Cu;
label_31d02c:
    // 0x31d02c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d030: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D030u;
    {
        const bool branch_taken_0x31d030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D030u;
        // 0x31d034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d030) {
            ctx->pc = 0x31D04Cu;
            goto label_31d04c;
        }
    }
    ctx->pc = 0x31D038u;
    // 0x31d038: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d03c: 0xc09df16  jal         func_277C58
    ctx->pc = 0x31D03Cu;
    SET_GPR_U32(ctx, 31, 0x31D044u);
    ctx->pc = 0x31D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D03Cu;
    // 0x31d040: 0x24a5c9d1  addiu       $a1, $a1, -0x362F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953425));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x31D03Cu, 0x31D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D044u;
label_31d044:
    // 0x31d044: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x31D044u;
    {
        const bool branch_taken_0x31d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D044u;
        // 0x31d048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d044) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D04Cu;
label_31d04c:
    // 0x31d04c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d050: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d054: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D054u;
    SET_GPR_U32(ctx, 31, 0x31D05Cu);
    ctx->pc = 0x31D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D054u;
    // 0x31d058: 0x24a54208  addiu       $a1, $a1, 0x4208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D054u, 0x31D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D05Cu;
label_31d05c:
    // 0x31d05c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d060: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D060u;
    {
        const bool branch_taken_0x31d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D060u;
        // 0x31d064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d060) {
            ctx->pc = 0x31D07Cu;
            goto label_31d07c;
        }
    }
    ctx->pc = 0x31D068u;
    // 0x31d068: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d06c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D06Cu;
    SET_GPR_U32(ctx, 31, 0x31D074u);
    ctx->pc = 0x31D070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D06Cu;
    // 0x31d070: 0x24a5c9d4  addiu       $a1, $a1, -0x362C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D06Cu, 0x31D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D074u;
label_31d074:
    // 0x31d074: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x31D074u;
    {
        const bool branch_taken_0x31d074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D074u;
        // 0x31d078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d074) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D07Cu;
label_31d07c:
    // 0x31d07c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d080: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d084: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D084u;
    SET_GPR_U32(ctx, 31, 0x31D08Cu);
    ctx->pc = 0x31D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D084u;
    // 0x31d088: 0x24a54220  addiu       $a1, $a1, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D084u, 0x31D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D08Cu;
label_31d08c:
    // 0x31d08c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d090: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D090u;
    {
        const bool branch_taken_0x31d090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D090u;
        // 0x31d094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d090) {
            ctx->pc = 0x31D0ACu;
            goto label_31d0ac;
        }
    }
    ctx->pc = 0x31D098u;
    // 0x31d098: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d09c: 0xc09e056  jal         func_278158
    ctx->pc = 0x31D09Cu;
    SET_GPR_U32(ctx, 31, 0x31D0A4u);
    ctx->pc = 0x31D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D09Cu;
    // 0x31d0a0: 0x24a5c9d8  addiu       $a1, $a1, -0x3628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31D09Cu, 0x31D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0A4u;
label_31d0a4:
    // 0x31d0a4: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x31D0A4u;
    {
        const bool branch_taken_0x31d0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0A4u;
        // 0x31d0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0a4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D0ACu;
label_31d0ac:
    // 0x31d0ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d0b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d0b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D0B4u;
    SET_GPR_U32(ctx, 31, 0x31D0BCu);
    ctx->pc = 0x31D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D0B4u;
    // 0x31d0b8: 0x24a54230  addiu       $a1, $a1, 0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D0B4u, 0x31D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0BCu;
label_31d0bc:
    // 0x31d0bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d0c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D0C0u;
    {
        const bool branch_taken_0x31d0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0C0u;
        // 0x31d0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0c0) {
            ctx->pc = 0x31D0DCu;
            goto label_31d0dc;
        }
    }
    ctx->pc = 0x31D0C8u;
    // 0x31d0c8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d0cc: 0xc09e056  jal         func_278158
    ctx->pc = 0x31D0CCu;
    SET_GPR_U32(ctx, 31, 0x31D0D4u);
    ctx->pc = 0x31D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D0CCu;
    // 0x31d0d0: 0x24a5c9dc  addiu       $a1, $a1, -0x3624 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31D0CCu, 0x31D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0D4u;
label_31d0d4:
    // 0x31d0d4: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x31D0D4u;
    {
        const bool branch_taken_0x31d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0D4u;
        // 0x31d0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0d4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D0DCu;
label_31d0dc:
    // 0x31d0dc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d0e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d0e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D0E4u;
    SET_GPR_U32(ctx, 31, 0x31D0ECu);
    ctx->pc = 0x31D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D0E4u;
    // 0x31d0e8: 0x24a54248  addiu       $a1, $a1, 0x4248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D0E4u, 0x31D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0ECu;
label_31d0ec:
    // 0x31d0ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d0f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D0F0u;
    {
        const bool branch_taken_0x31d0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0F0u;
        // 0x31d0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0f0) {
            ctx->pc = 0x31D10Cu;
            goto label_31d10c;
        }
    }
    ctx->pc = 0x31D0F8u;
    // 0x31d0f8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d0fc: 0xc09e056  jal         func_278158
    ctx->pc = 0x31D0FCu;
    SET_GPR_U32(ctx, 31, 0x31D104u);
    ctx->pc = 0x31D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D0FCu;
    // 0x31d100: 0x24a5c9e0  addiu       $a1, $a1, -0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31D0FCu, 0x31D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D104u;
label_31d104:
    // 0x31d104: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x31D104u;
    {
        const bool branch_taken_0x31d104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D104u;
        // 0x31d108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d104) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D10Cu;
label_31d10c:
    // 0x31d10c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d110: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d114: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D114u;
    SET_GPR_U32(ctx, 31, 0x31D11Cu);
    ctx->pc = 0x31D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D114u;
    // 0x31d118: 0x24a54260  addiu       $a1, $a1, 0x4260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D114u, 0x31D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D11Cu;
label_31d11c:
    // 0x31d11c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d120: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D120u;
    {
        const bool branch_taken_0x31d120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D120u;
        // 0x31d124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d120) {
            ctx->pc = 0x31D13Cu;
            goto label_31d13c;
        }
    }
    ctx->pc = 0x31D128u;
    // 0x31d128: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d12c: 0xc09df16  jal         func_277C58
    ctx->pc = 0x31D12Cu;
    SET_GPR_U32(ctx, 31, 0x31D134u);
    ctx->pc = 0x31D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D12Cu;
    // 0x31d130: 0x24a5c9e8  addiu       $a1, $a1, -0x3618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x31D12Cu, 0x31D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D134u;
label_31d134:
    // 0x31d134: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x31D134u;
    {
        const bool branch_taken_0x31d134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D134u;
        // 0x31d138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d134) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D13Cu;
label_31d13c:
    // 0x31d13c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d144: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D144u;
    SET_GPR_U32(ctx, 31, 0x31D14Cu);
    ctx->pc = 0x31D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D144u;
    // 0x31d148: 0x24a54278  addiu       $a1, $a1, 0x4278 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D144u, 0x31D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D14Cu;
label_31d14c:
    // 0x31d14c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d150: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D150u;
    {
        const bool branch_taken_0x31d150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D150u;
        // 0x31d154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d150) {
            ctx->pc = 0x31D16Cu;
            goto label_31d16c;
        }
    }
    ctx->pc = 0x31D158u;
    // 0x31d158: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d15c: 0xc09e056  jal         func_278158
    ctx->pc = 0x31D15Cu;
    SET_GPR_U32(ctx, 31, 0x31D164u);
    ctx->pc = 0x31D160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D15Cu;
    // 0x31d160: 0x24a5c9ec  addiu       $a1, $a1, -0x3614 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31D15Cu, 0x31D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D164u;
label_31d164:
    // 0x31d164: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x31D164u;
    {
        const bool branch_taken_0x31d164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D164u;
        // 0x31d168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d164) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D16Cu;
label_31d16c:
    // 0x31d16c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d16cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d174: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D174u;
    SET_GPR_U32(ctx, 31, 0x31D17Cu);
    ctx->pc = 0x31D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D174u;
    // 0x31d178: 0x24a54290  addiu       $a1, $a1, 0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D174u, 0x31D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D17Cu;
label_31d17c:
    // 0x31d17c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d180: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D180u;
    {
        const bool branch_taken_0x31d180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D180u;
        // 0x31d184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d180) {
            ctx->pc = 0x31D19Cu;
            goto label_31d19c;
        }
    }
    ctx->pc = 0x31D188u;
    // 0x31d188: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d18c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D18Cu;
    SET_GPR_U32(ctx, 31, 0x31D194u);
    ctx->pc = 0x31D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D18Cu;
    // 0x31d190: 0x24a5c9f0  addiu       $a1, $a1, -0x3610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D18Cu, 0x31D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D194u;
label_31d194:
    // 0x31d194: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x31D194u;
    {
        const bool branch_taken_0x31d194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D194u;
        // 0x31d198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d194) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D19Cu;
label_31d19c:
    // 0x31d19c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d1a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1a4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D1A4u;
    SET_GPR_U32(ctx, 31, 0x31D1ACu);
    ctx->pc = 0x31D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D1A4u;
    // 0x31d1a8: 0x24a542a8  addiu       $a1, $a1, 0x42A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D1A4u, 0x31D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1ACu;
label_31d1ac:
    // 0x31d1ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d1b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D1B0u;
    {
        const bool branch_taken_0x31d1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1B0u;
        // 0x31d1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1b0) {
            ctx->pc = 0x31D1CCu;
            goto label_31d1cc;
        }
    }
    ctx->pc = 0x31D1B8u;
    // 0x31d1b8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d1bc: 0xc09df16  jal         func_277C58
    ctx->pc = 0x31D1BCu;
    SET_GPR_U32(ctx, 31, 0x31D1C4u);
    ctx->pc = 0x31D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D1BCu;
    // 0x31d1c0: 0x24a5c9f4  addiu       $a1, $a1, -0x360C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x31D1BCu, 0x31D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1C4u;
label_31d1c4:
    // 0x31d1c4: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x31D1C4u;
    {
        const bool branch_taken_0x31d1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1C4u;
        // 0x31d1c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1c4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D1CCu;
label_31d1cc:
    // 0x31d1cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d1d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1d4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D1D4u;
    SET_GPR_U32(ctx, 31, 0x31D1DCu);
    ctx->pc = 0x31D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D1D4u;
    // 0x31d1d8: 0x24a542c0  addiu       $a1, $a1, 0x42C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D1D4u, 0x31D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1DCu;
label_31d1dc:
    // 0x31d1dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d1e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D1E0u;
    {
        const bool branch_taken_0x31d1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1E0u;
        // 0x31d1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1e0) {
            ctx->pc = 0x31D1FCu;
            goto label_31d1fc;
        }
    }
    ctx->pc = 0x31D1E8u;
    // 0x31d1e8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d1ec: 0xc09e056  jal         func_278158
    ctx->pc = 0x31D1ECu;
    SET_GPR_U32(ctx, 31, 0x31D1F4u);
    ctx->pc = 0x31D1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D1ECu;
    // 0x31d1f0: 0x24a5c9f8  addiu       $a1, $a1, -0x3608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31D1ECu, 0x31D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1F4u;
label_31d1f4:
    // 0x31d1f4: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x31D1F4u;
    {
        const bool branch_taken_0x31d1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1F4u;
        // 0x31d1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1f4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D1FCu;
label_31d1fc:
    // 0x31d1fc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d200: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d204: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D204u;
    SET_GPR_U32(ctx, 31, 0x31D20Cu);
    ctx->pc = 0x31D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D204u;
    // 0x31d208: 0x24a542d8  addiu       $a1, $a1, 0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D204u, 0x31D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D20Cu;
label_31d20c:
    // 0x31d20c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d210: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D210u;
    {
        const bool branch_taken_0x31d210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D210u;
        // 0x31d214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d210) {
            ctx->pc = 0x31D22Cu;
            goto label_31d22c;
        }
    }
    ctx->pc = 0x31D218u;
    // 0x31d218: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d21c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D21Cu;
    SET_GPR_U32(ctx, 31, 0x31D224u);
    ctx->pc = 0x31D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D21Cu;
    // 0x31d220: 0x24a5c9fc  addiu       $a1, $a1, -0x3604 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D21Cu, 0x31D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D224u;
label_31d224:
    // 0x31d224: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x31D224u;
    {
        const bool branch_taken_0x31d224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D224u;
        // 0x31d228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d224) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D22Cu;
label_31d22c:
    // 0x31d22c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d234: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D234u;
    SET_GPR_U32(ctx, 31, 0x31D23Cu);
    ctx->pc = 0x31D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D234u;
    // 0x31d238: 0x24a542f8  addiu       $a1, $a1, 0x42F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D234u, 0x31D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D23Cu;
label_31d23c:
    // 0x31d23c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d240: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D240u;
    {
        const bool branch_taken_0x31d240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D240u;
        // 0x31d244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d240) {
            ctx->pc = 0x31D25Cu;
            goto label_31d25c;
        }
    }
    ctx->pc = 0x31D248u;
    // 0x31d248: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d24c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D24Cu;
    SET_GPR_U32(ctx, 31, 0x31D254u);
    ctx->pc = 0x31D250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D24Cu;
    // 0x31d250: 0x24a5ca00  addiu       $a1, $a1, -0x3600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D24Cu, 0x31D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D254u;
label_31d254:
    // 0x31d254: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x31D254u;
    {
        const bool branch_taken_0x31d254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D254u;
        // 0x31d258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d254) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D25Cu;
label_31d25c:
    // 0x31d25c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d260: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d264: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D264u;
    SET_GPR_U32(ctx, 31, 0x31D26Cu);
    ctx->pc = 0x31D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D264u;
    // 0x31d268: 0x24a54310  addiu       $a1, $a1, 0x4310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D264u, 0x31D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D26Cu;
label_31d26c:
    // 0x31d26c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d270: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D270u;
    {
        const bool branch_taken_0x31d270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D270u;
        // 0x31d274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d270) {
            ctx->pc = 0x31D28Cu;
            goto label_31d28c;
        }
    }
    ctx->pc = 0x31D278u;
    // 0x31d278: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d27c: 0xc09df16  jal         func_277C58
    ctx->pc = 0x31D27Cu;
    SET_GPR_U32(ctx, 31, 0x31D284u);
    ctx->pc = 0x31D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D27Cu;
    // 0x31d280: 0x24a5ca04  addiu       $a1, $a1, -0x35FC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x31D27Cu, 0x31D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D284u;
label_31d284:
    // 0x31d284: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x31D284u;
    {
        const bool branch_taken_0x31d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D284u;
        // 0x31d288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d284) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D28Cu;
label_31d28c:
    // 0x31d28c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d290: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d294: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D294u;
    SET_GPR_U32(ctx, 31, 0x31D29Cu);
    ctx->pc = 0x31D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D294u;
    // 0x31d298: 0x24a54328  addiu       $a1, $a1, 0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D294u, 0x31D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D29Cu;
label_31d29c:
    // 0x31d29c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d2a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D2A0u;
    {
        const bool branch_taken_0x31d2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2A0u;
        // 0x31d2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2a0) {
            ctx->pc = 0x31D2BCu;
            goto label_31d2bc;
        }
    }
    ctx->pc = 0x31D2A8u;
    // 0x31d2a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d2ac: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D2ACu;
    SET_GPR_U32(ctx, 31, 0x31D2B4u);
    ctx->pc = 0x31D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D2ACu;
    // 0x31d2b0: 0x24a5ca08  addiu       $a1, $a1, -0x35F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D2ACu, 0x31D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D2B4u;
label_31d2b4:
    // 0x31d2b4: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x31D2B4u;
    {
        const bool branch_taken_0x31d2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2B4u;
        // 0x31d2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2b4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D2BCu;
label_31d2bc:
    // 0x31d2bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d2c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D2C4u;
    SET_GPR_U32(ctx, 31, 0x31D2CCu);
    ctx->pc = 0x31D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D2C4u;
    // 0x31d2c8: 0x24a54348  addiu       $a1, $a1, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D2C4u, 0x31D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D2CCu;
label_31d2cc:
    // 0x31d2cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d2d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D2D0u;
    {
        const bool branch_taken_0x31d2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2D0u;
        // 0x31d2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2d0) {
            ctx->pc = 0x31D2ECu;
            goto label_31d2ec;
        }
    }
    ctx->pc = 0x31D2D8u;
    // 0x31d2d8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d2dc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D2DCu;
    SET_GPR_U32(ctx, 31, 0x31D2E4u);
    ctx->pc = 0x31D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D2DCu;
    // 0x31d2e0: 0x24a5ca0c  addiu       $a1, $a1, -0x35F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D2DCu, 0x31D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D2E4u;
label_31d2e4:
    // 0x31d2e4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x31D2E4u;
    {
        const bool branch_taken_0x31d2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2E4u;
        // 0x31d2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2e4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D2ECu;
label_31d2ec:
    // 0x31d2ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d2f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D2F4u;
    SET_GPR_U32(ctx, 31, 0x31D2FCu);
    ctx->pc = 0x31D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D2F4u;
    // 0x31d2f8: 0x24a54360  addiu       $a1, $a1, 0x4360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D2F4u, 0x31D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D2FCu;
label_31d2fc:
    // 0x31d2fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d300: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D300u;
    {
        const bool branch_taken_0x31d300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D300u;
        // 0x31d304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d300) {
            ctx->pc = 0x31D31Cu;
            goto label_31d31c;
        }
    }
    ctx->pc = 0x31D308u;
    // 0x31d308: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d30c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D30Cu;
    SET_GPR_U32(ctx, 31, 0x31D314u);
    ctx->pc = 0x31D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D30Cu;
    // 0x31d310: 0x24a5ca10  addiu       $a1, $a1, -0x35F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D30Cu, 0x31D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D314u;
label_31d314:
    // 0x31d314: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x31D314u;
    {
        const bool branch_taken_0x31d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D314u;
        // 0x31d318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d314) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D31Cu;
label_31d31c:
    // 0x31d31c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d324: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D324u;
    SET_GPR_U32(ctx, 31, 0x31D32Cu);
    ctx->pc = 0x31D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D324u;
    // 0x31d328: 0x24a54378  addiu       $a1, $a1, 0x4378 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D324u, 0x31D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D32Cu;
label_31d32c:
    // 0x31d32c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d330: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D330u;
    {
        const bool branch_taken_0x31d330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D330u;
        // 0x31d334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d330) {
            ctx->pc = 0x31D34Cu;
            goto label_31d34c;
        }
    }
    ctx->pc = 0x31D338u;
    // 0x31d338: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d33c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D33Cu;
    SET_GPR_U32(ctx, 31, 0x31D344u);
    ctx->pc = 0x31D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D33Cu;
    // 0x31d340: 0x24a5ca14  addiu       $a1, $a1, -0x35EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953492));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D33Cu, 0x31D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D344u;
label_31d344:
    // 0x31d344: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x31D344u;
    {
        const bool branch_taken_0x31d344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D344u;
        // 0x31d348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d344) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D34Cu;
label_31d34c:
    // 0x31d34c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d354: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D354u;
    SET_GPR_U32(ctx, 31, 0x31D35Cu);
    ctx->pc = 0x31D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D354u;
    // 0x31d358: 0x24a54390  addiu       $a1, $a1, 0x4390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D354u, 0x31D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D35Cu;
label_31d35c:
    // 0x31d35c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d360: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D360u;
    {
        const bool branch_taken_0x31d360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D360u;
        // 0x31d364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d360) {
            ctx->pc = 0x31D37Cu;
            goto label_31d37c;
        }
    }
    ctx->pc = 0x31D368u;
    // 0x31d368: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d36c: 0xc09df16  jal         func_277C58
    ctx->pc = 0x31D36Cu;
    SET_GPR_U32(ctx, 31, 0x31D374u);
    ctx->pc = 0x31D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D36Cu;
    // 0x31d370: 0x24a5ca05  addiu       $a1, $a1, -0x35FB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x31D36Cu, 0x31D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D374u;
label_31d374:
    // 0x31d374: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x31D374u;
    {
        const bool branch_taken_0x31d374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D374u;
        // 0x31d378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d374) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D37Cu;
label_31d37c:
    // 0x31d37c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d37cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d380: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d384: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D384u;
    SET_GPR_U32(ctx, 31, 0x31D38Cu);
    ctx->pc = 0x31D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D384u;
    // 0x31d388: 0x24a543b0  addiu       $a1, $a1, 0x43B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D384u, 0x31D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D38Cu;
label_31d38c:
    // 0x31d38c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d390: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D390u;
    {
        const bool branch_taken_0x31d390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D390u;
        // 0x31d394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d390) {
            ctx->pc = 0x31D3ACu;
            goto label_31d3ac;
        }
    }
    ctx->pc = 0x31D398u;
    // 0x31d398: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x31d398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x31d39c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31D39Cu;
    SET_GPR_U32(ctx, 31, 0x31D3A4u);
    ctx->pc = 0x31D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D39Cu;
    // 0x31d3a0: 0x24a5cd60  addiu       $a1, $a1, -0x32A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31D39Cu, 0x31D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D3A4u;
label_31d3a4:
    // 0x31d3a4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x31D3A4u;
    {
        const bool branch_taken_0x31d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3A4u;
        // 0x31d3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3a4) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D3ACu;
label_31d3ac:
    // 0x31d3ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d3b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D3B4u;
    SET_GPR_U32(ctx, 31, 0x31D3BCu);
    ctx->pc = 0x31D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D3B4u;
    // 0x31d3b8: 0x24a543d0  addiu       $a1, $a1, 0x43D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D3B4u, 0x31D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D3BCu;
label_31d3bc:
    // 0x31d3bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d3c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31D3C0u;
    {
        const bool branch_taken_0x31d3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3C0u;
        // 0x31d3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3c0) {
            ctx->pc = 0x31D3E0u;
            goto label_31d3e0;
        }
    }
    ctx->pc = 0x31D3C8u;
    // 0x31d3c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31d3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3cc: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x31d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x31d3d0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31D3D0u;
    SET_GPR_U32(ctx, 31, 0x31D3D8u);
    ctx->pc = 0x31D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D3D0u;
    // 0x31d3d4: 0x26470008  addiu       $a3, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31D3D0u, 0x31D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D3D8u;
label_31d3d8:
    // 0x31d3d8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x31D3D8u;
    {
        const bool branch_taken_0x31d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3D8u;
        // 0x31d3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3d8) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D3E0u;
label_31d3e0:
    // 0x31d3e0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d3e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D3E8u;
    SET_GPR_U32(ctx, 31, 0x31D3F0u);
    ctx->pc = 0x31D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D3E8u;
    // 0x31d3ec: 0x24a543f0  addiu       $a1, $a1, 0x43F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D3E8u, 0x31D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D3F0u;
label_31d3f0:
    // 0x31d3f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d3f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D3F4u;
    {
        const bool branch_taken_0x31d3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3F4u;
        // 0x31d3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3f4) {
            ctx->pc = 0x31D410u;
            goto label_31d410;
        }
    }
    ctx->pc = 0x31D3FCu;
    // 0x31d3fc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31d3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31d400: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D400u;
    SET_GPR_U32(ctx, 31, 0x31D408u);
    ctx->pc = 0x31D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D400u;
    // 0x31d404: 0x24a5ca18  addiu       $a1, $a1, -0x35E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D400u, 0x31D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D408u;
label_31d408:
    // 0x31d408: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x31D408u;
    {
        const bool branch_taken_0x31d408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D408u;
        // 0x31d40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d408) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D410u;
label_31d410:
    // 0x31d410: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d414: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d418: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D418u;
    SET_GPR_U32(ctx, 31, 0x31D420u);
    ctx->pc = 0x31D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D418u;
    // 0x31d41c: 0x24a54410  addiu       $a1, $a1, 0x4410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D418u, 0x31D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D420u;
label_31d420:
    // 0x31d420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d424: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D424u;
    {
        const bool branch_taken_0x31d424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D424u;
        // 0x31d428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d424) {
            ctx->pc = 0x31D440u;
            goto label_31d440;
        }
    }
    ctx->pc = 0x31D42Cu;
    // 0x31d42c: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x31d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x31d430: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31D430u;
    SET_GPR_U32(ctx, 31, 0x31D438u);
    ctx->pc = 0x31D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D430u;
    // 0x31d434: 0x24a5cd80  addiu       $a1, $a1, -0x3280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31D430u, 0x31D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D438u;
label_31d438:
    // 0x31d438: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x31D438u;
    {
        const bool branch_taken_0x31d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D438u;
        // 0x31d43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d438) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D440u;
label_31d440:
    // 0x31d440: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d448: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D448u;
    SET_GPR_U32(ctx, 31, 0x31D450u);
    ctx->pc = 0x31D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D448u;
    // 0x31d44c: 0x24a54428  addiu       $a1, $a1, 0x4428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D448u, 0x31D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D450u;
label_31d450:
    // 0x31d450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d454: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D454u;
    {
        const bool branch_taken_0x31d454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D454u;
        // 0x31d458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d454) {
            ctx->pc = 0x31D470u;
            goto label_31d470;
        }
    }
    ctx->pc = 0x31D45Cu;
    // 0x31d45c: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x31d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x31d460: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31D460u;
    SET_GPR_U32(ctx, 31, 0x31D468u);
    ctx->pc = 0x31D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D460u;
    // 0x31d464: 0x24a5cd90  addiu       $a1, $a1, -0x3270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31D460u, 0x31D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D468u;
label_31d468:
    // 0x31d468: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x31D468u;
    {
        const bool branch_taken_0x31d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D468u;
        // 0x31d46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d468) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D470u;
label_31d470:
    // 0x31d470: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d474: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d478: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D478u;
    SET_GPR_U32(ctx, 31, 0x31D480u);
    ctx->pc = 0x31D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D478u;
    // 0x31d47c: 0x24a54440  addiu       $a1, $a1, 0x4440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D478u, 0x31D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D480u;
label_31d480:
    // 0x31d480: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d484: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31D484u;
    {
        const bool branch_taken_0x31d484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D484u;
        // 0x31d488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d484) {
            ctx->pc = 0x31D4A4u;
            goto label_31d4a4;
        }
    }
    ctx->pc = 0x31D48Cu;
    // 0x31d48c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31d48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d490: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x31d490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31d494: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31D494u;
    SET_GPR_U32(ctx, 31, 0x31D49Cu);
    ctx->pc = 0x31D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D494u;
    // 0x31d498: 0x26270008  addiu       $a3, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31D494u, 0x31D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D49Cu;
label_31d49c:
    // 0x31d49c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x31D49Cu;
    {
        const bool branch_taken_0x31d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D49Cu;
        // 0x31d4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d49c) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D4A4u;
label_31d4a4:
    // 0x31d4a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d4a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d4ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D4ACu;
    SET_GPR_U32(ctx, 31, 0x31D4B4u);
    ctx->pc = 0x31D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4ACu;
    // 0x31d4b0: 0x24a54458  addiu       $a1, $a1, 0x4458 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D4ACu, 0x31D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4B4u;
label_31d4b4:
    // 0x31d4b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d4b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D4B8u;
    {
        const bool branch_taken_0x31d4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4B8u;
        // 0x31d4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4b8) {
            ctx->pc = 0x31D4D4u;
            goto label_31d4d4;
        }
    }
    ctx->pc = 0x31D4C0u;
    // 0x31d4c0: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x31d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x31d4c4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31D4C4u;
    SET_GPR_U32(ctx, 31, 0x31D4CCu);
    ctx->pc = 0x31D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4C4u;
    // 0x31d4c8: 0x24a5cd88  addiu       $a1, $a1, -0x3278 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31D4C4u, 0x31D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4CCu;
label_31d4cc:
    // 0x31d4cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31D4CCu;
    {
        const bool branch_taken_0x31d4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4CCu;
        // 0x31d4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4cc) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D4D4u;
label_31d4d4:
    // 0x31d4d4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d4d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d4dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D4DCu;
    SET_GPR_U32(ctx, 31, 0x31D4E4u);
    ctx->pc = 0x31D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4DCu;
    // 0x31d4e0: 0x24a54478  addiu       $a1, $a1, 0x4478 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D4DCu, 0x31D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4E4u;
label_31d4e4:
    // 0x31d4e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d4e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31D4E8u;
    {
        const bool branch_taken_0x31d4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4E8u;
        // 0x31d4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4e8) {
            ctx->pc = 0x31D504u;
            goto label_31d504;
        }
    }
    ctx->pc = 0x31D4F0u;
    // 0x31d4f0: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x31d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x31d4f4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31D4F4u;
    SET_GPR_U32(ctx, 31, 0x31D4FCu);
    ctx->pc = 0x31D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4F4u;
    // 0x31d4f8: 0x24a5cd98  addiu       $a1, $a1, -0x3268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31D4F4u, 0x31D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4FCu;
label_31d4fc:
    // 0x31d4fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31D4FCu;
    {
        const bool branch_taken_0x31d4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4FCu;
        // 0x31d500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4fc) {
            ctx->pc = 0x31D534u;
            goto label_31d534;
        }
    }
    ctx->pc = 0x31D504u;
label_31d504:
    // 0x31d504: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31d504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31d508: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d50c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D50Cu;
    SET_GPR_U32(ctx, 31, 0x31D514u);
    ctx->pc = 0x31D510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D50Cu;
    // 0x31d510: 0x24a54490  addiu       $a1, $a1, 0x4490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D50Cu, 0x31D514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D514u;
label_31d514:
    // 0x31d514: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d518: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D518u;
    {
        const bool branch_taken_0x31d518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D518u;
        // 0x31d51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d518) {
            ctx->pc = 0x31D530u;
            goto label_31d530;
        }
    }
    ctx->pc = 0x31D520u;
    // 0x31d520: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31d520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d524: 0x26660004  addiu       $a2, $s3, 0x4
    ctx->pc = 0x31d524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x31d528: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31D528u;
    SET_GPR_U32(ctx, 31, 0x31D530u);
    ctx->pc = 0x31D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D528u;
    // 0x31d52c: 0x26670008  addiu       $a3, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31D528u, 0x31D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D530u;
label_31d530:
    // 0x31d530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d534:
    // 0x31d534: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31D534u;
    SET_GPR_U32(ctx, 31, 0x31D53Cu);
    ctx->pc = 0x31D538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D534u;
    // 0x31d538: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31D534u, 0x31D53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D53Cu;
label_31d53c:
    // 0x31d53c: 0x1440fe4c  bnez        $v0, . + 4 + (-0x1B4 << 2)
    ctx->pc = 0x31D53Cu;
    {
        const bool branch_taken_0x31d53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D53Cu;
        // 0x31d540: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d53c) {
            ctx->pc = 0x31CE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ce70;
        }
    }
    ctx->pc = 0x31D544u;
    // 0x31d544: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d548: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31D548u;
    SET_GPR_U32(ctx, 31, 0x31D550u);
    ctx->pc = 0x31D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D548u;
    // 0x31d54c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31D548u, 0x31D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D550u;
label_31d550:
    // 0x31d550: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31d550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d554: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31d554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31d558: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31d558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d55c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31d55cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31d560: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31d560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d564: 0x3e00008  jr          $ra
    ctx->pc = 0x31D564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D564u;
        // 0x31d568: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D56Cu;
    // 0x31d56c: 0x0  nop
    ctx->pc = 0x31d56cu;
    // NOP
    ctx->pc = 0x31d570u;
}
