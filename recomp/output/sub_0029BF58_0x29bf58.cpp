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

// Function: sub_0029BF58
// Address: 0x29bf58 - 0x29c158
void sub_0029BF58_0x29bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BF58_0x29bf58");
#endif

    switch (ctx->pc) {
        case 0x29bf58u: goto label_29bf58;
        case 0x29bf5cu: goto label_29bf5c;
        case 0x29bf60u: goto label_29bf60;
        case 0x29bf64u: goto label_29bf64;
        case 0x29bf68u: goto label_29bf68;
        case 0x29bf6cu: goto label_29bf6c;
        case 0x29bf70u: goto label_29bf70;
        case 0x29bf74u: goto label_29bf74;
        case 0x29bf78u: goto label_29bf78;
        case 0x29bf7cu: goto label_29bf7c;
        case 0x29bf80u: goto label_29bf80;
        case 0x29bf84u: goto label_29bf84;
        case 0x29bf88u: goto label_29bf88;
        case 0x29bf8cu: goto label_29bf8c;
        case 0x29bf90u: goto label_29bf90;
        case 0x29bf94u: goto label_29bf94;
        case 0x29bf98u: goto label_29bf98;
        case 0x29bf9cu: goto label_29bf9c;
        case 0x29bfa0u: goto label_29bfa0;
        case 0x29bfa4u: goto label_29bfa4;
        case 0x29bfa8u: goto label_29bfa8;
        case 0x29bfacu: goto label_29bfac;
        case 0x29bfb0u: goto label_29bfb0;
        case 0x29bfb4u: goto label_29bfb4;
        case 0x29bfb8u: goto label_29bfb8;
        case 0x29bfbcu: goto label_29bfbc;
        case 0x29bfc0u: goto label_29bfc0;
        case 0x29bfc4u: goto label_29bfc4;
        case 0x29bfc8u: goto label_29bfc8;
        case 0x29bfccu: goto label_29bfcc;
        case 0x29bfd0u: goto label_29bfd0;
        case 0x29bfd4u: goto label_29bfd4;
        case 0x29bfd8u: goto label_29bfd8;
        case 0x29bfdcu: goto label_29bfdc;
        case 0x29bfe0u: goto label_29bfe0;
        case 0x29bfe4u: goto label_29bfe4;
        case 0x29bfe8u: goto label_29bfe8;
        case 0x29bfecu: goto label_29bfec;
        case 0x29bff0u: goto label_29bff0;
        case 0x29bff4u: goto label_29bff4;
        case 0x29bff8u: goto label_29bff8;
        case 0x29bffcu: goto label_29bffc;
        case 0x29c000u: goto label_29c000;
        case 0x29c004u: goto label_29c004;
        case 0x29c008u: goto label_29c008;
        case 0x29c00cu: goto label_29c00c;
        case 0x29c010u: goto label_29c010;
        case 0x29c014u: goto label_29c014;
        case 0x29c018u: goto label_29c018;
        case 0x29c01cu: goto label_29c01c;
        case 0x29c020u: goto label_29c020;
        case 0x29c024u: goto label_29c024;
        case 0x29c028u: goto label_29c028;
        case 0x29c02cu: goto label_29c02c;
        case 0x29c030u: goto label_29c030;
        case 0x29c034u: goto label_29c034;
        case 0x29c038u: goto label_29c038;
        case 0x29c03cu: goto label_29c03c;
        case 0x29c040u: goto label_29c040;
        case 0x29c044u: goto label_29c044;
        case 0x29c048u: goto label_29c048;
        case 0x29c04cu: goto label_29c04c;
        case 0x29c050u: goto label_29c050;
        case 0x29c054u: goto label_29c054;
        case 0x29c058u: goto label_29c058;
        case 0x29c05cu: goto label_29c05c;
        case 0x29c060u: goto label_29c060;
        case 0x29c064u: goto label_29c064;
        case 0x29c068u: goto label_29c068;
        case 0x29c06cu: goto label_29c06c;
        case 0x29c070u: goto label_29c070;
        case 0x29c074u: goto label_29c074;
        case 0x29c078u: goto label_29c078;
        case 0x29c07cu: goto label_29c07c;
        case 0x29c080u: goto label_29c080;
        case 0x29c084u: goto label_29c084;
        case 0x29c088u: goto label_29c088;
        case 0x29c08cu: goto label_29c08c;
        case 0x29c090u: goto label_29c090;
        case 0x29c094u: goto label_29c094;
        case 0x29c098u: goto label_29c098;
        case 0x29c09cu: goto label_29c09c;
        case 0x29c0a0u: goto label_29c0a0;
        case 0x29c0a4u: goto label_29c0a4;
        case 0x29c0a8u: goto label_29c0a8;
        case 0x29c0acu: goto label_29c0ac;
        case 0x29c0b0u: goto label_29c0b0;
        case 0x29c0b4u: goto label_29c0b4;
        case 0x29c0b8u: goto label_29c0b8;
        case 0x29c0bcu: goto label_29c0bc;
        case 0x29c0c0u: goto label_29c0c0;
        case 0x29c0c4u: goto label_29c0c4;
        case 0x29c0c8u: goto label_29c0c8;
        case 0x29c0ccu: goto label_29c0cc;
        case 0x29c0d0u: goto label_29c0d0;
        case 0x29c0d4u: goto label_29c0d4;
        case 0x29c0d8u: goto label_29c0d8;
        case 0x29c0dcu: goto label_29c0dc;
        case 0x29c0e0u: goto label_29c0e0;
        case 0x29c0e4u: goto label_29c0e4;
        case 0x29c0e8u: goto label_29c0e8;
        case 0x29c0ecu: goto label_29c0ec;
        case 0x29c0f0u: goto label_29c0f0;
        case 0x29c0f4u: goto label_29c0f4;
        case 0x29c0f8u: goto label_29c0f8;
        case 0x29c0fcu: goto label_29c0fc;
        case 0x29c100u: goto label_29c100;
        case 0x29c104u: goto label_29c104;
        case 0x29c108u: goto label_29c108;
        case 0x29c10cu: goto label_29c10c;
        case 0x29c110u: goto label_29c110;
        case 0x29c114u: goto label_29c114;
        case 0x29c118u: goto label_29c118;
        case 0x29c11cu: goto label_29c11c;
        case 0x29c120u: goto label_29c120;
        case 0x29c124u: goto label_29c124;
        case 0x29c128u: goto label_29c128;
        case 0x29c12cu: goto label_29c12c;
        case 0x29c130u: goto label_29c130;
        case 0x29c134u: goto label_29c134;
        case 0x29c138u: goto label_29c138;
        case 0x29c13cu: goto label_29c13c;
        case 0x29c140u: goto label_29c140;
        case 0x29c144u: goto label_29c144;
        case 0x29c148u: goto label_29c148;
        case 0x29c14cu: goto label_29c14c;
        case 0x29c150u: goto label_29c150;
        case 0x29c154u: goto label_29c154;
        default: break;
    }

    ctx->pc = 0x29bf58u;

