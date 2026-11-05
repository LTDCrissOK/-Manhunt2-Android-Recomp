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

// Function: sub_0016CF68
// Address: 0x16cf68 - 0x16d208
void sub_0016CF68_0x16cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CF68_0x16cf68");
#endif

    switch (ctx->pc) {
        case 0x16cf68u: goto label_16cf68;
        case 0x16cf6cu: goto label_16cf6c;
        case 0x16cf70u: goto label_16cf70;
        case 0x16cf74u: goto label_16cf74;
        case 0x16cf78u: goto label_16cf78;
        case 0x16cf7cu: goto label_16cf7c;
        case 0x16cf80u: goto label_16cf80;
        case 0x16cf84u: goto label_16cf84;
        case 0x16cf88u: goto label_16cf88;
        case 0x16cf8cu: goto label_16cf8c;
        case 0x16cf90u: goto label_16cf90;
        case 0x16cf94u: goto label_16cf94;
        case 0x16cf98u: goto label_16cf98;
        case 0x16cf9cu: goto label_16cf9c;
        case 0x16cfa0u: goto label_16cfa0;
        case 0x16cfa4u: goto label_16cfa4;
        case 0x16cfa8u: goto label_16cfa8;
        case 0x16cfacu: goto label_16cfac;
        case 0x16cfb0u: goto label_16cfb0;
        case 0x16cfb4u: goto label_16cfb4;
        case 0x16cfb8u: goto label_16cfb8;
        case 0x16cfbcu: goto label_16cfbc;
        case 0x16cfc0u: goto label_16cfc0;
        case 0x16cfc4u: goto label_16cfc4;
        case 0x16cfc8u: goto label_16cfc8;
        case 0x16cfccu: goto label_16cfcc;
        case 0x16cfd0u: goto label_16cfd0;
        case 0x16cfd4u: goto label_16cfd4;
        case 0x16cfd8u: goto label_16cfd8;
        case 0x16cfdcu: goto label_16cfdc;
        case 0x16cfe0u: goto label_16cfe0;
        case 0x16cfe4u: goto label_16cfe4;
        case 0x16cfe8u: goto label_16cfe8;
        case 0x16cfecu: goto label_16cfec;
        case 0x16cff0u: goto label_16cff0;
        case 0x16cff4u: goto label_16cff4;
        case 0x16cff8u: goto label_16cff8;
        case 0x16cffcu: goto label_16cffc;
        case 0x16d000u: goto label_16d000;
        case 0x16d004u: goto label_16d004;
        case 0x16d008u: goto label_16d008;
        case 0x16d00cu: goto label_16d00c;
        case 0x16d010u: goto label_16d010;
        case 0x16d014u: goto label_16d014;
        case 0x16d018u: goto label_16d018;
        case 0x16d01cu: goto label_16d01c;
        case 0x16d020u: goto label_16d020;
        case 0x16d024u: goto label_16d024;
        case 0x16d028u: goto label_16d028;
        case 0x16d02cu: goto label_16d02c;
        case 0x16d030u: goto label_16d030;
        case 0x16d034u: goto label_16d034;
        case 0x16d038u: goto label_16d038;
        case 0x16d03cu: goto label_16d03c;
        case 0x16d040u: goto label_16d040;
        case 0x16d044u: goto label_16d044;
        case 0x16d048u: goto label_16d048;
        case 0x16d04cu: goto label_16d04c;
        case 0x16d050u: goto label_16d050;
        case 0x16d054u: goto label_16d054;
        case 0x16d058u: goto label_16d058;
        case 0x16d05cu: goto label_16d05c;
        case 0x16d060u: goto label_16d060;
        case 0x16d064u: goto label_16d064;
        case 0x16d068u: goto label_16d068;
        case 0x16d06cu: goto label_16d06c;
        case 0x16d070u: goto label_16d070;
        case 0x16d074u: goto label_16d074;
        case 0x16d078u: goto label_16d078;
        case 0x16d07cu: goto label_16d07c;
        case 0x16d080u: goto label_16d080;
        case 0x16d084u: goto label_16d084;
        case 0x16d088u: goto label_16d088;
        case 0x16d08cu: goto label_16d08c;
        case 0x16d090u: goto label_16d090;
        case 0x16d094u: goto label_16d094;
        case 0x16d098u: goto label_16d098;
        case 0x16d09cu: goto label_16d09c;
        case 0x16d0a0u: goto label_16d0a0;
        case 0x16d0a4u: goto label_16d0a4;
        case 0x16d0a8u: goto label_16d0a8;
        case 0x16d0acu: goto label_16d0ac;
        case 0x16d0b0u: goto label_16d0b0;
        case 0x16d0b4u: goto label_16d0b4;
        case 0x16d0b8u: goto label_16d0b8;
        case 0x16d0bcu: goto label_16d0bc;
        case 0x16d0c0u: goto label_16d0c0;
        case 0x16d0c4u: goto label_16d0c4;
        case 0x16d0c8u: goto label_16d0c8;
        case 0x16d0ccu: goto label_16d0cc;
        case 0x16d0d0u: goto label_16d0d0;
        case 0x16d0d4u: goto label_16d0d4;
        case 0x16d0d8u: goto label_16d0d8;
        case 0x16d0dcu: goto label_16d0dc;
        case 0x16d0e0u: goto label_16d0e0;
        case 0x16d0e4u: goto label_16d0e4;
        case 0x16d0e8u: goto label_16d0e8;
        case 0x16d0ecu: goto label_16d0ec;
        case 0x16d0f0u: goto label_16d0f0;
        case 0x16d0f4u: goto label_16d0f4;
        case 0x16d0f8u: goto label_16d0f8;
        case 0x16d0fcu: goto label_16d0fc;
        case 0x16d100u: goto label_16d100;
        case 0x16d104u: goto label_16d104;
        case 0x16d108u: goto label_16d108;
        case 0x16d10cu: goto label_16d10c;
        case 0x16d110u: goto label_16d110;
        case 0x16d114u: goto label_16d114;
        case 0x16d118u: goto label_16d118;
        case 0x16d11cu: goto label_16d11c;
        case 0x16d120u: goto label_16d120;
        case 0x16d124u: goto label_16d124;
        case 0x16d128u: goto label_16d128;
        case 0x16d12cu: goto label_16d12c;
        case 0x16d130u: goto label_16d130;
        case 0x16d134u: goto label_16d134;
        case 0x16d138u: goto label_16d138;
        case 0x16d13cu: goto label_16d13c;
        case 0x16d140u: goto label_16d140;
        case 0x16d144u: goto label_16d144;
        case 0x16d148u: goto label_16d148;
        case 0x16d14cu: goto label_16d14c;
        case 0x16d150u: goto label_16d150;
        case 0x16d154u: goto label_16d154;
        case 0x16d158u: goto label_16d158;
        case 0x16d15cu: goto label_16d15c;
        case 0x16d160u: goto label_16d160;
        case 0x16d164u: goto label_16d164;
        case 0x16d168u: goto label_16d168;
        case 0x16d16cu: goto label_16d16c;
        case 0x16d170u: goto label_16d170;
        case 0x16d174u: goto label_16d174;
        case 0x16d178u: goto label_16d178;
        case 0x16d17cu: goto label_16d17c;
        case 0x16d180u: goto label_16d180;
        case 0x16d184u: goto label_16d184;
        case 0x16d188u: goto label_16d188;
        case 0x16d18cu: goto label_16d18c;
        case 0x16d190u: goto label_16d190;
        case 0x16d194u: goto label_16d194;
        case 0x16d198u: goto label_16d198;
        case 0x16d19cu: goto label_16d19c;
        case 0x16d1a0u: goto label_16d1a0;
        case 0x16d1a4u: goto label_16d1a4;
        case 0x16d1a8u: goto label_16d1a8;
        case 0x16d1acu: goto label_16d1ac;
        case 0x16d1b0u: goto label_16d1b0;
        case 0x16d1b4u: goto label_16d1b4;
        case 0x16d1b8u: goto label_16d1b8;
        case 0x16d1bcu: goto label_16d1bc;
        case 0x16d1c0u: goto label_16d1c0;
        case 0x16d1c4u: goto label_16d1c4;
        case 0x16d1c8u: goto label_16d1c8;
        case 0x16d1ccu: goto label_16d1cc;
        case 0x16d1d0u: goto label_16d1d0;
        case 0x16d1d4u: goto label_16d1d4;
        case 0x16d1d8u: goto label_16d1d8;
        case 0x16d1dcu: goto label_16d1dc;
        case 0x16d1e0u: goto label_16d1e0;
        case 0x16d1e4u: goto label_16d1e4;
        case 0x16d1e8u: goto label_16d1e8;
        case 0x16d1ecu: goto label_16d1ec;
        case 0x16d1f0u: goto label_16d1f0;
        case 0x16d1f4u: goto label_16d1f4;
        case 0x16d1f8u: goto label_16d1f8;
        case 0x16d1fcu: goto label_16d1fc;
        case 0x16d200u: goto label_16d200;
        case 0x16d204u: goto label_16d204;
        default: break;
    }

    ctx->pc = 0x16cf68u;

