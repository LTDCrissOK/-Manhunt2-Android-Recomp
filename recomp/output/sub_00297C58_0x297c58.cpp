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

// Function: sub_00297C58
// Address: 0x297c58 - 0x297e40
void sub_00297C58_0x297c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297C58_0x297c58");
#endif

    switch (ctx->pc) {
        case 0x297c80u: goto label_297c80;
        case 0x297c90u: goto label_297c90;
        case 0x297c98u: goto label_297c98;
        case 0x297cb0u: goto label_297cb0;
        case 0x297cb8u: goto label_297cb8;
        case 0x297cd0u: goto label_297cd0;
        case 0x297cdcu: goto label_297cdc;
        case 0x297ce4u: goto label_297ce4;
        case 0x297cf0u: goto label_297cf0;
        case 0x297d04u: goto label_297d04;
        case 0x297d1cu: goto label_297d1c;
        case 0x297d30u: goto label_297d30;
        case 0x297d40u: goto label_297d40;
        case 0x297d64u: goto label_297d64;
        case 0x297d88u: goto label_297d88;
        case 0x297dacu: goto label_297dac;
        case 0x297dc8u: goto label_297dc8;
        case 0x297de0u: goto label_297de0;
        case 0x297dfcu: goto label_297dfc;
        case 0x297e04u: goto label_297e04;
        case 0x297e10u: goto label_297e10;
        case 0x297e20u: goto label_297e20;
        case 0x297e2cu: goto label_297e2c;
        default: break;
    }

    ctx->pc = 0x297c58u;

    // 0x297c58: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x297c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x297c5c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x297c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x297c60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x297c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c64: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x297c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x297c68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x297c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c6c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297c70: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x297c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x297c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c78: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x297C78u;
    SET_GPR_U32(ctx, 31, 0x297C80u);
    ctx->pc = 0x297C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C78u;
    // 0x297c7c: 0x24a5bc98  addiu       $a1, $a1, -0x4368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x297C78u, 0x297C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C80u;
label_297c80:
    // 0x297c80: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x297C80u;
    {
        const bool branch_taken_0x297c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C80u;
        // 0x297c84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c80) {
            ctx->pc = 0x297D0Cu;
            goto label_297d0c;
        }
    }
    ctx->pc = 0x297C88u;
    // 0x297c88: 0xc0a5f90  jal         func_297E40
    ctx->pc = 0x297C88u;
    SET_GPR_U32(ctx, 31, 0x297C90u);
    ctx->pc = 0x297C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C88u;
    // 0x297c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E40u, 0x297C88u, 0x297C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C90u;
label_297c90:
    // 0x297c90: 0xc075e34  jal         func_1D78D0
    ctx->pc = 0x297C90u;
    SET_GPR_U32(ctx, 31, 0x297C98u);
    ctx->pc = 0x297C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C90u;
    // 0x297c94: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x297C90u, 0x297C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C98u;
label_297c98:
    // 0x297c98: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x297c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297c9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297ca0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x297ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x297ca4: 0x24a5bca8  addiu       $a1, $a1, -0x4358
    ctx->pc = 0x297ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950056));
    // 0x297ca8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x297CA8u;
    SET_GPR_U32(ctx, 31, 0x297CB0u);
    ctx->pc = 0x297CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CA8u;
    // 0x297cac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x297CA8u, 0x297CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CB0u;
label_297cb0:
    // 0x297cb0: 0xc0a0512  jal         func_281448
    ctx->pc = 0x297CB0u;
    SET_GPR_U32(ctx, 31, 0x297CB8u);
    ctx->pc = 0x297CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CB0u;
    // 0x297cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281448u, 0x297CB0u, 0x297CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CB8u;
label_297cb8:
    // 0x297cb8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x297cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x297cbc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x297cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x297cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297cc4: 0xa0602c0c  sb          $zero, 0x2C0C($v1)
    ctx->pc = 0x297cc4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C0Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482C0Cu, _value); } while (0);
    // 0x297cc8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297CC8u;
    SET_GPR_U32(ctx, 31, 0x297CD0u);
    ctx->pc = 0x297CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CC8u;
    // 0x297ccc: 0xa0827df4  sb          $v0, 0x7DF4($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 32244), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297CC8u, 0x297CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CD0u;
label_297cd0:
    // 0x297cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cd4: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x297CD4u;
    SET_GPR_U32(ctx, 31, 0x297CDCu);
    ctx->pc = 0x297CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CD4u;
    // 0x297cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x297CD4u, 0x297CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CDCu;
