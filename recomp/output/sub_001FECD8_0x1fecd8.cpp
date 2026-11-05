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

// Function: sub_001FECD8
// Address: 0x1fecd8 - 0x1fedc0
void sub_001FECD8_0x1fecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FECD8_0x1fecd8");
#endif

    switch (ctx->pc) {
        case 0x1fececu: goto label_1fecec;
        case 0x1fed30u: goto label_1fed30;
        case 0x1fed7cu: goto label_1fed7c;
        case 0x1fed84u: goto label_1fed84;
        case 0x1fed94u: goto label_1fed94;
        case 0x1fed9cu: goto label_1fed9c;
        case 0x1feda4u: goto label_1feda4;
        case 0x1fedacu: goto label_1fedac;
        default: break;
    }

    ctx->pc = 0x1fecd8u;

    // 0x1fecd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fecd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fecdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fecdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fece0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fece4: 0xc081860  jal         func_206180
    ctx->pc = 0x1FECE4u;
    SET_GPR_U32(ctx, 31, 0x1FECECu);
    ctx->pc = 0x1FECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECE4u;
    // 0x1fece8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206180u, 0x1FECE4u, 0x1FECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECECu;
label_1fecec:
    // 0x1fecec: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1fececu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1fecf0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1fecf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fecf4: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x1fecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1fecf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fecfc: 0x8c4315e8  lw          $v1, 0x15E8($v0)
    ctx->pc = 0x1fecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x499A68u));
    // 0x1fed00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FED00u;
    {
        const bool branch_taken_0x1fed00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed00) {
            ctx->pc = 0x1FED28u;
            goto label_1fed28;
        }
    }
    ctx->pc = 0x1FED08u;
    // 0x1fed08: 0x8c4215ec  lw          $v0, 0x15EC($v0)
    ctx->pc = 0x1fed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1fed0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FED0Cu;
    {
        const bool branch_taken_0x1fed0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fed0c) {
            ctx->pc = 0x1FED28u;
            goto label_1fed28;
        }
    }
    ctx->pc = 0x1FED14u;
    // 0x1fed14: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x1fed14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1fed18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED18u;
    {
        const bool branch_taken_0x1fed18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED18u;
        // 0x1fed1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed18) {
            ctx->pc = 0x1FED28u;
            goto label_1fed28;
        }
    }
    ctx->pc = 0x1FED20u;
    // 0x1fed20: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1FED20u;
    {
        const bool branch_taken_0x1fed20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED20u;
        // 0x1fed24: 0xa2020050  sb          $v0, 0x50($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed20) {
            ctx->pc = 0x1FEDACu;
            goto label_1fedac;
        }
    }
    ctx->pc = 0x1FED28u;
label_1fed28:
    // 0x1fed28: 0xc08029c  jal         func_200A70
    ctx->pc = 0x1FED28u;
    SET_GPR_U32(ctx, 31, 0x1FED30u);
    ctx->pc = 0x1FED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED28u;
    // 0x1fed2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200A70u, 0x1FED28u, 0x1FED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED30u;
label_1fed30:
    // 0x1fed30: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1fed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1fed34: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FED34u;
    {
        const bool branch_taken_0x1fed34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fed34) {
            ctx->pc = 0x1FED38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FED34u;
            // 0x1fed38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEDB0u;
            goto label_1fedb0;
        }
    }
    ctx->pc = 0x1FED3Cu;
    // 0x1fed3c: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x1fed3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1fed40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fed44: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FED44u;
    {
        const bool branch_taken_0x1fed44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED44u;
        // 0x1fed48: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed44) {
            ctx->pc = 0x1FED8Cu;
            goto label_1fed8c;
        }
    }
    ctx->pc = 0x1FED4Cu;
    // 0x1fed4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FED4Cu;
    {
        const bool branch_taken_0x1fed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed4c) {
            ctx->pc = 0x1FED50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FED4Cu;
            // 0x1fed50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FED64u;
            goto label_1fed64;
        }
    }
    ctx->pc = 0x1FED54u;
    // 0x1fed54: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FED54u;
    {
        const bool branch_taken_0x1fed54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed54) {
            ctx->pc = 0x1FED74u;
            goto label_1fed74;
        }
    }
    ctx->pc = 0x1FED5Cu;
    // 0x1fed5c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FED5Cu;
    {
        const bool branch_taken_0x1fed5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED5Cu;
        // 0x1fed60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed5c) {
            ctx->pc = 0x1FEDB0u;
            goto label_1fedb0;
        }
    }
    ctx->pc = 0x1FED64u;
