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

// Function: sub_002DAEE0
// Address: 0x2daee0 - 0x2daff0
void sub_002DAEE0_0x2daee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAEE0_0x2daee0");
#endif

    switch (ctx->pc) {
        case 0x2daf30u: goto label_2daf30;
        case 0x2daf88u: goto label_2daf88;
        case 0x2dafb0u: goto label_2dafb0;
        case 0x2dafd0u: goto label_2dafd0;
        default: break;
    }

    ctx->pc = 0x2daee0u;

    // 0x2daee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2daee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2daee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2daee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2daee8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2daee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2daeec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2daeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2daef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2daef4: 0x8e026394  lw          $v0, 0x6394($s0)
    ctx->pc = 0x2daef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25492)));
    // 0x2daef8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2DAEF8u;
    {
        const bool branch_taken_0x2daef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEF8u;
        // 0x2daefc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daef8) {
            ctx->pc = 0x2DAFD8u;
            goto label_2dafd8;
        }
    }
    ctx->pc = 0x2DAF00u;
    // 0x2daf00: 0x8e02639c  lw          $v0, 0x639C($s0)
    ctx->pc = 0x2daf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25500)));
    // 0x2daf04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DAF04u;
    {
        const bool branch_taken_0x2daf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF04u;
        // 0x2daf08: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf04) {
            ctx->pc = 0x2DAF4Cu;
            goto label_2daf4c;
        }
    }
    ctx->pc = 0x2DAF0Cu;
    // 0x2daf0c: 0x8e0263a0  lw          $v0, 0x63A0($s0)
    ctx->pc = 0x2daf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25504)));
    // 0x2daf10: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DAF10u;
    {
        const bool branch_taken_0x2daf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF10u;
        // 0x2daf14: 0x8c62bd50  lw          $v0, -0x42B0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf10) {
            ctx->pc = 0x2DAF50u;
            goto label_2daf50;
        }
    }
    ctx->pc = 0x2DAF18u;
    // 0x2daf18: 0x8e0263bc  lw          $v0, 0x63BC($s0)
    ctx->pc = 0x2daf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25532)));
    // 0x2daf1c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2daf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2daf20: 0x441002d  bgez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DAF20u;
    {
        const bool branch_taken_0x2daf20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF20u;
        // 0x2daf24: 0xae0263bc  sw          $v0, 0x63BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 25532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf20) {
            ctx->pc = 0x2DAFD8u;
            goto label_2dafd8;
        }
    }
    ctx->pc = 0x2DAF28u;
    // 0x2daf28: 0xc0b6c50  jal         func_2DB140
    ctx->pc = 0x2DAF28u;
    SET_GPR_U32(ctx, 31, 0x2DAF30u);
    ctx->pc = 0x2DB140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB140u, 0x2DAF28u, 0x2DAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF30u;
label_2daf30:
    // 0x2daf30: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAF30u;
    {
        const bool branch_taken_0x2daf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daf30) {
            ctx->pc = 0x2DAF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAF30u;
            // 0x2daf34: 0x8e0263b8  lw          $v0, 0x63B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAF44u;
            goto label_2daf44;
        }
    }
    ctx->pc = 0x2DAF38u;
    // 0x2daf38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2daf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2daf3c: 0xae0263a0  sw          $v0, 0x63A0($s0)
    ctx->pc = 0x2daf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25504), GPR_U32(ctx, 2));
    // 0x2daf40: 0x8e0263b8  lw          $v0, 0x63B8($s0)
    ctx->pc = 0x2daf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25528)));
label_2daf44:
    // 0x2daf44: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DAF44u;
    {
        const bool branch_taken_0x2daf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF44u;
        // 0x2daf48: 0xae0263bc  sw          $v0, 0x63BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 25532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf44) {
            ctx->pc = 0x2DAFD8u;
            goto label_2dafd8;
        }
    }
    ctx->pc = 0x2DAF4Cu;
label_2daf4c:
    // 0x2daf4c: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x2daf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