label_16cf68:
    // 0x16cf68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16cf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16cf6c:
    // 0x16cf6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16cf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16cf70:
    // 0x16cf70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16cf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_16cf74:
    // 0x16cf74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16cf74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16cf78:
    // 0x16cf78: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x16cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_16cf7c:
    // 0x16cf7c: 0x5080001d  beql        $a0, $zero, . + 4 + (0x1D << 2)
label_16cf80:
    if (ctx->pc == 0x16CF80u) {
        ctx->pc = 0x16CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF7Cu;
        // 0x16cf80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF84u;
        goto label_16cf84;
    }
    ctx->pc = 0x16CF7Cu;
    {
        const bool branch_taken_0x16cf7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cf7c) {
            ctx->pc = 0x16CF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CF7Cu;
            // 0x16cf80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CFF4u;
            goto label_16cff4;
        }
    }
    ctx->pc = 0x16CF84u;
label_16cf84:
    // 0x16cf84: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16cf88:
    // 0x16cf88: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x16cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16cf8c:
    // 0x16cf8c: 0x40f809  jalr        $v0
label_16cf90:
    if (ctx->pc == 0x16CF90u) {
        ctx->pc = 0x16CF94u;
        goto label_16cf94;
    }
    ctx->pc = 0x16CF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16CF94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CF8Cu, 0x16CF94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CF94u;
