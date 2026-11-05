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

// Function: sub_00122940
// Address: 0x122940 - 0x122ac0
void sub_00122940_0x122940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122940_0x122940");
#endif

    switch (ctx->pc) {
        case 0x122994u: goto label_122994;
        case 0x1229a4u: goto label_1229a4;
        case 0x1229b4u: goto label_1229b4;
        case 0x1229d0u: goto label_1229d0;
        case 0x1229ecu: goto label_1229ec;
        case 0x1229fcu: goto label_1229fc;
        case 0x122a08u: goto label_122a08;
        case 0x122a14u: goto label_122a14;
        case 0x122a20u: goto label_122a20;
        case 0x122a5cu: goto label_122a5c;
        case 0x122a68u: goto label_122a68;
        case 0x122a74u: goto label_122a74;
        case 0x122a80u: goto label_122a80;
        case 0x122a8cu: goto label_122a8c;
        default: break;
    }

    ctx->pc = 0x122940u;

    // 0x122940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122944: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x122944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x122948: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x122948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12294c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12294cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122954: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x122954u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12295c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x12295cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122960: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x122960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x122964: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x122964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122968: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x122968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12296c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x12296cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122970: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x122970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x122974: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x122974u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122978: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x122978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x12297c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x12297cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122980: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122984: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x122984u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122988: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x122988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x12298c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x12298Cu;
    SET_GPR_U32(ctx, 31, 0x122994u);
    ctx->pc = 0x122990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12298Cu;
    // 0x122990: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x12298Cu, 0x122994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122994u;
label_122994:
    // 0x122994: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x122994u;
    {
        const bool branch_taken_0x122994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122994u;
        // 0x122998: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122994) {
            ctx->pc = 0x122A90u;
            goto label_122a90;
        }
    }
    ctx->pc = 0x12299Cu;
    // 0x12299c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x12299Cu;
    SET_GPR_U32(ctx, 31, 0x1229A4u);
    ctx->pc = 0x1229A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12299Cu;
    // 0x1229a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x12299Cu, 0x1229A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229A4u;
label_1229a4:
    // 0x1229a4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1229A4u;
    {
        const bool branch_taken_0x1229a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229A4u;
        // 0x1229a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229a4) {
            ctx->pc = 0x122A90u;
            goto label_122a90;
        }
    }
    ctx->pc = 0x1229ACu;
    // 0x1229ac: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1229ACu;
    SET_GPR_U32(ctx, 31, 0x1229B4u);
    ctx->pc = 0x1229B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229ACu;
    // 0x1229b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1229ACu, 0x1229B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229B4u;
label_1229b4:
    // 0x1229b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1229B4u;
    {
        const bool branch_taken_0x1229b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229B4u;
        // 0x1229b8: 0x2ae20002  slti        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229b4) {
            ctx->pc = 0x1229C4u;
            goto label_1229c4;
        }
    }
    ctx->pc = 0x1229BCu;
    // 0x1229bc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1229BCu;
    {
        const bool branch_taken_0x1229bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229BCu;
        // 0x1229c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229bc) {
            ctx->pc = 0x122A90u;
            goto label_122a90;
        }
    }
    ctx->pc = 0x1229C4u;
label_1229c4:
    // 0x1229c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1229c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229c8: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x1229C8u;
    SET_GPR_U32(ctx, 31, 0x1229D0u);
    ctx->pc = 0x1229CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229C8u;
    // 0x1229cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x1229C8u, 0x1229D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229D0u;
label_1229d0:
    // 0x1229d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1229d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229d4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1229D4u;
    {
        const bool branch_taken_0x1229d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1229D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229D4u;
        // 0x1229d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229d4) {
            ctx->pc = 0x1229E4u;
            goto label_1229e4;
        }
    }
    ctx->pc = 0x1229DCu;
    // 0x1229dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1229DCu;
    {
        const bool branch_taken_0x1229dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229DCu;
        // 0x1229e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229dc) {
            ctx->pc = 0x122A90u;
            goto label_122a90;
        }
    }
    ctx->pc = 0x1229E4u;
label_1229e4:
    // 0x1229e4: 0xc04a2e0  jal         func_128B80
    ctx->pc = 0x1229E4u;
    SET_GPR_U32(ctx, 31, 0x1229ECu);
    ctx->pc = 0x1229E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229E4u;
    // 0x1229e8: 0x24050abd  addiu       $a1, $zero, 0xABD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2749));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B80u, 0x1229E4u, 0x1229ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229ECu;