label_29bf58:
    // 0x29bf58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29bf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29bf5c:
    // 0x29bf5c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x29bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_29bf60:
    // 0x29bf60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29bf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29bf64:
    // 0x29bf64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bf68:
    // 0x29bf68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29bf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29bf6c:
    // 0x29bf6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29bf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_29bf70:
    // 0x29bf70: 0x8c44cb34  lw          $a0, -0x34CC($v0)
    ctx->pc = 0x29bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953780)));
label_29bf74:
    // 0x29bf74: 0x50830074  beql        $a0, $v1, . + 4 + (0x74 << 2)
label_29bf78:
    if (ctx->pc == 0x29BF78u) {
        ctx->pc = 0x29BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF74u;
        // 0x29bf78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF7Cu;
        goto label_29bf7c;
    }
    ctx->pc = 0x29BF74u;
    {
        const bool branch_taken_0x29bf74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29bf74) {
            ctx->pc = 0x29BF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BF74u;
            // 0x29bf78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C148u;
            goto label_29c148;
        }
    }
    ctx->pc = 0x29BF7Cu;
label_29bf7c:
    // 0x29bf7c: 0xc0a033a  jal         func_280CE8
label_29bf80:
    if (ctx->pc == 0x29BF80u) {
        ctx->pc = 0x29BF84u;
        goto label_29bf84;
    }
    ctx->pc = 0x29BF7Cu;
    SET_GPR_U32(ctx, 31, 0x29BF84u);
    ctx->pc = 0x280CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CE8u, 0x29BF7Cu, 0x29BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF84u;