label_16cf94:
    // 0x16cf94: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x16cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_16cf98:
    // 0x16cf98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_16cf9c:
    // 0x16cf9c: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x16cf9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_16cfa0:
    // 0x16cfa0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_16cfa4:
    if (ctx->pc == 0x16CFA4u) {
        ctx->pc = 0x16CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFA0u;
        // 0x16cfa4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFA8u;
        goto label_16cfa8;
    }
    ctx->pc = 0x16CFA0u;
    {
        const bool branch_taken_0x16cfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFA0u;
        // 0x16cfa4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfa0) {
            ctx->pc = 0x16CFE8u;
            goto label_16cfe8;
        }
    }
    ctx->pc = 0x16CFA8u;
label_16cfa8:
    // 0x16cfa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16cfac:
    // 0x16cfac: 0x2442f0e0  addiu       $v0, $v0, -0xF20
    ctx->pc = 0x16cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
label_16cfb0:
    // 0x16cfb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16cfb4:
    // 0x16cfb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16cfb8:
    // 0x16cfb8: 0x800008  jr          $a0
label_16cfbc:
    if (ctx->pc == 0x16CFBCu) {
        ctx->pc = 0x16CFC0u;
        goto label_16cfc0;
    }
    ctx->pc = 0x16CFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CFC0u: goto label_16cfc0;
            case 0x16CFD8u: goto label_16cfd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CFB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16CFC0u;
label_16cfc0:
    // 0x16cfc0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16cfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_16cfc4:
    // 0x16cfc4: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x16cfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_16cfc8:
    // 0x16cfc8: 0xc041fec  jal         func_107FB0
