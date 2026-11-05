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

// Function: sub_00365DC8
// Address: 0x365dc8 - 0x366078
void sub_00365DC8_0x365dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365DC8_0x365dc8");
#endif

    switch (ctx->pc) {
        case 0x365df0u: goto label_365df0;
        case 0x365e00u: goto label_365e00;
        case 0x365e18u: goto label_365e18;
        case 0x365e24u: goto label_365e24;
        case 0x365e34u: goto label_365e34;
        case 0x365e44u: goto label_365e44;
        case 0x365e50u: goto label_365e50;
        case 0x365e58u: goto label_365e58;
        case 0x365e68u: goto label_365e68;
        case 0x365e80u: goto label_365e80;
        case 0x365e90u: goto label_365e90;
        case 0x365eacu: goto label_365eac;
        case 0x365ec8u: goto label_365ec8;
        case 0x365ee4u: goto label_365ee4;
        case 0x365f00u: goto label_365f00;
        case 0x365f1cu: goto label_365f1c;
        case 0x365f30u: goto label_365f30;
        case 0x365f38u: goto label_365f38;
        case 0x365f4cu: goto label_365f4c;
        case 0x365f68u: goto label_365f68;
        case 0x365f7cu: goto label_365f7c;
        case 0x365f8cu: goto label_365f8c;
        case 0x365fa0u: goto label_365fa0;
        case 0x365fa8u: goto label_365fa8;
        case 0x365fb0u: goto label_365fb0;
        case 0x365fc4u: goto label_365fc4;
        case 0x365fd8u: goto label_365fd8;
        case 0x365fe8u: goto label_365fe8;
        case 0x366000u: goto label_366000;
        case 0x366010u: goto label_366010;
        case 0x36601cu: goto label_36601c;
        case 0x36602cu: goto label_36602c;
        case 0x366034u: goto label_366034;
        case 0x366040u: goto label_366040;
        case 0x36604cu: goto label_36604c;
        case 0x366058u: goto label_366058;
        default: break;
    }

    ctx->pc = 0x365dc8u;

    // 0x365dc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x365dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x365dcc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x365dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365dd0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x365dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x365dd4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x365dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x365dd8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x365dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x365ddc: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x365ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x365de0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x365de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x365de4: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x365de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x365de8: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x365DE8u;
    SET_GPR_U32(ctx, 31, 0x365DF0u);
    ctx->pc = 0x365DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365DE8u;
    // 0x365dec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x365DE8u, 0x365DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DF0u;
label_365df0:
    // 0x365df0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x365df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x365df4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x365df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365df8: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x365DF8u;
    SET_GPR_U32(ctx, 31, 0x365E00u);
    ctx->pc = 0x365DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365DF8u;
    // 0x365dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x365DF8u, 0x365E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E00u;
label_365e00:
    // 0x365e00: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x365e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x365e04: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x365e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x365e08: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x365e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x365e0c: 0x2473fe40  addiu       $s3, $v1, -0x1C0
    ctx->pc = 0x365e0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x365e10: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x365E10u;
    SET_GPR_U32(ctx, 31, 0x365E18u);
    ctx->pc = 0x365E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E10u;
    // 0x365e14: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x365E10u, 0x365E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E18u;
label_365e18:
    // 0x365e18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x365e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e1c: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x365E1Cu;
    SET_GPR_U32(ctx, 31, 0x365E24u);
    ctx->pc = 0x365E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E1Cu;
    // 0x365e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x365E1Cu, 0x365E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E24u;
label_365e24:
    // 0x365e24: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x365e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x365e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e2c: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x365E2Cu;
    SET_GPR_U32(ctx, 31, 0x365E34u);
    ctx->pc = 0x365E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E2Cu;
    // 0x365e30: 0x24a5eeb0  addiu       $a1, $a1, -0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x365E2Cu, 0x365E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E34u;
label_365e34:
    // 0x365e34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x365e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e3c: 0xc09dd98  jal         func_277660
    ctx->pc = 0x365E3Cu;
    SET_GPR_U32(ctx, 31, 0x365E44u);
    ctx->pc = 0x365E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E3Cu;
    // 0x365e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x365E3Cu, 0x365E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E44u;
label_365e44:
    // 0x365e44: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x365E44u;
    {
        const bool branch_taken_0x365e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E44u;
        // 0x365e48: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365e44) {
            ctx->pc = 0x366010u;
            goto label_366010;
        }
    }
    ctx->pc = 0x365E4Cu;
    // 0x365e4c: 0x0  nop
    ctx->pc = 0x365e4cu;
    // NOP