label_29bf84:
    // 0x29bf84: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
label_29bf88:
    if (ctx->pc == 0x29BF88u) {
        ctx->pc = 0x29BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF84u;
        // 0x29bf88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF8Cu;
        goto label_29bf8c;
    }
    ctx->pc = 0x29BF84u;
    {
        const bool branch_taken_0x29bf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bf84) {
            ctx->pc = 0x29BF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BF84u;
            // 0x29bf88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C148u;
            goto label_29c148;
        }
    }
    ctx->pc = 0x29BF8Cu;
label_29bf8c:
    // 0x29bf8c: 0xc0a1bbe  jal         func_286EF8
label_29bf90:
    if (ctx->pc == 0x29BF90u) {
        ctx->pc = 0x29BF94u;
        goto label_29bf94;
    }
    ctx->pc = 0x29BF8Cu;
    SET_GPR_U32(ctx, 31, 0x29BF94u);
    ctx->pc = 0x286EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286EF8u, 0x29BF8Cu, 0x29BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF94u;
label_29bf94:
    // 0x29bf94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_29bf98:
    // 0x29bf98: 0x8c43a4fc  lw          $v1, -0x5B04($v0)
    ctx->pc = 0x29bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943996)));
label_29bf9c:
    // 0x29bf9c: 0x5460006a  bnel        $v1, $zero, . + 4 + (0x6A << 2)
label_29bfa0:
    if (ctx->pc == 0x29BFA0u) {
        ctx->pc = 0x29BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF9Cu;
        // 0x29bfa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFA4u;
        goto label_29bfa4;
    }
    ctx->pc = 0x29BF9Cu;
    {
        const bool branch_taken_0x29bf9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bf9c) {
            ctx->pc = 0x29BFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BF9Cu;
            // 0x29bfa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C148u;
            goto label_29c148;
        }
    }
    ctx->pc = 0x29BFA4u;
label_29bfa4:
    // 0x29bfa4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x29bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_29bfa8:
    // 0x29bfa8: 0x8c43a320  lw          $v1, -0x5CE0($v0)
    ctx->pc = 0x29bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943520)));
label_29bfac:
    // 0x29bfac: 0x54600066  bnel        $v1, $zero, . + 4 + (0x66 << 2)
label_29bfb0:
    if (ctx->pc == 0x29BFB0u) {
        ctx->pc = 0x29BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFACu;
        // 0x29bfb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFB4u;
        goto label_29bfb4;
    }
    ctx->pc = 0x29BFACu;
    {
        const bool branch_taken_0x29bfac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bfac) {
            ctx->pc = 0x29BFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BFACu;
            // 0x29bfb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C148u;
            goto label_29c148;
        }
    }
    ctx->pc = 0x29BFB4u;
label_29bfb4:
    // 0x29bfb4: 0x920200f4  lbu         $v0, 0xF4($s0)
    ctx->pc = 0x29bfb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 244)));
label_29bfb8:
    // 0x29bfb8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_29bfbc:
    if (ctx->pc == 0x29BFBCu) {
        ctx->pc = 0x29BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFB8u;
        // 0x29bfbc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFC0u;
        goto label_29bfc0;
    }
    ctx->pc = 0x29BFB8u;
    {
        const bool branch_taken_0x29bfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFB8u;
        // 0x29bfbc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfb8) {
            ctx->pc = 0x29C064u;
            goto label_29c064;
        }
    }
    ctx->pc = 0x29BFC0u;
label_29bfc0:
    // 0x29bfc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29bfc4:
    if (ctx->pc == 0x29BFC4u) {
        ctx->pc = 0x29BFC8u;
        goto label_29bfc8;
    }
    ctx->pc = 0x29BFC0u;
    {
        const bool branch_taken_0x29bfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bfc0) {
            ctx->pc = 0x29BFD0u;
            goto label_29bfd0;
        }
    }
    ctx->pc = 0x29BFC8u;
label_29bfc8:
    // 0x29bfc8: 0xc0a6e00  jal         func_29B800
label_29bfcc:
    if (ctx->pc == 0x29BFCCu) {
        ctx->pc = 0x29BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFC8u;
        // 0x29bfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFD0u;
        goto label_29bfd0;
    }
    ctx->pc = 0x29BFC8u;
    SET_GPR_U32(ctx, 31, 0x29BFD0u);
    ctx->pc = 0x29BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFC8u;
    // 0x29bfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B800u, 0x29BFC8u, 0x29BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFD0u;