label_16cfcc:
    if (ctx->pc == 0x16CFCCu) {
        ctx->pc = 0x16CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFC8u;
        // 0x16cfcc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFD0u;
        goto label_16cfd0;
    }
    ctx->pc = 0x16CFC8u;
    SET_GPR_U32(ctx, 31, 0x16CFD0u);
    ctx->pc = 0x16CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CFC8u;
    // 0x16cfcc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107FB0u, 0x16CFC8u, 0x16CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFD0u;
label_16cfd0:
    // 0x16cfd0: 0x10000005  b           . + 4 + (0x5 << 2)
label_16cfd4:
    if (ctx->pc == 0x16CFD4u) {
        ctx->pc = 0x16CFD8u;
        goto label_16cfd8;
    }
    ctx->pc = 0x16CFD0u;
    {
        const bool branch_taken_0x16cfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cfd0) {
            ctx->pc = 0x16CFE8u;
            goto label_16cfe8;
        }
    }
    ctx->pc = 0x16CFD8u;
label_16cfd8:
    // 0x16cfd8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_16cfdc:
    // 0x16cfdc: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x16cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_16cfe0:
    // 0x16cfe0: 0xc041ff8  jal         func_107FE0
label_16cfe4:
    if (ctx->pc == 0x16CFE4u) {
        ctx->pc = 0x16CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFE0u;
        // 0x16cfe4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFE8u;
        goto label_16cfe8;
    }
    ctx->pc = 0x16CFE0u;
    SET_GPR_U32(ctx, 31, 0x16CFE8u);
    ctx->pc = 0x16CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CFE0u;
    // 0x16cfe4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107FE0u, 0x16CFE0u, 0x16CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFE8u;
label_16cfe8:
    // 0x16cfe8: 0xc05b3d6  jal         func_16CF58
label_16cfec:
    if (ctx->pc == 0x16CFECu) {
        ctx->pc = 0x16CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFE8u;
        // 0x16cfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFF0u;
        goto label_16cff0;
    }
    ctx->pc = 0x16CFE8u;
    SET_GPR_U32(ctx, 31, 0x16CFF0u);
    ctx->pc = 0x16CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CFE8u;
    // 0x16cfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF58u, 0x16CFE8u, 0x16CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFF0u;
label_16cff0:
    // 0x16cff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16cff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16cff4:
    // 0x16cff4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16cff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16cff8:
    // 0x16cff8: 0x3e00008  jr          $ra
label_16cffc:
    if (ctx->pc == 0x16CFFCu) {
        ctx->pc = 0x16CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFF8u;
        // 0x16cffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D000u;
        goto label_16d000;
    }
    ctx->pc = 0x16CFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFF8u;
        // 0x16cffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D000u;
label_16d000:
    // 0x16d000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16d004:
    // 0x16d004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16d008:
    // 0x16d008: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x16d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_16d00c:
    // 0x16d00c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x16d00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_16d010:
    // 0x16d010: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_16d014:
    if (ctx->pc == 0x16D014u) {
        ctx->pc = 0x16D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D010u;
        // 0x16d014: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D018u;
        goto label_16d018;
    }
    ctx->pc = 0x16D010u;
    {
        const bool branch_taken_0x16d010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D010u;
        // 0x16d014: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d010) {
            ctx->pc = 0x16D1E0u;
            goto label_16d1e0;
        }
    }
    ctx->pc = 0x16D018u;
label_16d018:
    // 0x16d018: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16d018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_16d01c:
    // 0x16d01c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16d020:
    // 0x16d020: 0x2442f1f0  addiu       $v0, $v0, -0xE10
    ctx->pc = 0x16d020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963696));
label_16d024:
    // 0x16d024: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16d028:
    // 0x16d028: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16d028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16d02c:
    // 0x16d02c: 0x800008  jr          $a0
