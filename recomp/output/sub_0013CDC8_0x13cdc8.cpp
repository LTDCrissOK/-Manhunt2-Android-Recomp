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

// Function: sub_0013CDC8
// Address: 0x13cdc8 - 0x13d028
void sub_0013CDC8_0x13cdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CDC8_0x13cdc8");
#endif

    switch (ctx->pc) {
        case 0x13cdc8u: goto label_13cdc8;
        case 0x13cdccu: goto label_13cdcc;
        case 0x13cdd0u: goto label_13cdd0;
        case 0x13cdd4u: goto label_13cdd4;
        case 0x13cdd8u: goto label_13cdd8;
        case 0x13cddcu: goto label_13cddc;
        case 0x13cde0u: goto label_13cde0;
        case 0x13cde4u: goto label_13cde4;
        case 0x13cde8u: goto label_13cde8;
        case 0x13cdecu: goto label_13cdec;
        case 0x13cdf0u: goto label_13cdf0;
        case 0x13cdf4u: goto label_13cdf4;
        case 0x13cdf8u: goto label_13cdf8;
        case 0x13cdfcu: goto label_13cdfc;
        case 0x13ce00u: goto label_13ce00;
        case 0x13ce04u: goto label_13ce04;
        case 0x13ce08u: goto label_13ce08;
        case 0x13ce0cu: goto label_13ce0c;
        case 0x13ce10u: goto label_13ce10;
        case 0x13ce14u: goto label_13ce14;
        case 0x13ce18u: goto label_13ce18;
        case 0x13ce1cu: goto label_13ce1c;
        case 0x13ce20u: goto label_13ce20;
        case 0x13ce24u: goto label_13ce24;
        case 0x13ce28u: goto label_13ce28;
        case 0x13ce2cu: goto label_13ce2c;
        case 0x13ce30u: goto label_13ce30;
        case 0x13ce34u: goto label_13ce34;
        case 0x13ce38u: goto label_13ce38;
        case 0x13ce3cu: goto label_13ce3c;
        case 0x13ce40u: goto label_13ce40;
        case 0x13ce44u: goto label_13ce44;
        case 0x13ce48u: goto label_13ce48;
        case 0x13ce4cu: goto label_13ce4c;
        case 0x13ce50u: goto label_13ce50;
        case 0x13ce54u: goto label_13ce54;
        case 0x13ce58u: goto label_13ce58;
        case 0x13ce5cu: goto label_13ce5c;
        case 0x13ce60u: goto label_13ce60;
        case 0x13ce64u: goto label_13ce64;
        case 0x13ce68u: goto label_13ce68;
        case 0x13ce6cu: goto label_13ce6c;
        case 0x13ce70u: goto label_13ce70;
        case 0x13ce74u: goto label_13ce74;
        case 0x13ce78u: goto label_13ce78;
        case 0x13ce7cu: goto label_13ce7c;
        case 0x13ce80u: goto label_13ce80;
        case 0x13ce84u: goto label_13ce84;
        case 0x13ce88u: goto label_13ce88;
        case 0x13ce8cu: goto label_13ce8c;
        case 0x13ce90u: goto label_13ce90;
        case 0x13ce94u: goto label_13ce94;
        case 0x13ce98u: goto label_13ce98;
        case 0x13ce9cu: goto label_13ce9c;
        case 0x13cea0u: goto label_13cea0;
        case 0x13cea4u: goto label_13cea4;
        case 0x13cea8u: goto label_13cea8;
        case 0x13ceacu: goto label_13ceac;
        case 0x13ceb0u: goto label_13ceb0;
        case 0x13ceb4u: goto label_13ceb4;
        case 0x13ceb8u: goto label_13ceb8;
        case 0x13cebcu: goto label_13cebc;
        case 0x13cec0u: goto label_13cec0;
        case 0x13cec4u: goto label_13cec4;
        case 0x13cec8u: goto label_13cec8;
        case 0x13ceccu: goto label_13cecc;
        case 0x13ced0u: goto label_13ced0;
        case 0x13ced4u: goto label_13ced4;
        case 0x13ced8u: goto label_13ced8;
        case 0x13cedcu: goto label_13cedc;
        case 0x13cee0u: goto label_13cee0;
        case 0x13cee4u: goto label_13cee4;
        case 0x13cee8u: goto label_13cee8;
        case 0x13ceecu: goto label_13ceec;
        case 0x13cef0u: goto label_13cef0;
        case 0x13cef4u: goto label_13cef4;
        case 0x13cef8u: goto label_13cef8;
        case 0x13cefcu: goto label_13cefc;
        case 0x13cf00u: goto label_13cf00;
        case 0x13cf04u: goto label_13cf04;
        case 0x13cf08u: goto label_13cf08;
        case 0x13cf0cu: goto label_13cf0c;
        case 0x13cf10u: goto label_13cf10;
        case 0x13cf14u: goto label_13cf14;
        case 0x13cf18u: goto label_13cf18;
        case 0x13cf1cu: goto label_13cf1c;
        case 0x13cf20u: goto label_13cf20;
        case 0x13cf24u: goto label_13cf24;
        case 0x13cf28u: goto label_13cf28;
        case 0x13cf2cu: goto label_13cf2c;
        case 0x13cf30u: goto label_13cf30;
        case 0x13cf34u: goto label_13cf34;
        case 0x13cf38u: goto label_13cf38;
        case 0x13cf3cu: goto label_13cf3c;
        case 0x13cf40u: goto label_13cf40;
        case 0x13cf44u: goto label_13cf44;
        case 0x13cf48u: goto label_13cf48;
        case 0x13cf4cu: goto label_13cf4c;
        case 0x13cf50u: goto label_13cf50;
        case 0x13cf54u: goto label_13cf54;
        case 0x13cf58u: goto label_13cf58;
        case 0x13cf5cu: goto label_13cf5c;
        case 0x13cf60u: goto label_13cf60;
        case 0x13cf64u: goto label_13cf64;
        case 0x13cf68u: goto label_13cf68;
        case 0x13cf6cu: goto label_13cf6c;
        case 0x13cf70u: goto label_13cf70;
        case 0x13cf74u: goto label_13cf74;
        case 0x13cf78u: goto label_13cf78;
        case 0x13cf7cu: goto label_13cf7c;
        case 0x13cf80u: goto label_13cf80;
        case 0x13cf84u: goto label_13cf84;
        case 0x13cf88u: goto label_13cf88;
        case 0x13cf8cu: goto label_13cf8c;
        case 0x13cf90u: goto label_13cf90;
        case 0x13cf94u: goto label_13cf94;
        case 0x13cf98u: goto label_13cf98;
        case 0x13cf9cu: goto label_13cf9c;
        case 0x13cfa0u: goto label_13cfa0;
        case 0x13cfa4u: goto label_13cfa4;
        case 0x13cfa8u: goto label_13cfa8;
        case 0x13cfacu: goto label_13cfac;
        case 0x13cfb0u: goto label_13cfb0;
        case 0x13cfb4u: goto label_13cfb4;
        case 0x13cfb8u: goto label_13cfb8;
        case 0x13cfbcu: goto label_13cfbc;
        case 0x13cfc0u: goto label_13cfc0;
        case 0x13cfc4u: goto label_13cfc4;
        case 0x13cfc8u: goto label_13cfc8;
        case 0x13cfccu: goto label_13cfcc;
        case 0x13cfd0u: goto label_13cfd0;
        case 0x13cfd4u: goto label_13cfd4;
        case 0x13cfd8u: goto label_13cfd8;
        case 0x13cfdcu: goto label_13cfdc;
        case 0x13cfe0u: goto label_13cfe0;
        case 0x13cfe4u: goto label_13cfe4;
        case 0x13cfe8u: goto label_13cfe8;
        case 0x13cfecu: goto label_13cfec;
        case 0x13cff0u: goto label_13cff0;
        case 0x13cff4u: goto label_13cff4;
        case 0x13cff8u: goto label_13cff8;
        case 0x13cffcu: goto label_13cffc;
        case 0x13d000u: goto label_13d000;
        case 0x13d004u: goto label_13d004;
        case 0x13d008u: goto label_13d008;
        case 0x13d00cu: goto label_13d00c;
        case 0x13d010u: goto label_13d010;
        case 0x13d014u: goto label_13d014;
        case 0x13d018u: goto label_13d018;
        case 0x13d01cu: goto label_13d01c;
        case 0x13d020u: goto label_13d020;
        case 0x13d024u: goto label_13d024;
        default: break;
    }

    ctx->pc = 0x13cdc8u;