label_29bfd0:
    // 0x29bfd0: 0xc0a0340  jal         func_280D00
label_29bfd4:
    if (ctx->pc == 0x29BFD4u) {
        ctx->pc = 0x29BFD8u;
        goto label_29bfd8;
    }
    ctx->pc = 0x29BFD0u;
    SET_GPR_U32(ctx, 31, 0x29BFD8u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x29BFD0u, 0x29BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFD8u;
label_29bfd8:
    // 0x29bfd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29bfdc:
    // 0x29bfdc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_29bfe0:
    if (ctx->pc == 0x29BFE0u) {
        ctx->pc = 0x29BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFDCu;
        // 0x29bfe0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFE4u;
        goto label_29bfe4;
    }
    ctx->pc = 0x29BFDCu;
    {
        const bool branch_taken_0x29bfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFDCu;
        // 0x29bfe0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfdc) {
            ctx->pc = 0x29BFFCu;
            goto label_29bffc;
        }
    }
    ctx->pc = 0x29BFE4u;
label_29bfe4:
    // 0x29bfe4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_29bfe8:
    // 0x29bfe8: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x29bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950236)));
label_29bfec:
    // 0x29bfec: 0x50600056  beql        $v1, $zero, . + 4 + (0x56 << 2)
label_29bff0:
    if (ctx->pc == 0x29BFF0u) {
        ctx->pc = 0x29BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFECu;
        // 0x29bff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFF4u;
        goto label_29bff4;
    }
    ctx->pc = 0x29BFECu;
    {
        const bool branch_taken_0x29bfec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bfec) {
            ctx->pc = 0x29BFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BFECu;
            // 0x29bff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C148u;
            goto label_29c148;
        }
    }
    ctx->pc = 0x29BFF4u;
label_29bff4:
    // 0x29bff4: 0x1000000a  b           . + 4 + (0xA << 2)
label_29bff8:
    if (ctx->pc == 0x29BFF8u) {
        ctx->pc = 0x29BFFCu;
        goto label_29bffc;
    }
    ctx->pc = 0x29BFF4u;
    {
        const bool branch_taken_0x29bff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bff4) {
            ctx->pc = 0x29C020u;
            goto label_29c020;
        }
    }
    ctx->pc = 0x29BFFCu;
label_29bffc:
    // 0x29bffc: 0x904394a4  lbu         $v1, -0x6B5C($v0)
    ctx->pc = 0x29bffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939812)));
label_29c000:
    // 0x29c000: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_29c004:
    if (ctx->pc == 0x29C004u) {
        ctx->pc = 0x29C008u;
        goto label_29c008;
    }
    ctx->pc = 0x29C000u;
    {
        const bool branch_taken_0x29c000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c000) {
            ctx->pc = 0x29C018u;
            goto label_29c018;
        }
    }
    ctx->pc = 0x29C008u;
label_29c008:
    // 0x29c008: 0xc0a1b32  jal         func_286CC8
label_29c00c:
    if (ctx->pc == 0x29C00Cu) {
        ctx->pc = 0x29C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C008u;
        // 0x29c00c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C010u;
        goto label_29c010;
    }
    ctx->pc = 0x29C008u;
    SET_GPR_U32(ctx, 31, 0x29C010u);
    ctx->pc = 0x29C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C008u;
    // 0x29c00c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286CC8u, 0x29C008u, 0x29C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C010u;
label_29c010:
    // 0x29c010: 0x10000003  b           . + 4 + (0x3 << 2)
label_29c014:
    if (ctx->pc == 0x29C014u) {
        ctx->pc = 0x29C018u;
        goto label_29c018;
    }
    ctx->pc = 0x29C010u;
    {
        const bool branch_taken_0x29c010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c010) {
            ctx->pc = 0x29C020u;
            goto label_29c020;
        }
    }
    ctx->pc = 0x29C018u;
label_29c018:
    // 0x29c018: 0xc0a1b56  jal         func_286D58
label_29c01c:
    if (ctx->pc == 0x29C01Cu) {
        ctx->pc = 0x29C020u;
        goto label_29c020;
    }
    ctx->pc = 0x29C018u;
    SET_GPR_U32(ctx, 31, 0x29C020u);
    ctx->pc = 0x286D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D58u, 0x29C018u, 0x29C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C020u;