label_16d030:
    if (ctx->pc == 0x16D030u) {
        ctx->pc = 0x16D034u;
        goto label_16d034;
    }
    ctx->pc = 0x16D02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D034u: goto label_16d034;
            case 0x16D044u: goto label_16d044;
            case 0x16D068u: goto label_16d068;
            case 0x16D094u: goto label_16d094;
            case 0x16D0C8u: goto label_16d0c8;
            case 0x16D0F4u: goto label_16d0f4;
            case 0x16D110u: goto label_16d110;
            case 0x16D134u: goto label_16d134;
            case 0x16D160u: goto label_16d160;
            case 0x16D184u: goto label_16d184;
            case 0x16D1A8u: goto label_16d1a8;
            case 0x16D1C4u: goto label_16d1c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D02Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16D034u;
label_16d034:
    // 0x16d034: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16d034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_16d038:
    // 0x16d038: 0x2443f110  addiu       $v1, $v0, -0xEF0
    ctx->pc = 0x16d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963472));
label_16d03c:
    // 0x16d03c: 0x10000030  b           . + 4 + (0x30 << 2)
label_16d040:
    if (ctx->pc == 0x16D040u) {
        ctx->pc = 0x16D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D03Cu;
        // 0x16d040: 0x8c44f110  lw          $a0, -0xEF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D044u;
        goto label_16d044;
    }
    ctx->pc = 0x16D03Cu;
    {
        const bool branch_taken_0x16d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D03Cu;
        // 0x16d040: 0x8c44f110  lw          $a0, -0xEF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d03c) {
            ctx->pc = 0x16D100u;
            goto label_16d100;
        }
    }
    ctx->pc = 0x16D044u;
label_16d044:
    // 0x16d044: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_16d048:
    // 0x16d048: 0x2443f118  addiu       $v1, $v0, -0xEE8
    ctx->pc = 0x16d048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963480));
label_16d04c:
    // 0x16d04c: 0x8c44f118  lw          $a0, -0xEE8($v0)
    ctx->pc = 0x16d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963480)));
label_16d050:
    // 0x16d050: 0x90650006  lbu         $a1, 0x6($v1)
    ctx->pc = 0x16d050u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
label_16d054:
    // 0x16d054: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x16d054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_16d058:
    // 0x16d058: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16d058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_16d05c:
    // 0x16d05c: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x16d05cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
label_16d060:
    // 0x16d060: 0x10000062  b           . + 4 + (0x62 << 2)
label_16d064:
    if (ctx->pc == 0x16D064u) {
        ctx->pc = 0x16D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D060u;
        // 0x16d064: 0xa3a50006  sb          $a1, 0x6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D068u;
        goto label_16d068;
    }
    ctx->pc = 0x16D060u;
    {
        const bool branch_taken_0x16d060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D060u;
        // 0x16d064: 0xa3a50006  sb          $a1, 0x6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d060) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D068u;
label_16d068:
    // 0x16d068: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x16d068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_16d06c:
    // 0x16d06c: 0x2462f120  addiu       $v0, $v1, -0xEE0
    ctx->pc = 0x16d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963488));
label_16d070:
    // 0x16d070: 0xdc65f120  ld          $a1, -0xEE0($v1)
    ctx->pc = 0x16d070u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294963488)));
label_16d074:
    // 0x16d074: 0x94460014  lhu         $a2, 0x14($v0)
    ctx->pc = 0x16d074u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_16d078:
    // 0x16d078: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x16d078u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_16d07c:
    // 0x16d07c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x16d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_16d080:
    // 0x16d080: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x16d080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_16d084:
    // 0x16d084: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x16d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_16d088:
    // 0x16d088: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16d088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16d08c:
    // 0x16d08c: 0x10000057  b           . + 4 + (0x57 << 2)
label_16d090:
    if (ctx->pc == 0x16D090u) {
        ctx->pc = 0x16D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D08Cu;
        // 0x16d090: 0xa7a60014  sh          $a2, 0x14($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D094u;
        goto label_16d094;
    }
    ctx->pc = 0x16D08Cu;
    {
        const bool branch_taken_0x16d08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D08Cu;
        // 0x16d090: 0xa7a60014  sh          $a2, 0x14($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d08c) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D094u;
label_16d094:
    // 0x16d094: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x16d094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_16d098:
    // 0x16d098: 0x2462f138  addiu       $v0, $v1, -0xEC8
    ctx->pc = 0x16d098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963512));