label_1fed64:
    // 0x1fed64: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FED64u;
    {
        const bool branch_taken_0x1fed64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED64u;
        // 0x1fed68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed64) {
            ctx->pc = 0x1FED9Cu;
            goto label_1fed9c;
        }
    }
    ctx->pc = 0x1FED6Cu;
    // 0x1fed6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FED6Cu;
    {
        const bool branch_taken_0x1fed6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED6Cu;
        // 0x1fed70: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed6c) {
            ctx->pc = 0x1FEDB4u;
            goto label_1fedb4;
        }
    }
    ctx->pc = 0x1FED74u;
label_1fed74:
    // 0x1fed74: 0xc07fb70  jal         func_1FEDC0
    ctx->pc = 0x1FED74u;
    SET_GPR_U32(ctx, 31, 0x1FED7Cu);
    ctx->pc = 0x1FED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED74u;
    // 0x1fed78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEDC0u, 0x1FED74u, 0x1FED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED7Cu;
label_1fed7c:
    // 0x1fed7c: 0xc07fc88  jal         func_1FF220
    ctx->pc = 0x1FED7Cu;
    SET_GPR_U32(ctx, 31, 0x1FED84u);
    ctx->pc = 0x1FED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED7Cu;
    // 0x1fed80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF220u, 0x1FED7Cu, 0x1FED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED84u;
label_1fed84:
    // 0x1fed84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FED84u;
    {
        const bool branch_taken_0x1fed84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed84) {
            ctx->pc = 0x1FED9Cu;
            goto label_1fed9c;
        }
    }
    ctx->pc = 0x1FED8Cu;
label_1fed8c:
    // 0x1fed8c: 0xc07ff22  jal         func_1FFC88
    ctx->pc = 0x1FED8Cu;
    SET_GPR_U32(ctx, 31, 0x1FED94u);
    ctx->pc = 0x1FED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED8Cu;
    // 0x1fed90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFC88u, 0x1FED8Cu, 0x1FED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED94u;
label_1fed94:
    // 0x1fed94: 0xc07fc88  jal         func_1FF220
    ctx->pc = 0x1FED94u;
    SET_GPR_U32(ctx, 31, 0x1FED9Cu);
    ctx->pc = 0x1FED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED94u;
    // 0x1fed98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF220u, 0x1FED94u, 0x1FED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED9Cu;
label_1fed9c:
    // 0x1fed9c: 0xc081710  jal         func_205C40
    ctx->pc = 0x1FED9Cu;
    SET_GPR_U32(ctx, 31, 0x1FEDA4u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FED9Cu, 0x1FEDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEDA4u;
label_1feda4:
    // 0x1feda4: 0xc0817c0  jal         func_205F00
    ctx->pc = 0x1FEDA4u;
    SET_GPR_U32(ctx, 31, 0x1FEDACu);
    ctx->pc = 0x1FEDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEDA4u;
    // 0x1feda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F00u, 0x1FEDA4u, 0x1FEDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEDACu;
label_1fedac:
    // 0x1fedac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fedacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fedb0:
    // 0x1fedb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fedb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fedb4:
    // 0x1fedb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDB4u;
        // 0x1fedb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEDBCu;
    // 0x1fedbc: 0x0  nop
    ctx->pc = 0x1fedbcu;
    // NOP
    ctx->pc = 0x1fedc0u;
}