label_365e50:
    // 0x365e50: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x365E50u;
    SET_GPR_U32(ctx, 31, 0x365E58u);
    ctx->pc = 0x365E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E50u;
    // 0x365e54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x365E50u, 0x365E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E58u;
label_365e58:
    // 0x365e58: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365E60u;
    SET_GPR_U32(ctx, 31, 0x365E68u);
    ctx->pc = 0x365E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E60u;
    // 0x365e64: 0x24a56f30  addiu       $a1, $a1, 0x6F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365E60u, 0x365E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E68u;
label_365e68:
    // 0x365e68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365e6c: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x365E6Cu;
    {
        const bool branch_taken_0x365e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365e6c) {
            ctx->pc = 0x365E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365E6Cu;
            // 0x365e70: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365FF8u;
            goto label_365ff8;
        }
    }
    ctx->pc = 0x365E74u;
    // 0x365e74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x365e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e78: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x365E78u;
    SET_GPR_U32(ctx, 31, 0x365E80u);
    ctx->pc = 0x365E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E78u;
    // 0x365e7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x365E78u, 0x365E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E80u;
label_365e80:
    // 0x365e80: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e88: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365E88u;
    SET_GPR_U32(ctx, 31, 0x365E90u);
    ctx->pc = 0x365E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E88u;
    // 0x365e8c: 0x24a56f90  addiu       $a1, $a1, 0x6F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365E88u, 0x365E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E90u;
label_365e90:
    // 0x365e90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365e94: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x365E94u;
    {
        const bool branch_taken_0x365e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365e94) {
            ctx->pc = 0x365F28u;
            goto label_365f28;
        }
    }
    ctx->pc = 0x365E9Cu;
    // 0x365e9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ea4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365EA4u;
    SET_GPR_U32(ctx, 31, 0x365EACu);
    ctx->pc = 0x365EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EA4u;
    // 0x365ea8: 0x24a56fa0  addiu       $a1, $a1, 0x6FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365EA4u, 0x365EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365EACu;
label_365eac:
    // 0x365eac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365eb0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x365EB0u;
    {
        const bool branch_taken_0x365eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365eb0) {
            ctx->pc = 0x365F28u;
            goto label_365f28;
        }
    }
    ctx->pc = 0x365EB8u;
    // 0x365eb8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ec0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365EC0u;
    SET_GPR_U32(ctx, 31, 0x365EC8u);
    ctx->pc = 0x365EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EC0u;
    // 0x365ec4: 0x24a56fb0  addiu       $a1, $a1, 0x6FB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365EC0u, 0x365EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365EC8u;
label_365ec8:
    // 0x365ec8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365ecc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x365ECCu;
    {
        const bool branch_taken_0x365ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365ecc) {
            ctx->pc = 0x365F28u;
            goto label_365f28;
        }
    }
    ctx->pc = 0x365ED4u;
    // 0x365ed4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365edc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365EDCu;
    SET_GPR_U32(ctx, 31, 0x365EE4u);
    ctx->pc = 0x365EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EDCu;
    // 0x365ee0: 0x24a56fc8  addiu       $a1, $a1, 0x6FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365EDCu, 0x365EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365EE4u;
label_365ee4:
    // 0x365ee4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365ee8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x365EE8u;
    {
        const bool branch_taken_0x365ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365ee8) {
            ctx->pc = 0x365F28u;
            goto label_365f28;
        }
    }
    ctx->pc = 0x365EF0u;
    // 0x365ef0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ef8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365EF8u;
    SET_GPR_U32(ctx, 31, 0x365F00u);
    ctx->pc = 0x365EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EF8u;
    // 0x365efc: 0x24a56fd8  addiu       $a1, $a1, 0x6FD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365EF8u, 0x365F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F00u;
label_365f00:
    // 0x365f00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365f04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x365F04u;
    {
        const bool branch_taken_0x365f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365f04) {
            ctx->pc = 0x365F28u;
            goto label_365f28;
        }
    }
    ctx->pc = 0x365F0Cu;
    // 0x365f0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f14: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365F14u;
    SET_GPR_U32(ctx, 31, 0x365F1Cu);
    ctx->pc = 0x365F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F14u;
    // 0x365f18: 0x24a56fe8  addiu       $a1, $a1, 0x6FE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365F14u, 0x365F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F1Cu;
