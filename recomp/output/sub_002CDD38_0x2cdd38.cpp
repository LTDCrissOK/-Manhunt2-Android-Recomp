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

// Function: sub_002CDD38
// Address: 0x2cdd38 - 0x2cde68
void sub_002CDD38_0x2cdd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDD38_0x2cdd38");
#endif

    switch (ctx->pc) {
        case 0x2cddacu: goto label_2cddac;
        case 0x2cddbcu: goto label_2cddbc;
        case 0x2cddd0u: goto label_2cddd0;
        case 0x2cddf0u: goto label_2cddf0;
        case 0x2cde00u: goto label_2cde00;
        case 0x2cde14u: goto label_2cde14;
        case 0x2cde28u: goto label_2cde28;
        case 0x2cde38u: goto label_2cde38;
        default: break;
    }

    ctx->pc = 0x2cdd38u;

    // 0x2cdd38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cdd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cdd3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cdd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cdd40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cdd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cdd44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cdd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd48: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2cdd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2cdd4c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2cdd4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd50: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2cdd50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cdd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cdd58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cdd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cdd5c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2cdd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2cdd60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cdd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cdd64: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x2cdd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x2cdd68: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2cdd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2cdd6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cdd6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cdd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cdd74: 0xe2382a  slt         $a3, $a3, $v0
    ctx->pc = 0x2cdd74u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cdd78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cdd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cdd7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2cdd7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd80: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2cdd80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd84: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2cdd84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd88: 0x14e0002c  bnez        $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CDD88u;
    {
        const bool branch_taken_0x2cdd88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD88u;
        // 0x2cdd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd88) {
            ctx->pc = 0x2CDE3Cu;
            goto label_2cde3c;
        }
    }
    ctx->pc = 0x2CDD90u;
    // 0x2cdd90: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2cdd90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2cdd94: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CDD94u;
    {
        const bool branch_taken_0x2cdd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD94u;
        // 0x2cdd98: 0x211a023  subu        $s4, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd94) {
            ctx->pc = 0x2CDDD8u;
            goto label_2cddd8;
        }
    }
    ctx->pc = 0x2CDD9Cu;
    // 0x2cdd9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cdd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdda0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cdda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdda4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2CDDA4u;
    SET_GPR_U32(ctx, 31, 0x2CDDACu);
    ctx->pc = 0x2CDDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDA4u;
    // 0x2cdda8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2CDDA4u, 0x2CDDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDACu;
label_2cddac:
    // 0x2cddac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cddacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cddb0: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x2cddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2cddb4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2CDDB4u;
    SET_GPR_U32(ctx, 31, 0x2CDDBCu);
    ctx->pc = 0x2CDDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDB4u;
    // 0x2cddb8: 0x2303023  subu        $a2, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2CDDB4u, 0x2CDDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDBCu;
label_2cddbc:
    // 0x2cddbc: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x2cddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2cddc0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2cddc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cddc4: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x2cddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2cddc8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2CDDC8u;
    SET_GPR_U32(ctx, 31, 0x2CDDD0u);
    ctx->pc = 0x2CDDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDC8u;
    // 0x2cddcc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2CDDC8u, 0x2CDDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDD0u;
label_2cddd0:
    // 0x2cddd0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2CDDD0u;
    {
        const bool branch_taken_0x2cddd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDD0u;
        // 0x2cddd4: 0x2371021  addu        $v0, $s1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddd0) {
            ctx->pc = 0x2CDE3Cu;
            goto label_2cde3c;
        }
    }
    ctx->pc = 0x2CDDD8u;
label_2cddd8:
    // 0x2cddd8: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x2cddd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2cdddc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CDDDCu;
    {
        const bool branch_taken_0x2cdddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDDCu;
        // 0x2cdde0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdddc) {
            ctx->pc = 0x2CDE1Cu;
            goto label_2cde1c;
        }
    }
    ctx->pc = 0x2CDDE4u;
    // 0x2cdde4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cdde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdde8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2CDDE8u;
    SET_GPR_U32(ctx, 31, 0x2CDDF0u);
    ctx->pc = 0x2CDDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDE8u;
    // 0x2cddec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2CDDE8u, 0x2CDDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDF0u;
label_2cddf0:
    // 0x2cddf0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2cddf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cddf4: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x2cddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2cddf8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2CDDF8u;
    SET_GPR_U32(ctx, 31, 0x2CDE00u);
    ctx->pc = 0x2CDDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDF8u;
    // 0x2cddfc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2CDDF8u, 0x2CDE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE00u;
label_2cde00:
    // 0x2cde00: 0x2b02821  addu        $a1, $s5, $s0
    ctx->pc = 0x2cde00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2cde04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cde04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde08: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x2cde08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2cde0c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2CDE0Cu;
    SET_GPR_U32(ctx, 31, 0x2CDE14u);
    ctx->pc = 0x2CDE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE0Cu;
    // 0x2cde10: 0x2f43023  subu        $a2, $s7, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2CDE0Cu, 0x2CDE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE14u;
label_2cde14:
    // 0x2cde14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDE14u;
    {
        const bool branch_taken_0x2cde14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE14u;
        // 0x2cde18: 0x2371021  addu        $v0, $s1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde14) {
            ctx->pc = 0x2CDE3Cu;
            goto label_2cde3c;
        }
    }
    ctx->pc = 0x2CDE1Cu;
label_2cde1c:
    // 0x2cde1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cde1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde20: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2CDE20u;
    SET_GPR_U32(ctx, 31, 0x2CDE28u);
    ctx->pc = 0x2CDE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE20u;
    // 0x2cde24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2CDE20u, 0x2CDE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE28u;
label_2cde28:
    // 0x2cde28: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x2cde28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2cde2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2cde2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde30: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2CDE30u;
    SET_GPR_U32(ctx, 31, 0x2CDE38u);
    ctx->pc = 0x2CDE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE30u;
    // 0x2cde34: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2CDE30u, 0x2CDE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE38u;
label_2cde38:
    // 0x2cde38: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x2cde38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
label_2cde3c:
    // 0x2cde3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cde3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cde40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cde40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cde44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cde44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cde48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cde48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cde4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cde4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cde50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cde50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cde54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cde54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cde58: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2cde58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cde5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cde5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cde60: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE60u;
        // 0x2cde64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDE68u;
}