label_13cdc8:
    // 0x13cdc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13cdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13cdcc:
    // 0x13cdcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13cdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13cdd0:
    // 0x13cdd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13cdd4:
    // 0x13cdd4: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x13cdd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_13cdd8:
    // 0x13cdd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13cdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13cddc:
    // 0x13cddc: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x13cddcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_13cde0:
    // 0x13cde0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13cde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13cde4:
    // 0x13cde4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13cde4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13cde8:
    // 0x13cde8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13cde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13cdec:
    // 0x13cdec: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x13cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_13cdf0:
    // 0x13cdf0: 0x8c510228  lw          $s1, 0x228($v0)
    ctx->pc = 0x13cdf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
label_13cdf4:
    // 0x13cdf4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13cdf8:
    // 0x13cdf8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x13cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_13cdfc:
    // 0x13cdfc: 0x40f809  jalr        $v0
label_13ce00:
    if (ctx->pc == 0x13CE00u) {
        ctx->pc = 0x13CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDFCu;
        // 0x13ce00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE04u;
        goto label_13ce04;
    }
    ctx->pc = 0x13CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CE04u);
        ctx->pc = 0x13CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDFCu;
        // 0x13ce00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CDFCu, 0x13CE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CE04u;
label_13ce04:
    // 0x13ce04: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x13ce04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_13ce08:
    // 0x13ce08: 0x8e03022c  lw          $v1, 0x22C($s0)
    ctx->pc = 0x13ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