label_16d09c:
    // 0x16d09c: 0xdc66f138  ld          $a2, -0xEC8($v1)
    ctx->pc = 0x16d09cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 4294963512)));
label_16d0a0:
    // 0x16d0a0: 0x90470016  lbu         $a3, 0x16($v0)
    ctx->pc = 0x16d0a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
label_16d0a4:
    // 0x16d0a4: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x16d0a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_16d0a8:
    // 0x16d0a8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x16d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_16d0ac:
    // 0x16d0ac: 0x94450014  lhu         $a1, 0x14($v0)
    ctx->pc = 0x16d0acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_16d0b0:
    // 0x16d0b0: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x16d0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_16d0b4:
    // 0x16d0b4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x16d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_16d0b8:
    // 0x16d0b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16d0bc:
    // 0x16d0bc: 0xa7a50014  sh          $a1, 0x14($sp)
    ctx->pc = 0x16d0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 5));
label_16d0c0:
    // 0x16d0c0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_16d0c4:
    if (ctx->pc == 0x16D0C4u) {
        ctx->pc = 0x16D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0C0u;
        // 0x16d0c4: 0xa3a70016  sb          $a3, 0x16($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0C8u;
        goto label_16d0c8;
    }
    ctx->pc = 0x16D0C0u;
    {
        const bool branch_taken_0x16d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0C0u;
        // 0x16d0c4: 0xa3a70016  sb          $a3, 0x16($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0c0) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D0C8u;
label_16d0c8:
    // 0x16d0c8: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x16d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_16d0cc:
    // 0x16d0cc: 0x2462f150  addiu       $v0, $v1, -0xEB0
    ctx->pc = 0x16d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963536));
label_16d0d0:
    // 0x16d0d0: 0xdc65f150  ld          $a1, -0xEB0($v1)
    ctx->pc = 0x16d0d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294963536)));
label_16d0d4:
    // 0x16d0d4: 0x90460018  lbu         $a2, 0x18($v0)
    ctx->pc = 0x16d0d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_16d0d8:
    // 0x16d0d8: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x16d0d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_16d0dc:
    // 0x16d0dc: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x16d0dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_16d0e0:
    // 0x16d0e0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x16d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_16d0e4:
    // 0x16d0e4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x16d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_16d0e8:
    // 0x16d0e8: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x16d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_16d0ec:
    // 0x16d0ec: 0x1000003f  b           . + 4 + (0x3F << 2)
label_16d0f0:
    if (ctx->pc == 0x16D0F0u) {
        ctx->pc = 0x16D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0ECu;
        // 0x16d0f0: 0xa3a60018  sb          $a2, 0x18($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0F4u;
        goto label_16d0f4;
    }
    ctx->pc = 0x16D0ECu;
    {
        const bool branch_taken_0x16d0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0ECu;
        // 0x16d0f0: 0xa3a60018  sb          $a2, 0x18($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0ec) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D0F4u;
label_16d0f4:
    // 0x16d0f4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_16d0f8:
    // 0x16d0f8: 0x2443f170  addiu       $v1, $v0, -0xE90
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
label_16d0fc:
    // 0x16d0fc: 0x8c44f170  lw          $a0, -0xE90($v0)
    ctx->pc = 0x16d0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963568)));
label_16d100:
    // 0x16d100: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x16d100u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_16d104:
    // 0x16d104: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16d104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_16d108:
    // 0x16d108: 0x10000038  b           . + 4 + (0x38 << 2)
label_16d10c:
    if (ctx->pc == 0x16D10Cu) {
        ctx->pc = 0x16D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D108u;
        // 0x16d10c: 0xa3a50004  sb          $a1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D110u;
        goto label_16d110;
    }
    ctx->pc = 0x16D108u;
    {
        const bool branch_taken_0x16d108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D108u;
        // 0x16d10c: 0xa3a50004  sb          $a1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d108) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D110u;
label_16d110:
    // 0x16d110: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16d110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_16d114:
    // 0x16d114: 0x2443f178  addiu       $v1, $v0, -0xE88
    ctx->pc = 0x16d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963576));