label_29c020:
    // 0x29c020: 0xc0a7056  jal         func_29C158
label_29c024:
    if (ctx->pc == 0x29C024u) {
        ctx->pc = 0x29C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C020u;
        // 0x29c024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C028u;
        goto label_29c028;
    }
    ctx->pc = 0x29C020u;
    SET_GPR_U32(ctx, 31, 0x29C028u);
    ctx->pc = 0x29C024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C020u;
    // 0x29c024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C158u, 0x29C020u, 0x29C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C028u;
label_29c028:
    // 0x29c028: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x29c028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29c02c:
    // 0x29c02c: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_29c030:
    if (ctx->pc == 0x29C030u) {
        ctx->pc = 0x29C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C02Cu;
        // 0x29c030: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C034u;
        goto label_29c034;
    }
    ctx->pc = 0x29C02Cu;
    {
        const bool branch_taken_0x29c02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c02c) {
            ctx->pc = 0x29C030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C02Cu;
            // 0x29c030: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C064u;
            goto label_29c064;
        }
    }
    ctx->pc = 0x29C034u;
label_29c034:
    // 0x29c034: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x29c034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_29c038:
    // 0x29c038: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29c03c:
    // 0x29c03c: 0x40f809  jalr        $v0
label_29c040:
    if (ctx->pc == 0x29C040u) {
        ctx->pc = 0x29C044u;
        goto label_29c044;
    }
    ctx->pc = 0x29C03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C044u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C03Cu, 0x29C044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C044u;
label_29c044:
    // 0x29c044: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x29c044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29c048:
    // 0x29c048: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_29c04c:
    if (ctx->pc == 0x29C04Cu) {
        ctx->pc = 0x29C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C048u;
        // 0x29c04c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C050u;
        goto label_29c050;
    }
    ctx->pc = 0x29C048u;
    {
        const bool branch_taken_0x29c048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c048) {
            ctx->pc = 0x29C04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C048u;
            // 0x29c04c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C064u;
            goto label_29c064;
        }
    }
    ctx->pc = 0x29C050u;
label_29c050:
    // 0x29c050: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x29c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_29c054:
    // 0x29c054: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x29c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_29c058:
    // 0x29c058: 0x40f809  jalr        $v0
label_29c05c:
    if (ctx->pc == 0x29C05Cu) {
        ctx->pc = 0x29C060u;
        goto label_29c060;
    }
    ctx->pc = 0x29C058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C060u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C058u, 0x29C060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C060u;
label_29c060:
    // 0x29c060: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29c060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29c064:
    // 0x29c064: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_29c068:
    if (ctx->pc == 0x29C068u) {
        ctx->pc = 0x29C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C064u;
        // 0x29c068: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C06Cu;
        goto label_29c06c;
    }
    ctx->pc = 0x29C064u;
    {
        const bool branch_taken_0x29c064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C064u;
        // 0x29c068: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c064) {
            ctx->pc = 0x29C144u;
            goto label_29c144;
        }
    }
    ctx->pc = 0x29C06Cu;
label_29c06c:
    // 0x29c06c: 0xc0db21c  jal         func_36C870
label_29c070:
    if (ctx->pc == 0x29C070u) {
        ctx->pc = 0x29C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C06Cu;
        // 0x29c070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C074u;
        goto label_29c074;
    }
    ctx->pc = 0x29C06Cu;
    SET_GPR_U32(ctx, 31, 0x29C074u);
    ctx->pc = 0x29C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C06Cu;
    // 0x29c070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x29C06Cu, 0x29C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C074u;
label_29c074:
    // 0x29c074: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x29c074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_29c078:
    // 0x29c078: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
label_29c07c:
    if (ctx->pc == 0x29C07Cu) {
        ctx->pc = 0x29C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C078u;
        // 0x29c07c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C080u;
        goto label_29c080;
    }
    ctx->pc = 0x29C078u;
    {
        const bool branch_taken_0x29c078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c078) {
            ctx->pc = 0x29C07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C078u;
            // 0x29c07c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C0FCu;
            goto label_29c0fc;
        }
    }
    ctx->pc = 0x29C080u;