label_13ce0c:
    // 0x13ce0c: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x13ce0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_13ce10:
    // 0x13ce10: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_13ce14:
    if (ctx->pc == 0x13CE14u) {
        ctx->pc = 0x13CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE10u;
        // 0x13ce14: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE18u;
        goto label_13ce18;
    }
    ctx->pc = 0x13CE10u;
    {
        const bool branch_taken_0x13ce10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE10u;
        // 0x13ce14: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce10) {
            ctx->pc = 0x13CFF0u;
            goto label_13cff0;
        }
    }
    ctx->pc = 0x13CE18u;
label_13ce18:
    // 0x13ce18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13ce1c:
    // 0x13ce1c: 0x2442e6d0  addiu       $v0, $v0, -0x1930
    ctx->pc = 0x13ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960848));
label_13ce20:
    // 0x13ce20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13ce24:
    // 0x13ce24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13ce24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13ce28:
    // 0x13ce28: 0x800008  jr          $a0
label_13ce2c:
    if (ctx->pc == 0x13CE2Cu) {
        ctx->pc = 0x13CE30u;
        goto label_13ce30;
    }
    ctx->pc = 0x13CE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CE30u: goto label_13ce30;
            case 0x13CE48u: goto label_13ce48;
            case 0x13CE60u: goto label_13ce60;
            case 0x13CE78u: goto label_13ce78;
            case 0x13CE90u: goto label_13ce90;
            case 0x13CEA8u: goto label_13cea8;
            case 0x13CEC0u: goto label_13cec0;
            case 0x13CED8u: goto label_13ced8;
            case 0x13CEF0u: goto label_13cef0;
            case 0x13CF08u: goto label_13cf08;
            case 0x13CF20u: goto label_13cf20;
            case 0x13CF38u: goto label_13cf38;
            case 0x13CF50u: goto label_13cf50;
            case 0x13CF68u: goto label_13cf68;
            case 0x13CF80u: goto label_13cf80;
            case 0x13CF98u: goto label_13cf98;
            case 0x13CFB0u: goto label_13cfb0;
            case 0x13CFC8u: goto label_13cfc8;
            case 0x13CFE0u: goto label_13cfe0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CE28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13CE30u;
label_13ce30:
    // 0x13ce30: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13ce34:
    // 0x13ce34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ce34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ce38:
    // 0x13ce38: 0xc041fb0  jal         func_107EC0
label_13ce3c:
    if (ctx->pc == 0x13CE3Cu) {
        ctx->pc = 0x13CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE38u;
        // 0x13ce3c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE40u;
        goto label_13ce40;
    }
    ctx->pc = 0x13CE38u;
    SET_GPR_U32(ctx, 31, 0x13CE40u);
    ctx->pc = 0x13CE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE38u;
    // 0x13ce3c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107EC0u, 0x13CE38u, 0x13CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE40u;