label_16d118:
    // 0x16d118: 0xdc44f178  ld          $a0, -0xE88($v0)
    ctx->pc = 0x16d118u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294963576)));
label_16d11c:
    // 0x16d11c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x16d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_16d120:
    // 0x16d120: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x16d120u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_16d124:
    // 0x16d124: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x16d124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_16d128:
    // 0x16d128: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x16d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_16d12c:
    // 0x16d12c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_16d130:
    if (ctx->pc == 0x16D130u) {
        ctx->pc = 0x16D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D12Cu;
        // 0x16d130: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D134u;
        goto label_16d134;
    }
    ctx->pc = 0x16D12Cu;
    {
        const bool branch_taken_0x16d12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D12Cu;
        // 0x16d130: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d12c) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D134u;
label_16d134:
    // 0x16d134: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_16d138:
    // 0x16d138: 0x2462f190  addiu       $v0, $v1, -0xE70
    ctx->pc = 0x16d138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
label_16d13c:
    // 0x16d13c: 0xdc65f190  ld          $a1, -0xE70($v1)
    ctx->pc = 0x16d13cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294963600)));
label_16d140:
    // 0x16d140: 0x90460014  lbu         $a2, 0x14($v0)
    ctx->pc = 0x16d140u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_16d144:
    // 0x16d144: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x16d144u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_16d148:
    // 0x16d148: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x16d148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_16d14c:
    // 0x16d14c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x16d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_16d150:
    // 0x16d150: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x16d150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_16d154:
    // 0x16d154: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16d154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16d158:
    // 0x16d158: 0x10000024  b           . + 4 + (0x24 << 2)
label_16d15c:
    if (ctx->pc == 0x16D15Cu) {
        ctx->pc = 0x16D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D158u;
        // 0x16d15c: 0xa3a60014  sb          $a2, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D160u;
        goto label_16d160;
    }
    ctx->pc = 0x16D158u;
    {
        const bool branch_taken_0x16d158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D158u;
        // 0x16d15c: 0xa3a60014  sb          $a2, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d158) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D160u;
label_16d160:
    // 0x16d160: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16d160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_16d164:
    // 0x16d164: 0x2443f1a8  addiu       $v1, $v0, -0xE58
    ctx->pc = 0x16d164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963624));
label_16d168:
    // 0x16d168: 0xdc44f1a8  ld          $a0, -0xE58($v0)
    ctx->pc = 0x16d168u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294963624)));
label_16d16c:
    // 0x16d16c: 0x9065000c  lbu         $a1, 0xC($v1)
    ctx->pc = 0x16d16cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
label_16d170:
    // 0x16d170: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16d174:
    // 0x16d174: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x16d174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_16d178:
    // 0x16d178: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x16d178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_16d17c:
    // 0x16d17c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_16d180:
    if (ctx->pc == 0x16D180u) {
        ctx->pc = 0x16D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D17Cu;
        // 0x16d180: 0xa3a5000c  sb          $a1, 0xC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D184u;
        goto label_16d184;
    }
    ctx->pc = 0x16D17Cu;
    {
        const bool branch_taken_0x16d17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D17Cu;
        // 0x16d180: 0xa3a5000c  sb          $a1, 0xC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d17c) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D184u;
label_16d184:
    // 0x16d184: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16d184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_16d188:
    // 0x16d188: 0x2443f1b8  addiu       $v1, $v0, -0xE48
    ctx->pc = 0x16d188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963640));
label_16d18c:
    // 0x16d18c: 0xdc44f1b8  ld          $a0, -0xE48($v0)
    ctx->pc = 0x16d18cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294963640)));
label_16d190:
    // 0x16d190: 0x9065000a  lbu         $a1, 0xA($v1)
    ctx->pc = 0x16d190u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
label_16d194:
    // 0x16d194: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x16d194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_16d198:
    // 0x16d198: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x16d198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_16d19c:
    // 0x16d19c: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x16d19cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