label_365f1c:
    // 0x365f1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365f20: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x365F20u;
    {
        const bool branch_taken_0x365f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f20) {
            ctx->pc = 0x365F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365F20u;
            // 0x365f24: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365F40u;
            goto label_365f40;
        }
    }
    ctx->pc = 0x365F28u;
label_365f28:
    // 0x365f28: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x365F28u;
    SET_GPR_U32(ctx, 31, 0x365F30u);
    ctx->pc = 0x365F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F28u;
    // 0x365f2c: 0x240400ac  addiu       $a0, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x365F28u, 0x365F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F30u;
label_365f30:
    // 0x365f30: 0xc088f70  jal         func_223DC0
    ctx->pc = 0x365F30u;
    SET_GPR_U32(ctx, 31, 0x365F38u);
    ctx->pc = 0x365F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F30u;
    // 0x365f34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DC0u, 0x365F30u, 0x365F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F38u;
label_365f38:
    // 0x365f38: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x365F38u;
    {
        const bool branch_taken_0x365f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F38u;
        // 0x365f3c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365f38) {
            ctx->pc = 0x365FF4u;
            goto label_365ff4;
        }
    }
    ctx->pc = 0x365F40u;
label_365f40:
    // 0x365f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f44: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365F44u;
    SET_GPR_U32(ctx, 31, 0x365F4Cu);
    ctx->pc = 0x365F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F44u;
    // 0x365f48: 0x24a57000  addiu       $a1, $a1, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365F44u, 0x365F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F4Cu;
label_365f4c:
    // 0x365f4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365f50: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x365F50u;
    {
        const bool branch_taken_0x365f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365f50) {
            ctx->pc = 0x365F74u;
            goto label_365f74;
        }
    }
    ctx->pc = 0x365F58u;
    // 0x365f58: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365F60u;
    SET_GPR_U32(ctx, 31, 0x365F68u);
    ctx->pc = 0x365F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F60u;
    // 0x365f64: 0x24a57010  addiu       $a1, $a1, 0x7010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365F60u, 0x365F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F68u;
label_365f68:
    // 0x365f68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365f6c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x365F6Cu;
    {
        const bool branch_taken_0x365f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f6c) {
            ctx->pc = 0x365F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365F6Cu;
            // 0x365f70: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365FB8u;
            goto label_365fb8;
        }
    }
    ctx->pc = 0x365F74u;
label_365f74:
    // 0x365f74: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x365F74u;
    SET_GPR_U32(ctx, 31, 0x365F7Cu);
    ctx->pc = 0x365F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F74u;
    // 0x365f78: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x365F74u, 0x365F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F7Cu;
label_365f7c:
    // 0x365f7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f84: 0xc088f70  jal         func_223DC0
    ctx->pc = 0x365F84u;
    SET_GPR_U32(ctx, 31, 0x365F8Cu);
    ctx->pc = 0x365F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F84u;
    // 0x365f88: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DC0u, 0x365F84u, 0x365F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F8Cu;
label_365f8c:
    // 0x365f8c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x365f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x365f90: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x365f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x365f94: 0x246317a0  addiu       $v1, $v1, 0x17A0
    ctx->pc = 0x365f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6048));
    // 0x365f98: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x365F98u;
    SET_GPR_U32(ctx, 31, 0x365FA0u);
    ctx->pc = 0x365F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F98u;
    // 0x365f9c: 0xae0300a8  sw          $v1, 0xA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x365F98u, 0x365FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FA0u;
label_365fa0:
    // 0x365fa0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x365FA0u;
    SET_GPR_U32(ctx, 31, 0x365FA8u);
    ctx->pc = 0x365FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FA0u;
    // 0x365fa4: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x365FA0u, 0x365FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FA8u;
label_365fa8:
    // 0x365fa8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365FA8u;
    SET_GPR_U32(ctx, 31, 0x365FB0u);
    ctx->pc = 0x365FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FA8u;
    // 0x365fac: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365FA8u, 0x365FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FB0u;
label_365fb0:
    // 0x365fb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x365FB0u;
    {
        const bool branch_taken_0x365fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FB0u;
        // 0x365fb4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365fb0) {
            ctx->pc = 0x365FF8u;
            goto label_365ff8;
        }
    }
    ctx->pc = 0x365FB8u;