label_2daf50:
    // 0x2daf50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAF50u;
    {
        const bool branch_taken_0x2daf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF50u;
        // 0x2daf54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf50) {
            ctx->pc = 0x2DAF64u;
            goto label_2daf64;
        }
    }
    ctx->pc = 0x2DAF58u;
    // 0x2daf58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2daf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2daf5c: 0x9043b820  lbu         $v1, -0x47E0($v0)
    ctx->pc = 0x2daf5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB820u));
    // 0x2daf60: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x2daf60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2daf64:
    // 0x2daf64: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAF64u;
    {
        const bool branch_taken_0x2daf64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF64u;
        // 0x2daf68: 0x8e0263b4  lw          $v0, 0x63B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf64) {
            ctx->pc = 0x2DAF78u;
            goto label_2daf78;
        }
    }
    ctx->pc = 0x2DAF6Cu;
    // 0x2daf6c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2daf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2daf70: 0xae0263b4  sw          $v0, 0x63B4($s0)
    ctx->pc = 0x2daf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25524), GPR_U32(ctx, 2));
    // 0x2daf74: 0x8e0263b4  lw          $v0, 0x63B4($s0)
    ctx->pc = 0x2daf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25524)));
label_2daf78:
    // 0x2daf78: 0x5c400018  bgtzl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DAF78u;
    {
        const bool branch_taken_0x2daf78 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2daf78) {
            ctx->pc = 0x2DAF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAF78u;
            // 0x2daf7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAFDCu;
            goto label_2dafdc;
        }
    }
    ctx->pc = 0x2DAF80u;
    // 0x2daf80: 0xc0b6bfc  jal         func_2DAFF0
    ctx->pc = 0x2DAF80u;
    SET_GPR_U32(ctx, 31, 0x2DAF88u);
    ctx->pc = 0x2DAF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF80u;
    // 0x2daf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAFF0u, 0x2DAF80u, 0x2DAF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF88u;
label_2daf88:
    // 0x2daf88: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DAF88u;
    {
        const bool branch_taken_0x2daf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daf88) {
            ctx->pc = 0x2DAF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAF88u;
            // 0x2daf8c: 0x8e0263b0  lw          $v0, 0x63B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAFD4u;
            goto label_2dafd4;
        }
    }
    ctx->pc = 0x2DAF90u;
    // 0x2daf90: 0x8e0363b0  lw          $v1, 0x63B0($s0)
    ctx->pc = 0x2daf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25520)));
    // 0x2daf94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2daf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2daf98: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DAF98u;
    {
        const bool branch_taken_0x2daf98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2daf98) {
            ctx->pc = 0x2DAF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAF98u;
            // 0x2daf9c: 0x8e0263b0  lw          $v0, 0x63B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAFD4u;
            goto label_2dafd4;
        }
    }
    ctx->pc = 0x2DAFA0u;
    // 0x2dafa0: 0xae006394  sw          $zero, 0x6394($s0)
    ctx->pc = 0x2dafa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25492), GPR_U32(ctx, 0));
    // 0x2dafa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dafa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dafa8: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2DAFA8u;
    SET_GPR_U32(ctx, 31, 0x2DAFB0u);
    ctx->pc = 0x2DAFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFA8u;
    // 0x2dafac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2DAFA8u, 0x2DAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFB0u;
label_2dafb0:
    // 0x2dafb0: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DAFB0u;
    {
        const bool branch_taken_0x2dafb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dafb0) {
            ctx->pc = 0x2DAFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAFB0u;
            // 0x2dafb4: 0x8e0263b0  lw          $v0, 0x63B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAFD4u;
            goto label_2dafd4;
        }
    }
    ctx->pc = 0x2DAFB8u;
    // 0x2dafb8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2dafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2dafbc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2dafbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2dafc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dafc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dafc4: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2dafc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2dafc8: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x2DAFC8u;
    SET_GPR_U32(ctx, 31, 0x2DAFD0u);
    ctx->pc = 0x2DAFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFC8u;
    // 0x2dafcc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2DAFC8u, 0x2DAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFD0u;
label_2dafd0:
    // 0x2dafd0: 0x8e0263b0  lw          $v0, 0x63B0($s0)
    ctx->pc = 0x2dafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25520)));
label_2dafd4:
    // 0x2dafd4: 0xae0263b4  sw          $v0, 0x63B4($s0)
    ctx->pc = 0x2dafd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25524), GPR_U32(ctx, 2));
label_2dafd8:
    // 0x2dafd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dafd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dafdc:
    // 0x2dafdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dafdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dafe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dafe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dafe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFE4u;
        // 0x2dafe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAFECu;
    // 0x2dafec: 0x0  nop
    ctx->pc = 0x2dafecu;
    // NOP
    ctx->pc = 0x2daff0u;
}