label_16d1a0:
    // 0x16d1a0: 0x10000012  b           . + 4 + (0x12 << 2)
label_16d1a4:
    if (ctx->pc == 0x16D1A4u) {
        ctx->pc = 0x16D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1A0u;
        // 0x16d1a4: 0xa3a5000a  sb          $a1, 0xA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1A8u;
        goto label_16d1a8;
    }
    ctx->pc = 0x16D1A0u;
    {
        const bool branch_taken_0x16d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1A0u;
        // 0x16d1a4: 0xa3a5000a  sb          $a1, 0xA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1a0) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D1A8u;
label_16d1a8:
    // 0x16d1a8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_16d1ac:
    // 0x16d1ac: 0x2443f1c8  addiu       $v1, $v0, -0xE38
    ctx->pc = 0x16d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963656));
label_16d1b0:
    // 0x16d1b0: 0x8c44f1c8  lw          $a0, -0xE38($v0)
    ctx->pc = 0x16d1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963656)));
label_16d1b4:
    // 0x16d1b4: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x16d1b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_16d1b8:
    // 0x16d1b8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_16d1bc:
    // 0x16d1bc: 0x1000000b  b           . + 4 + (0xB << 2)
label_16d1c0:
    if (ctx->pc == 0x16D1C0u) {
        ctx->pc = 0x16D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1BCu;
        // 0x16d1c0: 0xa7a50004  sh          $a1, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1C4u;
        goto label_16d1c4;
    }
    ctx->pc = 0x16D1BCu;
    {
        const bool branch_taken_0x16d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1BCu;
        // 0x16d1c0: 0xa7a50004  sh          $a1, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1bc) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D1C4u;
label_16d1c4:
    // 0x16d1c4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_16d1c8:
    // 0x16d1c8: 0x2443f1d0  addiu       $v1, $v0, -0xE30
    ctx->pc = 0x16d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963664));
label_16d1cc:
    // 0x16d1cc: 0xdc44f1d0  ld          $a0, -0xE30($v0)
    ctx->pc = 0x16d1ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294963664)));
label_16d1d0:
    // 0x16d1d0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16d1d4:
    // 0x16d1d4: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x16d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_16d1d8:
    // 0x16d1d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_16d1dc:
    if (ctx->pc == 0x16D1DCu) {
        ctx->pc = 0x16D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1D8u;
        // 0x16d1dc: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1E0u;
        goto label_16d1e0;
    }
    ctx->pc = 0x16D1D8u;
    {
        const bool branch_taken_0x16d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1D8u;
        // 0x16d1dc: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1d8) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D1E0u;
label_16d1e0:
    // 0x16d1e0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_16d1e4:
    // 0x16d1e4: 0xdc43f1e0  ld          $v1, -0xE20($v0)
    ctx->pc = 0x16d1e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294963680)));
label_16d1e8:
    // 0x16d1e8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x16d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_16d1ec:
    // 0x16d1ec: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x16d1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16d1f0:
    // 0x16d1f0: 0xc0efbe8  jal         func_3BEFA0
label_16d1f4:
    if (ctx->pc == 0x16D1F4u) {
        ctx->pc = 0x16D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1F0u;
        // 0x16d1f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1F8u;
        goto label_16d1f8;
    }
    ctx->pc = 0x16D1F0u;
    SET_GPR_U32(ctx, 31, 0x16D1F8u);
    ctx->pc = 0x16D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1F0u;
    // 0x16d1f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x16D1F0u, 0x16D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1F8u;
label_16d1f8:
    // 0x16d1f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16d1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16d1fc:
    // 0x16d1fc: 0x3e00008  jr          $ra
label_16d200:
    if (ctx->pc == 0x16D200u) {
        ctx->pc = 0x16D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1FCu;
        // 0x16d200: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D204u;
        goto label_16d204;
    }
    ctx->pc = 0x16D1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1FCu;
        // 0x16d200: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D204u;
label_16d204:
    // 0x16d204: 0x0  nop
    ctx->pc = 0x16d204u;
    // NOP
    ctx->pc = 0x16d208u;
}