label_1229ec:
    // 0x1229ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1229ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1229f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229f4: 0xc05a6b0  jal         func_169AC0
    ctx->pc = 0x1229F4u;
    SET_GPR_U32(ctx, 31, 0x1229FCu);
    ctx->pc = 0x1229F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229F4u;
    // 0x1229f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AC0u, 0x1229F4u, 0x1229FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229FCu;
label_1229fc:
    // 0x1229fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1229fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a00: 0xc05a6ba  jal         func_169AE8
    ctx->pc = 0x122A00u;
    SET_GPR_U32(ctx, 31, 0x122A08u);
    ctx->pc = 0x122A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A00u;
    // 0x122a04: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE8u, 0x122A00u, 0x122A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A08u;
label_122a08:
    // 0x122a08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x122a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a0c: 0xc05a6d2  jal         func_169B48
    ctx->pc = 0x122A0Cu;
    SET_GPR_U32(ctx, 31, 0x122A14u);
    ctx->pc = 0x122A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A0Cu;
    // 0x122a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B48u, 0x122A0Cu, 0x122A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A14u;
label_122a14:
    // 0x122a14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x122a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a18: 0xc05a70e  jal         func_169C38
    ctx->pc = 0x122A18u;
    SET_GPR_U32(ctx, 31, 0x122A20u);
    ctx->pc = 0x122A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A18u;
    // 0x122a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C38u, 0x122A18u, 0x122A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A20u;
label_122a20:
    // 0x122a20: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x122A20u;
    {
        const bool branch_taken_0x122a20 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x122A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A20u;
        // 0x122a24: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a20) {
            ctx->pc = 0x122A3Cu;
            goto label_122a3c;
        }
    }
    ctx->pc = 0x122A28u;
    // 0x122a28: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x122a28u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122a2c: 0x0  nop
    ctx->pc = 0x122a2cu;
    // NOP
    // 0x122a30: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x122a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x122a34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x122A34u;
    {
        const bool branch_taken_0x122a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122a34) {
            ctx->pc = 0x122A54u;
            goto label_122a54;
        }
    }
    ctx->pc = 0x122A3Cu;
label_122a3c:
    // 0x122a3c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x122a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x122a40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x122a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x122a44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x122a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122a48: 0x0  nop
    ctx->pc = 0x122a48u;
    // NOP
    // 0x122a4c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x122a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x122a50: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x122a50u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_122a54:
    // 0x122a54: 0xc05a722  jal         func_169C88
    ctx->pc = 0x122A54u;
    SET_GPR_U32(ctx, 31, 0x122A5Cu);
    ctx->pc = 0x122A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A54u;
    // 0x122a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C88u, 0x122A54u, 0x122A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A5Cu;
label_122a5c:
    // 0x122a5c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x122a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a60: 0xc05a736  jal         func_169CD8
    ctx->pc = 0x122A60u;
    SET_GPR_U32(ctx, 31, 0x122A68u);
    ctx->pc = 0x122A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A60u;
    // 0x122a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169CD8u, 0x122A60u, 0x122A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A68u;
label_122a68:
    // 0x122a68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x122a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a6c: 0xc05a6be  jal         func_169AF8
    ctx->pc = 0x122A6Cu;
    SET_GPR_U32(ctx, 31, 0x122A74u);
    ctx->pc = 0x122A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A6Cu;
    // 0x122a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AF8u, 0x122A6Cu, 0x122A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A74u;
label_122a74:
    // 0x122a74: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x122a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x122a78: 0xc05a74a  jal         func_169D28
    ctx->pc = 0x122A78u;
    SET_GPR_U32(ctx, 31, 0x122A80u);
    ctx->pc = 0x122A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A78u;
    // 0x122a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169D28u, 0x122A78u, 0x122A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A80u;
label_122a80:
    // 0x122a80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x122a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a84: 0xc049944  jal         func_126510
    ctx->pc = 0x122A84u;
    SET_GPR_U32(ctx, 31, 0x122A8Cu);
    ctx->pc = 0x122A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A84u;
    // 0x122a88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x122A84u, 0x122A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A8Cu;
label_122a8c:
    // 0x122a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122a90:
    // 0x122a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122a98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x122a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122a9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x122a9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122aa0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x122aa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122aa4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x122aa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122aa8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x122aa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122aac: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x122aacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x122ab0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x122ab0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122ab4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x122ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x122ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x122AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AB8u;
        // 0x122abc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122AC0u;
}