label_13ce40:
    // 0x13ce40: 0x1000006c  b           . + 4 + (0x6C << 2)
label_13ce44:
    if (ctx->pc == 0x13CE44u) {
        ctx->pc = 0x13CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE40u;
        // 0x13ce44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE48u;
        goto label_13ce48;
    }
    ctx->pc = 0x13CE40u;
    {
        const bool branch_taken_0x13ce40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE40u;
        // 0x13ce44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce40) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CE48u;
label_13ce48:
    // 0x13ce48: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13ce4c:
    // 0x13ce4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ce4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ce50:
    // 0x13ce50: 0xc041f14  jal         func_107C50
label_13ce54:
    if (ctx->pc == 0x13CE54u) {
        ctx->pc = 0x13CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE50u;
        // 0x13ce54: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE58u;
        goto label_13ce58;
    }
    ctx->pc = 0x13CE50u;
    SET_GPR_U32(ctx, 31, 0x13CE58u);
    ctx->pc = 0x13CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE50u;
    // 0x13ce54: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C50u, 0x13CE50u, 0x13CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE58u;
label_13ce58:
    // 0x13ce58: 0x10000066  b           . + 4 + (0x66 << 2)
label_13ce5c:
    if (ctx->pc == 0x13CE5Cu) {
        ctx->pc = 0x13CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE58u;
        // 0x13ce5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE60u;
        goto label_13ce60;
    }
    ctx->pc = 0x13CE58u;
    {
        const bool branch_taken_0x13ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE58u;
        // 0x13ce5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce58) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CE60u;
label_13ce60:
    // 0x13ce60: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13ce64:
    // 0x13ce64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ce64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ce68:
    // 0x13ce68: 0xc041f80  jal         func_107E00
label_13ce6c:
    if (ctx->pc == 0x13CE6Cu) {
        ctx->pc = 0x13CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE68u;
        // 0x13ce6c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE70u;
        goto label_13ce70;
    }
    ctx->pc = 0x13CE68u;
    SET_GPR_U32(ctx, 31, 0x13CE70u);
    ctx->pc = 0x13CE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE68u;
    // 0x13ce6c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107E00u, 0x13CE68u, 0x13CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE70u;
label_13ce70:
    // 0x13ce70: 0x10000060  b           . + 4 + (0x60 << 2)
label_13ce74:
    if (ctx->pc == 0x13CE74u) {
        ctx->pc = 0x13CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE70u;
        // 0x13ce74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE78u;
        goto label_13ce78;
    }
    ctx->pc = 0x13CE70u;
    {
        const bool branch_taken_0x13ce70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE70u;
        // 0x13ce74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce70) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CE78u;
label_13ce78:
    // 0x13ce78: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13ce7c:
    // 0x13ce7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ce7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ce80:
    // 0x13ce80: 0xc041f44  jal         func_107D10
label_13ce84:
    if (ctx->pc == 0x13CE84u) {
        ctx->pc = 0x13CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE80u;
        // 0x13ce84: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE88u;
        goto label_13ce88;
    }
    ctx->pc = 0x13CE80u;
    SET_GPR_U32(ctx, 31, 0x13CE88u);
    ctx->pc = 0x13CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE80u;
    // 0x13ce84: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107D10u, 0x13CE80u, 0x13CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE88u;
label_13ce88:
    // 0x13ce88: 0x1000005a  b           . + 4 + (0x5A << 2)
label_13ce8c:
    if (ctx->pc == 0x13CE8Cu) {
        ctx->pc = 0x13CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE88u;
        // 0x13ce8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE90u;
        goto label_13ce90;
    }
    ctx->pc = 0x13CE88u;
    {
        const bool branch_taken_0x13ce88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE88u;
        // 0x13ce8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce88) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CE90u;
label_13ce90:
    // 0x13ce90: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13ce94:
    // 0x13ce94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ce94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ce98:
    // 0x13ce98: 0xc041f20  jal         func_107C80
label_13ce9c:
    if (ctx->pc == 0x13CE9Cu) {
        ctx->pc = 0x13CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE98u;
        // 0x13ce9c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEA0u;
        goto label_13cea0;
    }
    ctx->pc = 0x13CE98u;
    SET_GPR_U32(ctx, 31, 0x13CEA0u);
    ctx->pc = 0x13CE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE98u;
    // 0x13ce9c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C80u, 0x13CE98u, 0x13CEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEA0u;
label_13cea0:
    // 0x13cea0: 0x10000054  b           . + 4 + (0x54 << 2)
label_13cea4:
    if (ctx->pc == 0x13CEA4u) {
        ctx->pc = 0x13CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEA0u;
        // 0x13cea4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEA8u;
        goto label_13cea8;
    }
    ctx->pc = 0x13CEA0u;
    {
        const bool branch_taken_0x13cea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEA0u;
        // 0x13cea4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cea0) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CEA8u;
label_13cea8:
    // 0x13cea8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13ceac:
    // 0x13ceac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ceacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ceb0:
    // 0x13ceb0: 0xc041f50  jal         func_107D40
label_13ceb4:
    if (ctx->pc == 0x13CEB4u) {
        ctx->pc = 0x13CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEB0u;
        // 0x13ceb4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEB8u;
        goto label_13ceb8;
    }
    ctx->pc = 0x13CEB0u;
    SET_GPR_U32(ctx, 31, 0x13CEB8u);
    ctx->pc = 0x13CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEB0u;
    // 0x13ceb4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107D40u, 0x13CEB0u, 0x13CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEB8u;
label_13ceb8:
    // 0x13ceb8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_13cebc:
    if (ctx->pc == 0x13CEBCu) {
        ctx->pc = 0x13CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEB8u;
        // 0x13cebc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEC0u;
        goto label_13cec0;
    }
    ctx->pc = 0x13CEB8u;
    {
        const bool branch_taken_0x13ceb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEB8u;
        // 0x13cebc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ceb8) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CEC0u;
label_13cec0:
    // 0x13cec0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cec4:
    // 0x13cec4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cec8:
    // 0x13cec8: 0xc041f2c  jal         func_107CB0
label_13cecc:
    if (ctx->pc == 0x13CECCu) {
        ctx->pc = 0x13CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEC8u;
        // 0x13cecc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CED0u;
        goto label_13ced0;
    }
    ctx->pc = 0x13CEC8u;
    SET_GPR_U32(ctx, 31, 0x13CED0u);
    ctx->pc = 0x13CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEC8u;
    // 0x13cecc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107CB0u, 0x13CEC8u, 0x13CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CED0u;
label_13ced0:
    // 0x13ced0: 0x10000048  b           . + 4 + (0x48 << 2)
label_13ced4:
    if (ctx->pc == 0x13CED4u) {
        ctx->pc = 0x13CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CED0u;
        // 0x13ced4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CED8u;
        goto label_13ced8;
    }
    ctx->pc = 0x13CED0u;
    {
        const bool branch_taken_0x13ced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CED0u;
        // 0x13ced4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ced0) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CED8u;
label_13ced8:
    // 0x13ced8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cedc:
    // 0x13cedc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cee0:
    // 0x13cee0: 0xc041f38  jal         func_107CE0
label_13cee4:
    if (ctx->pc == 0x13CEE4u) {
        ctx->pc = 0x13CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEE0u;
        // 0x13cee4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEE8u;
        goto label_13cee8;
    }
    ctx->pc = 0x13CEE0u;
    SET_GPR_U32(ctx, 31, 0x13CEE8u);
    ctx->pc = 0x13CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEE0u;
    // 0x13cee4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107CE0u, 0x13CEE0u, 0x13CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEE8u;
label_13cee8:
    // 0x13cee8: 0x10000042  b           . + 4 + (0x42 << 2)
label_13ceec:
    if (ctx->pc == 0x13CEECu) {
        ctx->pc = 0x13CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEE8u;
        // 0x13ceec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEF0u;
        goto label_13cef0;
    }
    ctx->pc = 0x13CEE8u;
    {
        const bool branch_taken_0x13cee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEE8u;
        // 0x13ceec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cee8) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CEF0u;
label_13cef0:
    // 0x13cef0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cef4:
    // 0x13cef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cef8:
    // 0x13cef8: 0xc041fc8  jal         func_107F20
label_13cefc:
    if (ctx->pc == 0x13CEFCu) {
        ctx->pc = 0x13CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEF8u;
        // 0x13cefc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF00u;
        goto label_13cf00;
    }
    ctx->pc = 0x13CEF8u;
    SET_GPR_U32(ctx, 31, 0x13CF00u);
    ctx->pc = 0x13CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEF8u;
    // 0x13cefc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F20u, 0x13CEF8u, 0x13CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF00u;
label_13cf00:
    // 0x13cf00: 0x1000003c  b           . + 4 + (0x3C << 2)
label_13cf04:
    if (ctx->pc == 0x13CF04u) {
        ctx->pc = 0x13CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF00u;
        // 0x13cf04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF08u;
        goto label_13cf08;
    }
    ctx->pc = 0x13CF00u;
    {
        const bool branch_taken_0x13cf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF00u;
        // 0x13cf04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf00) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CF08u;
label_13cf08:
    // 0x13cf08: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cf0c:
    // 0x13cf0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cf10:
    // 0x13cf10: 0xc041fd4  jal         func_107F50
label_13cf14:
    if (ctx->pc == 0x13CF14u) {
        ctx->pc = 0x13CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF10u;
        // 0x13cf14: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF18u;
        goto label_13cf18;
    }
    ctx->pc = 0x13CF10u;
    SET_GPR_U32(ctx, 31, 0x13CF18u);
    ctx->pc = 0x13CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF10u;
    // 0x13cf14: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F50u, 0x13CF10u, 0x13CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF18u;
label_13cf18:
    // 0x13cf18: 0x10000036  b           . + 4 + (0x36 << 2)
label_13cf1c:
    if (ctx->pc == 0x13CF1Cu) {
        ctx->pc = 0x13CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF18u;
        // 0x13cf1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF20u;
        goto label_13cf20;
    }
    ctx->pc = 0x13CF18u;
    {
        const bool branch_taken_0x13cf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF18u;
        // 0x13cf1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf18) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CF20u;
label_13cf20:
    // 0x13cf20: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cf24:
    // 0x13cf24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cf28:
    // 0x13cf28: 0xc041f68  jal         func_107DA0
label_13cf2c:
    if (ctx->pc == 0x13CF2Cu) {
        ctx->pc = 0x13CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF28u;
        // 0x13cf2c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF30u;
        goto label_13cf30;
    }
    ctx->pc = 0x13CF28u;
    SET_GPR_U32(ctx, 31, 0x13CF30u);
    ctx->pc = 0x13CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF28u;
    // 0x13cf2c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107DA0u, 0x13CF28u, 0x13CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF30u;
label_13cf30:
    // 0x13cf30: 0x10000030  b           . + 4 + (0x30 << 2)
label_13cf34:
    if (ctx->pc == 0x13CF34u) {
        ctx->pc = 0x13CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF30u;
        // 0x13cf34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF38u;
        goto label_13cf38;
    }
    ctx->pc = 0x13CF30u;
    {
        const bool branch_taken_0x13cf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF30u;
        // 0x13cf34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf30) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CF38u;
label_13cf38:
    // 0x13cf38: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cf3c:
    // 0x13cf3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cf40:
    // 0x13cf40: 0xc041f74  jal         func_107DD0
label_13cf44:
    if (ctx->pc == 0x13CF44u) {
        ctx->pc = 0x13CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF40u;
        // 0x13cf44: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF48u;
        goto label_13cf48;
    }
    ctx->pc = 0x13CF40u;
    SET_GPR_U32(ctx, 31, 0x13CF48u);
    ctx->pc = 0x13CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF40u;
    // 0x13cf44: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107DD0u, 0x13CF40u, 0x13CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF48u;
label_13cf48:
    // 0x13cf48: 0x1000002a  b           . + 4 + (0x2A << 2)
label_13cf4c:
    if (ctx->pc == 0x13CF4Cu) {
        ctx->pc = 0x13CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF48u;
        // 0x13cf4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF50u;
        goto label_13cf50;
    }
    ctx->pc = 0x13CF48u;
    {
        const bool branch_taken_0x13cf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF48u;
        // 0x13cf4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf48) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CF50u;
label_13cf50:
    // 0x13cf50: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cf54:
    // 0x13cf54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cf58:
    // 0x13cf58: 0xc041f08  jal         func_107C20
label_13cf5c:
    if (ctx->pc == 0x13CF5Cu) {
        ctx->pc = 0x13CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF58u;
        // 0x13cf5c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF60u;
        goto label_13cf60;
    }
    ctx->pc = 0x13CF58u;
    SET_GPR_U32(ctx, 31, 0x13CF60u);
    ctx->pc = 0x13CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF58u;
    // 0x13cf5c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C20u, 0x13CF58u, 0x13CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF60u;
label_13cf60:
    // 0x13cf60: 0x10000024  b           . + 4 + (0x24 << 2)
label_13cf64:
    if (ctx->pc == 0x13CF64u) {
        ctx->pc = 0x13CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF60u;
        // 0x13cf64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF68u;
        goto label_13cf68;
    }
    ctx->pc = 0x13CF60u;
    {
        const bool branch_taken_0x13cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF60u;
        // 0x13cf64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf60) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CF68u;
label_13cf68:
    // 0x13cf68: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cf6c:
    // 0x13cf6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cf70:
    // 0x13cf70: 0xc041f98  jal         func_107E60
label_13cf74:
    if (ctx->pc == 0x13CF74u) {
        ctx->pc = 0x13CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF70u;
        // 0x13cf74: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF78u;
        goto label_13cf78;
    }
    ctx->pc = 0x13CF70u;
    SET_GPR_U32(ctx, 31, 0x13CF78u);
    ctx->pc = 0x13CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF70u;
    // 0x13cf74: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107E60u, 0x13CF70u, 0x13CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF78u;
label_13cf78:
    // 0x13cf78: 0x1000001e  b           . + 4 + (0x1E << 2)
label_13cf7c:
    if (ctx->pc == 0x13CF7Cu) {
        ctx->pc = 0x13CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF78u;
        // 0x13cf7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF80u;
        goto label_13cf80;
    }
    ctx->pc = 0x13CF78u;
    {
        const bool branch_taken_0x13cf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF78u;
        // 0x13cf7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf78) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CF80u;
label_13cf80:
    // 0x13cf80: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cf84:
    // 0x13cf84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cf88:
    // 0x13cf88: 0xc041efc  jal         func_107BF0
label_13cf8c:
    if (ctx->pc == 0x13CF8Cu) {
        ctx->pc = 0x13CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF88u;
        // 0x13cf8c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF90u;
        goto label_13cf90;
    }
    ctx->pc = 0x13CF88u;
    SET_GPR_U32(ctx, 31, 0x13CF90u);
    ctx->pc = 0x13CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF88u;
    // 0x13cf8c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107BF0u, 0x13CF88u, 0x13CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF90u;
label_13cf90:
    // 0x13cf90: 0x10000018  b           . + 4 + (0x18 << 2)
label_13cf94:
    if (ctx->pc == 0x13CF94u) {
        ctx->pc = 0x13CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF90u;
        // 0x13cf94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF98u;
        goto label_13cf98;
    }
    ctx->pc = 0x13CF90u;
    {
        const bool branch_taken_0x13cf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF90u;
        // 0x13cf94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf90) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CF98u;
label_13cf98:
    // 0x13cf98: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cf98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cf9c:
    // 0x13cf9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cf9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cfa0:
    // 0x13cfa0: 0xc041fbc  jal         func_107EF0
label_13cfa4:
    if (ctx->pc == 0x13CFA4u) {
        ctx->pc = 0x13CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFA0u;
        // 0x13cfa4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFA8u;
        goto label_13cfa8;
    }
    ctx->pc = 0x13CFA0u;
    SET_GPR_U32(ctx, 31, 0x13CFA8u);
    ctx->pc = 0x13CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFA0u;
    // 0x13cfa4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107EF0u, 0x13CFA0u, 0x13CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFA8u;
label_13cfa8:
    // 0x13cfa8: 0x10000012  b           . + 4 + (0x12 << 2)
label_13cfac:
    if (ctx->pc == 0x13CFACu) {
        ctx->pc = 0x13CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFA8u;
        // 0x13cfac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFB0u;
        goto label_13cfb0;
    }
    ctx->pc = 0x13CFA8u;
    {
        const bool branch_taken_0x13cfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFA8u;
        // 0x13cfac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cfa8) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CFB0u;
label_13cfb0:
    // 0x13cfb0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cfb4:
    // 0x13cfb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cfb8:
    // 0x13cfb8: 0xc041fa4  jal         func_107E90
label_13cfbc:
    if (ctx->pc == 0x13CFBCu) {
        ctx->pc = 0x13CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFB8u;
        // 0x13cfbc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFC0u;
        goto label_13cfc0;
    }
    ctx->pc = 0x13CFB8u;
    SET_GPR_U32(ctx, 31, 0x13CFC0u);
    ctx->pc = 0x13CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFB8u;
    // 0x13cfbc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107E90u, 0x13CFB8u, 0x13CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFC0u;
label_13cfc0:
    // 0x13cfc0: 0x1000000c  b           . + 4 + (0xC << 2)
label_13cfc4:
    if (ctx->pc == 0x13CFC4u) {
        ctx->pc = 0x13CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFC0u;
        // 0x13cfc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFC8u;
        goto label_13cfc8;
    }
    ctx->pc = 0x13CFC0u;
    {
        const bool branch_taken_0x13cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFC0u;
        // 0x13cfc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cfc0) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CFC8u;
label_13cfc8:
    // 0x13cfc8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cfcc:
    // 0x13cfcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cfd0:
    // 0x13cfd0: 0xc041f5c  jal         func_107D70
label_13cfd4:
    if (ctx->pc == 0x13CFD4u) {
        ctx->pc = 0x13CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFD0u;
        // 0x13cfd4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFD8u;
        goto label_13cfd8;
    }
    ctx->pc = 0x13CFD0u;
    SET_GPR_U32(ctx, 31, 0x13CFD8u);
    ctx->pc = 0x13CFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFD0u;
    // 0x13cfd4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107D70u, 0x13CFD0u, 0x13CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFD8u;
label_13cfd8:
    // 0x13cfd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_13cfdc:
    if (ctx->pc == 0x13CFDCu) {
        ctx->pc = 0x13CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFD8u;
        // 0x13cfdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFE0u;
        goto label_13cfe0;
    }
    ctx->pc = 0x13CFD8u;
    {
        const bool branch_taken_0x13cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFD8u;
        // 0x13cfdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cfd8) {
            ctx->pc = 0x13CFF4u;
            goto label_13cff4;
        }
    }
    ctx->pc = 0x13CFE0u;
label_13cfe0:
    // 0x13cfe0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cfe4:
    // 0x13cfe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cfe8:
    // 0x13cfe8: 0xc041f8c  jal         func_107E30
label_13cfec:
    if (ctx->pc == 0x13CFECu) {
        ctx->pc = 0x13CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFE8u;
        // 0x13cfec: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFF0u;
        goto label_13cff0;
    }
    ctx->pc = 0x13CFE8u;
    SET_GPR_U32(ctx, 31, 0x13CFF0u);
    ctx->pc = 0x13CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFE8u;
    // 0x13cfec: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107E30u, 0x13CFE8u, 0x13CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFF0u;
label_13cff0:
    // 0x13cff0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13cff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13cff4:
    // 0x13cff4: 0xc04f336  jal         func_13CCD8
label_13cff8:
    if (ctx->pc == 0x13CFF8u) {
        ctx->pc = 0x13CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFF4u;
        // 0x13cff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFFCu;
        goto label_13cffc;
    }
    ctx->pc = 0x13CFF4u;
    SET_GPR_U32(ctx, 31, 0x13CFFCu);
    ctx->pc = 0x13CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFF4u;
    // 0x13cff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCD8u, 0x13CFF4u, 0x13CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFFCu;
label_13cffc:
    // 0x13cffc: 0x924202a8  lbu         $v0, 0x2A8($s2)
    ctx->pc = 0x13cffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 680)));
label_13d000:
    // 0x13d000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13d000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d004:
    // 0x13d004: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13d008:
    // 0x13d008: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13d008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13d00c:
    // 0x13d00c: 0xa24202a8  sb          $v0, 0x2A8($s2)
    ctx->pc = 0x13d00cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 680), (uint8_t)GPR_U32(ctx, 2));
label_13d010:
    // 0x13d010: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13d010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13d014:
    // 0x13d014: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13d014u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13d018:
    // 0x13d018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13d01c:
    // 0x13d01c: 0x3e00008  jr          $ra
label_13d020:
    if (ctx->pc == 0x13D020u) {
        ctx->pc = 0x13D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D01Cu;
        // 0x13d020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D024u;
        goto label_13d024;
    }
    ctx->pc = 0x13D01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D01Cu;
        // 0x13d020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D024u;
label_13d024:
    // 0x13d024: 0x0  nop
    ctx->pc = 0x13d024u;
    // NOP
    ctx->pc = 0x13d028u;
}
