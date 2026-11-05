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

// Function: sub_00122C30
// Address: 0x122c30 - 0x122d70
void sub_00122C30_0x122c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122C30_0x122c30");
#endif

    switch (ctx->pc) {
        case 0x122c84u: goto label_122c84;
        case 0x122c94u: goto label_122c94;
        case 0x122cb0u: goto label_122cb0;
        case 0x122cc4u: goto label_122cc4;
        case 0x122cd4u: goto label_122cd4;
        case 0x122ce0u: goto label_122ce0;
        case 0x122cecu: goto label_122cec;
        case 0x122cf8u: goto label_122cf8;
        case 0x122d04u: goto label_122d04;
        case 0x122d10u: goto label_122d10;
        case 0x122d1cu: goto label_122d1c;
        case 0x122d28u: goto label_122d28;
        case 0x122d34u: goto label_122d34;
        default: break;
    }

    ctx->pc = 0x122c30u;

    // 0x122c30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x122c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x122c34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122c38: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x122c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x122c3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x122c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122c44: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x122c44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x122c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x122c4c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x122c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x122c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x122c54: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x122c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x122c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x122c5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x122c5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c60: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x122c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x122c64: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x122c64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c68: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x122c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x122c6c: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x122c6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122c74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x122c74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x122c78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x122c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x122c7c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122C7Cu;
    SET_GPR_U32(ctx, 31, 0x122C84u);
    ctx->pc = 0x122C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C7Cu;
    // 0x122c80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122C7Cu, 0x122C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C84u;
label_122c84:
    // 0x122c84: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x122C84u;
    {
        const bool branch_taken_0x122c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C84u;
        // 0x122c88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c84) {
            ctx->pc = 0x122D40u;
            goto label_122d40;
        }
    }
    ctx->pc = 0x122C8Cu;
    // 0x122c8c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122C8Cu;
    SET_GPR_U32(ctx, 31, 0x122C94u);
    ctx->pc = 0x122C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C8Cu;
    // 0x122c90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122C8Cu, 0x122C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C94u;
label_122c94:
    // 0x122c94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122C94u;
    {
        const bool branch_taken_0x122c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C94u;
        // 0x122c98: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c94) {
            ctx->pc = 0x122CA4u;
            goto label_122ca4;
        }
    }
    ctx->pc = 0x122C9Cu;
    // 0x122c9c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x122C9Cu;
    {
        const bool branch_taken_0x122c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C9Cu;
        // 0x122ca0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c9c) {
            ctx->pc = 0x122D40u;
            goto label_122d40;
        }
    }
    ctx->pc = 0x122CA4u;
label_122ca4:
    // 0x122ca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ca8: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x122CA8u;
    SET_GPR_U32(ctx, 31, 0x122CB0u);
    ctx->pc = 0x122CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CA8u;
    // 0x122cac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x122CA8u, 0x122CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CB0u;
label_122cb0:
    // 0x122cb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cb4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x122CB4u;
    {
        const bool branch_taken_0x122cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x122CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CB4u;
        // 0x122cb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cb4) {
            ctx->pc = 0x122D3Cu;
            goto label_122d3c;
        }
    }
    ctx->pc = 0x122CBCu;
    // 0x122cbc: 0xc04a2e0  jal         func_128B80
    ctx->pc = 0x122CBCu;
    SET_GPR_U32(ctx, 31, 0x122CC4u);
    ctx->pc = 0x122CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CBCu;
    // 0x122cc0: 0x24050b51  addiu       $a1, $zero, 0xB51 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2897));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B80u, 0x122CBCu, 0x122CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CC4u;
label_122cc4:
    // 0x122cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x122cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ccc: 0xc05a6b0  jal         func_169AC0
    ctx->pc = 0x122CCCu;
    SET_GPR_U32(ctx, 31, 0x122CD4u);
    ctx->pc = 0x122CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CCCu;
    // 0x122cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AC0u, 0x122CCCu, 0x122CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CD4u;
label_122cd4:
    // 0x122cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cd8: 0xc05a6ba  jal         func_169AE8
    ctx->pc = 0x122CD8u;
    SET_GPR_U32(ctx, 31, 0x122CE0u);
    ctx->pc = 0x122CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CD8u;
    // 0x122cdc: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE8u, 0x122CD8u, 0x122CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CE0u;
label_122ce0:
    // 0x122ce0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x122ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ce4: 0xc05a6d2  jal         func_169B48
    ctx->pc = 0x122CE4u;
    SET_GPR_U32(ctx, 31, 0x122CECu);
    ctx->pc = 0x122CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CE4u;
    // 0x122ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B48u, 0x122CE4u, 0x122CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CECu;
label_122cec:
    // 0x122cec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cf0: 0xc05a70e  jal         func_169C38
    ctx->pc = 0x122CF0u;
    SET_GPR_U32(ctx, 31, 0x122CF8u);
    ctx->pc = 0x122CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CF0u;
    // 0x122cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C38u, 0x122CF0u, 0x122CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CF8u;
label_122cf8:
    // 0x122cf8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x122cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cfc: 0xc05a6be  jal         func_169AF8
    ctx->pc = 0x122CFCu;
    SET_GPR_U32(ctx, 31, 0x122D04u);
    ctx->pc = 0x122D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CFCu;
    // 0x122d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AF8u, 0x122CFCu, 0x122D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D04u;
label_122d04:
    // 0x122d04: 0x32a500ff  andi        $a1, $s5, 0xFF
    ctx->pc = 0x122d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x122d08: 0xc05a74a  jal         func_169D28
    ctx->pc = 0x122D08u;
    SET_GPR_U32(ctx, 31, 0x122D10u);
    ctx->pc = 0x122D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D08u;
    // 0x122d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169D28u, 0x122D08u, 0x122D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D10u;
label_122d10:
    // 0x122d10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x122d10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x122d14: 0xc05a722  jal         func_169C88
    ctx->pc = 0x122D14u;
    SET_GPR_U32(ctx, 31, 0x122D1Cu);
    ctx->pc = 0x122D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D14u;
    // 0x122d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C88u, 0x122D14u, 0x122D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D1Cu;
label_122d1c:
    // 0x122d1c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x122d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d20: 0xc05a736  jal         func_169CD8
    ctx->pc = 0x122D20u;
    SET_GPR_U32(ctx, 31, 0x122D28u);
    ctx->pc = 0x122D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D20u;
    // 0x122d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169CD8u, 0x122D20u, 0x122D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D28u;
label_122d28:
    // 0x122d28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x122d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d2c: 0xc049944  jal         func_126510
    ctx->pc = 0x122D2Cu;
    SET_GPR_U32(ctx, 31, 0x122D34u);
    ctx->pc = 0x122D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D2Cu;
    // 0x122d30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x122D2Cu, 0x122D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D34u;
label_122d34:
    // 0x122d34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x122D34u;
    {
        const bool branch_taken_0x122d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D34u;
        // 0x122d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d34) {
            ctx->pc = 0x122D40u;
            goto label_122d40;
        }
    }
    ctx->pc = 0x122D3Cu;
label_122d3c:
    // 0x122d3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122d40:
    // 0x122d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122d44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122d48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x122d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x122d4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122d50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x122d50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122d54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x122d54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122d58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x122d58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122d5c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x122d5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x122d60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x122d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122d64: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x122d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122d68: 0x3e00008  jr          $ra
    ctx->pc = 0x122D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D68u;
        // 0x122d6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122D70u;
}