label_297cdc:
    // 0x297cdc: 0xc0a1b56  jal         func_286D58
    ctx->pc = 0x297CDCu;
    SET_GPR_U32(ctx, 31, 0x297CE4u);
    ctx->pc = 0x286D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D58u, 0x297CDCu, 0x297CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CE4u;
label_297ce4:
    // 0x297ce4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x297ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x297ce8: 0xc0a0540  jal         func_281500
    ctx->pc = 0x297CE8u;
    SET_GPR_U32(ctx, 31, 0x297CF0u);
    ctx->pc = 0x297CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CE8u;
    // 0x297cec: 0x24841158  addiu       $a0, $a0, 0x1158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281500u, 0x297CE8u, 0x297CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CF0u;
label_297cf0:
    // 0x297cf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x297cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x297cf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cf8: 0xac40a320  sw          $zero, -0x5CE0($v0)
    ctx->pc = 0x297cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA320u, _value); } while (0);
    // 0x297cfc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x297CFCu;
    SET_GPR_U32(ctx, 31, 0x297D04u);
    ctx->pc = 0x297D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CFCu;
    // 0x297d00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x297CFCu, 0x297D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D04u;
label_297d04:
    // 0x297d04: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x297D04u;
    {
        const bool branch_taken_0x297d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D04u;
        // 0x297d08: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d04) {
            ctx->pc = 0x297E30u;
            goto label_297e30;
        }
    }
    ctx->pc = 0x297D0Cu;
label_297d0c:
    // 0x297d0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d14: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x297D14u;
    SET_GPR_U32(ctx, 31, 0x297D1Cu);
    ctx->pc = 0x297D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D14u;
    // 0x297d18: 0x24a5bd00  addiu       $a1, $a1, -0x4300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x297D14u, 0x297D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D1Cu;
label_297d1c:
    // 0x297d1c: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x297D1Cu;
    {
        const bool branch_taken_0x297d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d1c) {
            ctx->pc = 0x297D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297D1Cu;
            // 0x297d20: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297E30u;
            goto label_297e30;
        }
    }
    ctx->pc = 0x297D24u;
    // 0x297d24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d28: 0xc0a5f90  jal         func_297E40
    ctx->pc = 0x297D28u;
    SET_GPR_U32(ctx, 31, 0x297D30u);
    ctx->pc = 0x297D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D28u;
    // 0x297d2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E40u, 0x297D28u, 0x297D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D30u;
label_297d30:
    // 0x297d30: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297d34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d38: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297D38u;
    SET_GPR_U32(ctx, 31, 0x297D40u);
    ctx->pc = 0x297D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D38u;
    // 0x297d3c: 0x24a5bd10  addiu       $a1, $a1, -0x42F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297D38u, 0x297D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D40u;
label_297d40:
    // 0x297d40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297d44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297D44u;
    {
        const bool branch_taken_0x297d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D44u;
        // 0x297d48: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d44) {
            ctx->pc = 0x297D54u;
            goto label_297d54;
        }
    }
    ctx->pc = 0x297D4Cu;
    // 0x297d4c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x297D4Cu;
    {
        const bool branch_taken_0x297d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D4Cu;
        // 0x297d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d4c) {
            ctx->pc = 0x297DBCu;
            goto label_297dbc;
        }
    }
    ctx->pc = 0x297D54u;
label_297d54:
    // 0x297d54: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297d58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d5c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297D5Cu;
    SET_GPR_U32(ctx, 31, 0x297D64u);
    ctx->pc = 0x297D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D5Cu;
    // 0x297d60: 0x24a5bd18  addiu       $a1, $a1, -0x42E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297D5Cu, 0x297D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D64u;
label_297d64:
    // 0x297d64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297d68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297D68u;
    {
        const bool branch_taken_0x297d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D68u;
        // 0x297d6c: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d68) {
            ctx->pc = 0x297D78u;
            goto label_297d78;
        }
    }
    ctx->pc = 0x297D70u;
    // 0x297d70: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x297D70u;
    {
        const bool branch_taken_0x297d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D70u;
        // 0x297d74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d70) {
            ctx->pc = 0x297DBCu;
            goto label_297dbc;
        }
    }
    ctx->pc = 0x297D78u;
label_297d78:
    // 0x297d78: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297d7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d80: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297D80u;
    SET_GPR_U32(ctx, 31, 0x297D88u);
    ctx->pc = 0x297D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D80u;
    // 0x297d84: 0x24a5bd20  addiu       $a1, $a1, -0x42E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297D80u, 0x297D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D88u;