label_29c080:
    // 0x29c080: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x29c080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_29c084:
    // 0x29c084: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_29c088:
    if (ctx->pc == 0x29C088u) {
        ctx->pc = 0x29C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C084u;
        // 0x29c088: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C08Cu;
        goto label_29c08c;
    }
    ctx->pc = 0x29C084u;
    {
        const bool branch_taken_0x29c084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c084) {
            ctx->pc = 0x29C088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C084u;
            // 0x29c088: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C0FCu;
            goto label_29c0fc;
        }
    }
    ctx->pc = 0x29C08Cu;
label_29c08c:
    // 0x29c08c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x29c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_29c090:
    // 0x29c090: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_29c094:
    if (ctx->pc == 0x29C094u) {
        ctx->pc = 0x29C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C090u;
        // 0x29c094: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C098u;
        goto label_29c098;
    }
    ctx->pc = 0x29C090u;
    {
        const bool branch_taken_0x29c090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c090) {
            ctx->pc = 0x29C094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C090u;
            // 0x29c094: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C0FCu;
            goto label_29c0fc;
        }
    }
    ctx->pc = 0x29C098u;
label_29c098:
    // 0x29c098: 0x920200f4  lbu         $v0, 0xF4($s0)
    ctx->pc = 0x29c098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 244)));
label_29c09c:
    // 0x29c09c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29c0a0:
    if (ctx->pc == 0x29C0A0u) {
        ctx->pc = 0x29C0A4u;
        goto label_29c0a4;
    }
    ctx->pc = 0x29C09Cu;
    {
        const bool branch_taken_0x29c09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c09c) {
            ctx->pc = 0x29C0B8u;
            goto label_29c0b8;
        }
    }
    ctx->pc = 0x29C0A4u;
label_29c0a4:
    // 0x29c0a4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x29c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_29c0a8:
    // 0x29c0a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29c0ac:
    // 0x29c0ac: 0x40f809  jalr        $v0
label_29c0b0:
    if (ctx->pc == 0x29C0B0u) {
        ctx->pc = 0x29C0B4u;
        goto label_29c0b4;
    }
    ctx->pc = 0x29C0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C0B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C0ACu, 0x29C0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C0B4u;
label_29c0b4:
    // 0x29c0b4: 0x920200f4  lbu         $v0, 0xF4($s0)
    ctx->pc = 0x29c0b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 244)));
label_29c0b8:
    // 0x29c0b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29c0bc:
    if (ctx->pc == 0x29C0BCu) {
        ctx->pc = 0x29C0C0u;
        goto label_29c0c0;
    }
    ctx->pc = 0x29C0B8u;
    {
        const bool branch_taken_0x29c0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c0b8) {
            ctx->pc = 0x29C0D4u;
            goto label_29c0d4;
        }
    }
    ctx->pc = 0x29C0C0u;
label_29c0c0:
    // 0x29c0c0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x29c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_29c0c4:
    // 0x29c0c4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x29c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_29c0c8:
    // 0x29c0c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29c0cc:
    // 0x29c0cc: 0x40f809  jalr        $v0
label_29c0d0:
    if (ctx->pc == 0x29C0D0u) {
        ctx->pc = 0x29C0D4u;
        goto label_29c0d4;
    }
    ctx->pc = 0x29C0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C0D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C0CCu, 0x29C0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C0D4u;
label_29c0d4:
    // 0x29c0d4: 0xc0a0c1e  jal         func_283078
label_29c0d8:
    if (ctx->pc == 0x29C0D8u) {
        ctx->pc = 0x29C0DCu;
        goto label_29c0dc;
    }
    ctx->pc = 0x29C0D4u;
    SET_GPR_U32(ctx, 31, 0x29C0DCu);
    ctx->pc = 0x283078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283078u, 0x29C0D4u, 0x29C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0DCu;
label_29c0dc:
    // 0x29c0dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_29c0e0:
    if (ctx->pc == 0x29C0E0u) {
        ctx->pc = 0x29C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C0DCu;
        // 0x29c0e0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C0E4u;
        goto label_29c0e4;
    }
    ctx->pc = 0x29C0DCu;
    {
        const bool branch_taken_0x29c0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c0dc) {
            ctx->pc = 0x29C0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C0DCu;
            // 0x29c0e0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C0FCu;
            goto label_29c0fc;
        }
    }
    ctx->pc = 0x29C0E4u;