label_365fb8:
    // 0x365fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365fbc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365FBCu;
    SET_GPR_U32(ctx, 31, 0x365FC4u);
    ctx->pc = 0x365FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FBCu;
    // 0x365fc0: 0x24a57028  addiu       $a1, $a1, 0x7028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365FBCu, 0x365FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FC4u;
label_365fc4:
    // 0x365fc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365fc8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x365FC8u;
    {
        const bool branch_taken_0x365fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365fc8) {
            ctx->pc = 0x365FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365FC8u;
            // 0x365fcc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365FF8u;
            goto label_365ff8;
        }
    }
    ctx->pc = 0x365FD0u;
    // 0x365fd0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x365FD0u;
    SET_GPR_U32(ctx, 31, 0x365FD8u);
    ctx->pc = 0x365FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FD0u;
    // 0x365fd4: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x365FD0u, 0x365FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FD8u;
label_365fd8:
    // 0x365fd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365fe0: 0xc088f70  jal         func_223DC0
    ctx->pc = 0x365FE0u;
    SET_GPR_U32(ctx, 31, 0x365FE8u);
    ctx->pc = 0x365FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FE0u;
    // 0x365fe4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DC0u, 0x365FE0u, 0x365FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FE8u;
label_365fe8:
    // 0x365fe8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x365fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x365fec: 0x24631788  addiu       $v1, $v1, 0x1788
    ctx->pc = 0x365fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6024));
    // 0x365ff0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x365ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_365ff4:
    // 0x365ff4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x365ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_365ff8:
    // 0x365ff8: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x365FF8u;
    SET_GPR_U32(ctx, 31, 0x366000u);
    ctx->pc = 0x365FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FF8u;
    // 0x365ffc: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x365FF8u, 0x366000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366000u;
label_366000:
    // 0x366000: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x366000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x366004: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x366004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366008: 0xc0fbdfe  jal         func_3EF7F8
    ctx->pc = 0x366008u;
    SET_GPR_U32(ctx, 31, 0x366010u);
    ctx->pc = 0x36600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366008u;
    // 0x36600c: 0x2484dc10  addiu       $a0, $a0, -0x23F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF7F8u, 0x366008u, 0x366010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366010u;
label_366010:
    // 0x366010: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x366010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366014: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x366014u;
    SET_GPR_U32(ctx, 31, 0x36601Cu);
    ctx->pc = 0x366018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366014u;
    // 0x366018: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x366014u, 0x36601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36601Cu;
label_36601c:
    // 0x36601c: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x36601Cu;
    {
        const bool branch_taken_0x36601c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36601Cu;
        // 0x366020: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36601c) {
            ctx->pc = 0x365E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365e50;
        }
    }
    ctx->pc = 0x366024u;
    // 0x366024: 0xc09dd92  jal         func_277648
    ctx->pc = 0x366024u;
    SET_GPR_U32(ctx, 31, 0x36602Cu);
    ctx->pc = 0x366028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366024u;
    // 0x366028: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277648u, 0x366024u, 0x36602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36602Cu;
label_36602c:
    // 0x36602c: 0xc0d9728  jal         func_365CA0
    ctx->pc = 0x36602Cu;
    SET_GPR_U32(ctx, 31, 0x366034u);
    ctx->pc = 0x366030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36602Cu;
    // 0x366030: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365CA0u, 0x36602Cu, 0x366034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366034u;
label_366034:
    // 0x366034: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x366034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366038: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x366038u;
    SET_GPR_U32(ctx, 31, 0x366040u);
    ctx->pc = 0x36603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366038u;
    // 0x36603c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x366038u, 0x366040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366040u;
label_366040:
    // 0x366040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x366040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366044: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x366044u;
    SET_GPR_U32(ctx, 31, 0x36604Cu);
    ctx->pc = 0x366048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366044u;
    // 0x366048: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x366044u, 0x36604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36604Cu;
label_36604c:
    // 0x36604c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366050: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x366050u;
    SET_GPR_U32(ctx, 31, 0x366058u);
    ctx->pc = 0x366054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366050u;
    // 0x366054: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x366050u, 0x366058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366058u;
label_366058:
    // 0x366058: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x366058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36605c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x36605cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x366060: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x366060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x366064: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x366064u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x366068: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x366068u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36606c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x36606cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x366070: 0x3e00008  jr          $ra
    ctx->pc = 0x366070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366070u;
        // 0x366074: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366078u;
}