label_297d88:
    // 0x297d88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297d8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297D8Cu;
    {
        const bool branch_taken_0x297d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D8Cu;
        // 0x297d90: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d8c) {
            ctx->pc = 0x297D9Cu;
            goto label_297d9c;
        }
    }
    ctx->pc = 0x297D94u;
    // 0x297d94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x297D94u;
    {
        const bool branch_taken_0x297d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D94u;
        // 0x297d98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d94) {
            ctx->pc = 0x297DBCu;
            goto label_297dbc;
        }
    }
    ctx->pc = 0x297D9Cu;
label_297d9c:
    // 0x297d9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297da0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297da4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297DA4u;
    SET_GPR_U32(ctx, 31, 0x297DACu);
    ctx->pc = 0x297DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DA4u;
    // 0x297da8: 0x24a5bd28  addiu       $a1, $a1, -0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297DA4u, 0x297DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DACu;
label_297dac:
    // 0x297dac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297db0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x297DB0u;
    {
        const bool branch_taken_0x297db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DB0u;
        // 0x297db4: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297db0) {
            ctx->pc = 0x297DD0u;
            goto label_297dd0;
        }
    }
    ctx->pc = 0x297DB8u;
    // 0x297db8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x297db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_297dbc:
    // 0x297dbc: 0x24842508  addiu       $a0, $a0, 0x2508
    ctx->pc = 0x297dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9480));
    // 0x297dc0: 0xc0acbc4  jal         func_2B2F10
    ctx->pc = 0x297DC0u;
    SET_GPR_U32(ctx, 31, 0x297DC8u);
    ctx->pc = 0x297DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DC0u;
    // 0x297dc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F10u, 0x297DC0u, 0x297DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DC8u;
label_297dc8:
    // 0x297dc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x297DC8u;
    {
        const bool branch_taken_0x297dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297dc8) {
            ctx->pc = 0x297DFCu;
            goto label_297dfc;
        }
    }
    ctx->pc = 0x297DD0u;
label_297dd0:
    // 0x297dd0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297dd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297dd8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297DD8u;
    SET_GPR_U32(ctx, 31, 0x297DE0u);
    ctx->pc = 0x297DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DD8u;
    // 0x297ddc: 0x24a5bd30  addiu       $a1, $a1, -0x42D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297DD8u, 0x297DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DE0u;
label_297de0:
    // 0x297de0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297de4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297DE4u;
    {
        const bool branch_taken_0x297de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DE4u;
        // 0x297de8: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297de4) {
            ctx->pc = 0x297DFCu;
            goto label_297dfc;
        }
    }
    ctx->pc = 0x297DECu;
    // 0x297dec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x297decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297df0: 0x24842508  addiu       $a0, $a0, 0x2508
    ctx->pc = 0x297df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9480));
    // 0x297df4: 0xc0acbc4  jal         func_2B2F10
    ctx->pc = 0x297DF4u;
    SET_GPR_U32(ctx, 31, 0x297DFCu);
    ctx->pc = 0x297DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DF4u;
    // 0x297df8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F10u, 0x297DF4u, 0x297DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DFCu;
label_297dfc:
    // 0x297dfc: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297DFCu;
    SET_GPR_U32(ctx, 31, 0x297E04u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297DFCu, 0x297E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E04u;
label_297e04:
    // 0x297e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e08: 0xc0a7566  jal         func_29D598
    ctx->pc = 0x297E08u;
    SET_GPR_U32(ctx, 31, 0x297E10u);
    ctx->pc = 0x297E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E08u;
    // 0x297e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D598u, 0x297E08u, 0x297E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E10u;
label_297e10:
    // 0x297e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e14: 0x26250078  addiu       $a1, $s1, 0x78
    ctx->pc = 0x297e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x297e18: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x297E18u;
    SET_GPR_U32(ctx, 31, 0x297E20u);
    ctx->pc = 0x297E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E18u;
    // 0x297e1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x297E18u, 0x297E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E20u;
label_297e20:
    // 0x297e20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e24: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x297E24u;
    SET_GPR_U32(ctx, 31, 0x297E2Cu);
    ctx->pc = 0x297E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E24u;
    // 0x297e28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x297E24u, 0x297E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E2Cu;
label_297e2c:
    // 0x297e2c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x297e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_297e30:
    // 0x297e30: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x297e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x297e34: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x297e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x297e38: 0x3e00008  jr          $ra
    ctx->pc = 0x297E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E38u;
        // 0x297e3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297E40u;
}