label_29c0e4:
    // 0x29c0e4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x29c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_29c0e8:
    // 0x29c0e8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x29c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_29c0ec:
    // 0x29c0ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29c0f0:
    // 0x29c0f0: 0x40f809  jalr        $v0
label_29c0f4:
    if (ctx->pc == 0x29C0F4u) {
        ctx->pc = 0x29C0F8u;
        goto label_29c0f8;
    }
    ctx->pc = 0x29C0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C0F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C0F0u, 0x29C0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C0F8u;
label_29c0f8:
    // 0x29c0f8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x29c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_29c0fc:
    // 0x29c0fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_29c100:
    if (ctx->pc == 0x29C100u) {
        ctx->pc = 0x29C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C0FCu;
        // 0x29c100: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C104u;
        goto label_29c104;
    }
    ctx->pc = 0x29C0FCu;
    {
        const bool branch_taken_0x29c0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c0fc) {
            ctx->pc = 0x29C100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C0FCu;
            // 0x29c100: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C110u;
            goto label_29c110;
        }
    }
    ctx->pc = 0x29C104u;
label_29c104:
    // 0x29c104: 0xc0a9e6a  jal         func_2A79A8
label_29c108:
    if (ctx->pc == 0x29C108u) {
        ctx->pc = 0x29C10Cu;
        goto label_29c10c;
    }
    ctx->pc = 0x29C104u;
    SET_GPR_U32(ctx, 31, 0x29C10Cu);
    ctx->pc = 0x2A79A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A79A8u, 0x29C104u, 0x29C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C10Cu;
label_29c10c:
    // 0x29c10c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x29c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_29c110:
    // 0x29c110: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_29c114:
    if (ctx->pc == 0x29C114u) {
        ctx->pc = 0x29C118u;
        goto label_29c118;
    }
    ctx->pc = 0x29C110u;
    {
        const bool branch_taken_0x29c110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c110) {
            ctx->pc = 0x29C13Cu;
            goto label_29c13c;
        }
    }
    ctx->pc = 0x29C118u;
label_29c118:
    // 0x29c118: 0xc0a0c1e  jal         func_283078
label_29c11c:
    if (ctx->pc == 0x29C11Cu) {
        ctx->pc = 0x29C120u;
        goto label_29c120;
    }
    ctx->pc = 0x29C118u;
    SET_GPR_U32(ctx, 31, 0x29C120u);
    ctx->pc = 0x283078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283078u, 0x29C118u, 0x29C120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C120u;
label_29c120:
    // 0x29c120: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29c124:
    if (ctx->pc == 0x29C124u) {
        ctx->pc = 0x29C128u;
        goto label_29c128;
    }
    ctx->pc = 0x29C120u;
    {
        const bool branch_taken_0x29c120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c120) {
            ctx->pc = 0x29C13Cu;
            goto label_29c13c;
        }
    }
    ctx->pc = 0x29C128u;
label_29c128:
    // 0x29c128: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x29c128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_29c12c:
    // 0x29c12c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x29c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_29c130:
    // 0x29c130: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29c134:
    // 0x29c134: 0x40f809  jalr        $v0
label_29c138:
    if (ctx->pc == 0x29C138u) {
        ctx->pc = 0x29C13Cu;
        goto label_29c13c;
    }
    ctx->pc = 0x29C134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C13Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C134u, 0x29C13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C13Cu;
label_29c13c:
    // 0x29c13c: 0xc0db1fa  jal         func_36C7E8
label_29c140:
    if (ctx->pc == 0x29C140u) {
        ctx->pc = 0x29C144u;
        goto label_29c144;
    }
    ctx->pc = 0x29C13Cu;
    SET_GPR_U32(ctx, 31, 0x29C144u);
    ctx->pc = 0x36C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C7E8u, 0x29C13Cu, 0x29C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C144u;
label_29c144:
    // 0x29c144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c148:
    // 0x29c148: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29c148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29c14c:
    // 0x29c14c: 0x3e00008  jr          $ra
label_29c150:
    if (ctx->pc == 0x29C150u) {
        ctx->pc = 0x29C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C14Cu;
        // 0x29c150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C154u;
        goto label_29c154;
    }
    ctx->pc = 0x29C14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C14Cu;
        // 0x29c150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C154u;
label_29c154:
    // 0x29c154: 0x0  nop
    ctx->pc = 0x29c154u;
    // NOP
    ctx->pc = 0x29c158u;
}
