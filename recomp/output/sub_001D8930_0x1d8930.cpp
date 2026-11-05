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

// Function: sub_001D8930
// Address: 0x1d8930 - 0x1d8ba8
void sub_001D8930_0x1d8930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8930_0x1d8930");
#endif

    switch (ctx->pc) {
        case 0x1d8960u: goto label_1d8960;
        case 0x1d8974u: goto label_1d8974;
        case 0x1d8988u: goto label_1d8988;
        case 0x1d89a8u: goto label_1d89a8;
        case 0x1d89d0u: goto label_1d89d0;
        case 0x1d89f0u: goto label_1d89f0;
        case 0x1d89f8u: goto label_1d89f8;
        case 0x1d8a30u: goto label_1d8a30;
        case 0x1d8a50u: goto label_1d8a50;
        case 0x1d8a78u: goto label_1d8a78;
        case 0x1d8a98u: goto label_1d8a98;
        case 0x1d8aacu: goto label_1d8aac;
        case 0x1d8ab4u: goto label_1d8ab4;
        case 0x1d8ae8u: goto label_1d8ae8;
        case 0x1d8b08u: goto label_1d8b08;
        case 0x1d8b10u: goto label_1d8b10;
        case 0x1d8b48u: goto label_1d8b48;
        case 0x1d8b68u: goto label_1d8b68;
        case 0x1d8b70u: goto label_1d8b70;
        case 0x1d8b7cu: goto label_1d8b7c;
        case 0x1d8b8cu: goto label_1d8b8c;
        default: break;
    }

    ctx->pc = 0x1d8930u;

    // 0x1d8930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d8938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d893c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d893cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8944: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d8944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d8948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d8948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d894c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1d894cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d8950: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8950u;
    {
        const bool branch_taken_0x1d8950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8950u;
        // 0x1d8954: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8950) {
            ctx->pc = 0x1D8960u;
            goto label_1d8960;
        }
    }
    ctx->pc = 0x1D8958u;
    // 0x1d8958: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D8958u;
    SET_GPR_U32(ctx, 31, 0x1D8960u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D8958u, 0x1D8960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8960u;
label_1d8960:
    // 0x1d8960: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d8960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8964: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8964u;
    {
        const bool branch_taken_0x1d8964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8964) {
            ctx->pc = 0x1D8968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8964u;
            // 0x1d8968: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8978u;
            goto label_1d8978;
        }
    }
    ctx->pc = 0x1D896Cu;
    // 0x1d896c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D896Cu;
    SET_GPR_U32(ctx, 31, 0x1D8974u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D896Cu, 0x1D8974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8974u;
label_1d8974:
    // 0x1d8974: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d8974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d8978:
    // 0x1d8978: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8978u;
    {
        const bool branch_taken_0x1d8978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8978u;
        // 0x1d897c: 0x32530001  andi        $s3, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8978) {
            ctx->pc = 0x1D8988u;
            goto label_1d8988;
        }
    }
    ctx->pc = 0x1D8980u;
    // 0x1d8980: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D8980u;
    SET_GPR_U32(ctx, 31, 0x1D8988u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D8980u, 0x1D8988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8988u;
label_1d8988:
    // 0x1d8988: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x1d8988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d898c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D898Cu;
    {
        const bool branch_taken_0x1d898c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D898Cu;
        // 0x1d8990: 0x2632001c  addiu       $s2, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d898c) {
            ctx->pc = 0x1D89F8u;
            goto label_1d89f8;
        }
    }
    ctx->pc = 0x1D8994u;
    // 0x1d8994: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d8994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8998: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8998u;
    {
        const bool branch_taken_0x1d8998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8998) {
            ctx->pc = 0x1D899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8998u;
            // 0x1d899c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D89ACu;
            goto label_1d89ac;
        }
    }
    ctx->pc = 0x1D89A0u;
    // 0x1d89a0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D89A0u;
    SET_GPR_U32(ctx, 31, 0x1D89A8u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D89A0u, 0x1D89A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89A8u;
label_1d89a8:
    // 0x1d89a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1d89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d89ac:
    // 0x1d89ac: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D89ACu;
    {
        const bool branch_taken_0x1d89ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89ACu;
        // 0x1d89b0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89ac) {
            ctx->pc = 0x1D89F0u;
            goto label_1d89f0;
        }
    }
    ctx->pc = 0x1D89B4u;
    // 0x1d89b4: 0x8c83fff0  lw          $v1, -0x10($a0)
    ctx->pc = 0x1d89b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1d89b8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x1d89b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d89bc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1d89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d89c0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D89C0u;
    {
        const bool branch_taken_0x1d89c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89C0u;
        // 0x1d89c4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89c0) {
            ctx->pc = 0x1D89E8u;
            goto label_1d89e8;
        }
    }
    ctx->pc = 0x1D89C8u;
    // 0x1d89c8: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x1d89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x1d89cc: 0x0  nop
    ctx->pc = 0x1d89ccu;
    // NOP
label_1d89d0:
    // 0x1d89d0: 0x0  nop
    ctx->pc = 0x1d89d0u;
    // NOP
    // 0x1d89d4: 0x0  nop
    ctx->pc = 0x1d89d4u;
    // NOP
    // 0x1d89d8: 0x0  nop
    ctx->pc = 0x1d89d8u;
    // NOP
    // 0x1d89dc: 0x0  nop
    ctx->pc = 0x1d89dcu;
    // NOP
    // 0x1d89e0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D89E0u;
    {
        const bool branch_taken_0x1d89e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89E0u;
        // 0x1d89e4: 0x2442ffb0  addiu       $v0, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89e0) {
            ctx->pc = 0x1D89D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d89d0;
        }
    }
    ctx->pc = 0x1D89E8u;
label_1d89e8:
    // 0x1d89e8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D89E8u;
    SET_GPR_U32(ctx, 31, 0x1D89F0u);
    ctx->pc = 0x1D89ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89E8u;
    // 0x1d89ec: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D89E8u, 0x1D89F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89F0u;
label_1d89f0:
    // 0x1d89f0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D89F0u;
    SET_GPR_U32(ctx, 31, 0x1D89F8u);
    ctx->pc = 0x1D89F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89F0u;
    // 0x1d89f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D89F0u, 0x1D89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89F8u;
label_1d89f8:
    // 0x1d89f8: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x1d89f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d89fc: 0x5200002e  beql        $s0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1D89FCu;
    {
        const bool branch_taken_0x1d89fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d89fc) {
            ctx->pc = 0x1D8A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D89FCu;
            // 0x1d8a00: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8AB8u;
            goto label_1d8ab8;
        }
    }
    ctx->pc = 0x1D8A04u;
    // 0x1d8a04: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d8a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d8a08: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8A08u;
    {
        const bool branch_taken_0x1d8a08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A08u;
        // 0x1d8a0c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a08) {
            ctx->pc = 0x1D8A50u;
            goto label_1d8a50;
        }
    }
    ctx->pc = 0x1D8A10u;
    // 0x1d8a10: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1d8a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1d8a14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d8a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a18: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1d8a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d8a1c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1d8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d8a20: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8A20u;
    {
        const bool branch_taken_0x1d8a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A20u;
        // 0x1d8a24: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a20) {
            ctx->pc = 0x1D8A48u;
            goto label_1d8a48;
        }
    }
    ctx->pc = 0x1D8A28u;
    // 0x1d8a28: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1d8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1d8a2c: 0x0  nop
    ctx->pc = 0x1d8a2cu;
    // NOP
label_1d8a30:
    // 0x1d8a30: 0x0  nop
    ctx->pc = 0x1d8a30u;
    // NOP
    // 0x1d8a34: 0x0  nop
    ctx->pc = 0x1d8a34u;
    // NOP
    // 0x1d8a38: 0x0  nop
    ctx->pc = 0x1d8a38u;
    // NOP
    // 0x1d8a3c: 0x0  nop
    ctx->pc = 0x1d8a3cu;
    // NOP
    // 0x1d8a40: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D8A40u;
    {
        const bool branch_taken_0x1d8a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A40u;
        // 0x1d8a44: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a40) {
            ctx->pc = 0x1D8A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a30;
        }
    }
    ctx->pc = 0x1D8A48u;
label_1d8a48:
    // 0x1d8a48: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D8A48u;
    SET_GPR_U32(ctx, 31, 0x1D8A50u);
    ctx->pc = 0x1D8A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A48u;
    // 0x1d8a4c: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D8A48u, 0x1D8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A50u;
label_1d8a50:
    // 0x1d8a50: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1d8a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d8a54: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8A54u;
    {
        const bool branch_taken_0x1d8a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a54) {
            ctx->pc = 0x1D8A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8A54u;
            // 0x1d8a58: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8A9Cu;
            goto label_1d8a9c;
        }
    }
    ctx->pc = 0x1D8A5Cu;
    // 0x1d8a5c: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x1d8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1d8a60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d8a64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d8a68: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8A68u;
    {
        const bool branch_taken_0x1d8a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A68u;
        // 0x1d8a6c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a68) {
            ctx->pc = 0x1D8A90u;
            goto label_1d8a90;
        }
    }
    ctx->pc = 0x1D8A70u;
    // 0x1d8a70: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1d8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1d8a74: 0x0  nop
    ctx->pc = 0x1d8a74u;
    // NOP
label_1d8a78:
    // 0x1d8a78: 0x0  nop
    ctx->pc = 0x1d8a78u;
    // NOP
    // 0x1d8a7c: 0x0  nop
    ctx->pc = 0x1d8a7cu;
    // NOP
    // 0x1d8a80: 0x0  nop
    ctx->pc = 0x1d8a80u;
    // NOP
    // 0x1d8a84: 0x0  nop
    ctx->pc = 0x1d8a84u;
    // NOP
    // 0x1d8a88: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D8A88u;
    {
        const bool branch_taken_0x1d8a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A88u;
        // 0x1d8a8c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a88) {
            ctx->pc = 0x1D8A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a78;
        }
    }
    ctx->pc = 0x1D8A90u;
label_1d8a90:
    // 0x1d8a90: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D8A90u;
    SET_GPR_U32(ctx, 31, 0x1D8A98u);
    ctx->pc = 0x1D8A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A90u;
    // 0x1d8a94: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D8A90u, 0x1D8A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A98u;
label_1d8a98:
    // 0x1d8a98: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1d8a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1d8a9c:
    // 0x1d8a9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8A9Cu;
    {
        const bool branch_taken_0x1d8a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a9c) {
            ctx->pc = 0x1D8AACu;
            goto label_1d8aac;
        }
    }
    ctx->pc = 0x1D8AA4u;
    // 0x1d8aa4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D8AA4u;
    SET_GPR_U32(ctx, 31, 0x1D8AACu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D8AA4u, 0x1D8AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AACu;
label_1d8aac:
    // 0x1d8aac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D8AACu;
    SET_GPR_U32(ctx, 31, 0x1D8AB4u);
    ctx->pc = 0x1D8AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AACu;
    // 0x1d8ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D8AACu, 0x1D8AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AB4u;
label_1d8ab4:
    // 0x1d8ab4: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x1d8ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1d8ab8:
    // 0x1d8ab8: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D8AB8u;
    {
        const bool branch_taken_0x1d8ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ab8) {
            ctx->pc = 0x1D8ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8AB8u;
            // 0x1d8abc: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8B14u;
            goto label_1d8b14;
        }
    }
    ctx->pc = 0x1D8AC0u;
    // 0x1d8ac0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d8ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d8ac4: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8AC4u;
    {
        const bool branch_taken_0x1d8ac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AC4u;
        // 0x1d8ac8: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ac4) {
            ctx->pc = 0x1D8B08u;
            goto label_1d8b08;
        }
    }
    ctx->pc = 0x1D8ACCu;
    // 0x1d8acc: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1d8accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1d8ad0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d8ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ad4: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1d8ad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d8ad8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1d8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d8adc: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8ADCu;
    {
        const bool branch_taken_0x1d8adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ADCu;
        // 0x1d8ae0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8adc) {
            ctx->pc = 0x1D8B00u;
            goto label_1d8b00;
        }
    }
    ctx->pc = 0x1D8AE4u;
    // 0x1d8ae4: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x1d8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
label_1d8ae8:
    // 0x1d8ae8: 0x0  nop
    ctx->pc = 0x1d8ae8u;
    // NOP
    // 0x1d8aec: 0x0  nop
    ctx->pc = 0x1d8aecu;
    // NOP
    // 0x1d8af0: 0x0  nop
    ctx->pc = 0x1d8af0u;
    // NOP
    // 0x1d8af4: 0x0  nop
    ctx->pc = 0x1d8af4u;
    // NOP
    // 0x1d8af8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D8AF8u;
    {
        const bool branch_taken_0x1d8af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D8AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AF8u;
        // 0x1d8afc: 0x2442ffa0  addiu       $v0, $v0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8af8) {
            ctx->pc = 0x1D8AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8ae8;
        }
    }
    ctx->pc = 0x1D8B00u;
label_1d8b00:
    // 0x1d8b00: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D8B00u;
    SET_GPR_U32(ctx, 31, 0x1D8B08u);
    ctx->pc = 0x1D8B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B00u;
    // 0x1d8b04: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D8B00u, 0x1D8B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B08u;
label_1d8b08:
    // 0x1d8b08: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D8B08u;
    SET_GPR_U32(ctx, 31, 0x1D8B10u);
    ctx->pc = 0x1D8B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B08u;
    // 0x1d8b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D8B08u, 0x1D8B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B10u;
label_1d8b10:
    // 0x1d8b10: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1d8b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1d8b14:
    // 0x1d8b14: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D8B14u;
    {
        const bool branch_taken_0x1d8b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B14u;
        // 0x1d8b18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b14) {
            ctx->pc = 0x1D8B74u;
            goto label_1d8b74;
        }
    }
    ctx->pc = 0x1D8B1Cu;
    // 0x1d8b1c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d8b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d8b20: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8B20u;
    {
        const bool branch_taken_0x1d8b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B20u;
        // 0x1d8b24: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b20) {
            ctx->pc = 0x1D8B68u;
            goto label_1d8b68;
        }
    }
    ctx->pc = 0x1D8B28u;
    // 0x1d8b28: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1d8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1d8b2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d8b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b30: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1d8b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d8b34: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1d8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d8b38: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8B38u;
    {
        const bool branch_taken_0x1d8b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B38u;
        // 0x1d8b3c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b38) {
            ctx->pc = 0x1D8B60u;
            goto label_1d8b60;
        }
    }
    ctx->pc = 0x1D8B40u;
    // 0x1d8b40: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1d8b44: 0x0  nop
    ctx->pc = 0x1d8b44u;
    // NOP
label_1d8b48:
    // 0x1d8b48: 0x0  nop
    ctx->pc = 0x1d8b48u;
    // NOP
    // 0x1d8b4c: 0x0  nop
    ctx->pc = 0x1d8b4cu;
    // NOP
    // 0x1d8b50: 0x0  nop
    ctx->pc = 0x1d8b50u;
    // NOP
    // 0x1d8b54: 0x0  nop
    ctx->pc = 0x1d8b54u;
    // NOP
    // 0x1d8b58: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D8B58u;
    {
        const bool branch_taken_0x1d8b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B58u;
        // 0x1d8b5c: 0x2442ff60  addiu       $v0, $v0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b58) {
            ctx->pc = 0x1D8B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8b48;
        }
    }
    ctx->pc = 0x1D8B60u;
label_1d8b60:
    // 0x1d8b60: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D8B60u;
    SET_GPR_U32(ctx, 31, 0x1D8B68u);
    ctx->pc = 0x1D8B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B60u;
    // 0x1d8b64: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D8B60u, 0x1D8B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B68u;
label_1d8b68:
    // 0x1d8b68: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D8B68u;
    SET_GPR_U32(ctx, 31, 0x1D8B70u);
    ctx->pc = 0x1D8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B68u;
    // 0x1d8b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D8B68u, 0x1D8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B70u;
label_1d8b70:
    // 0x1d8b70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8b74:
    // 0x1d8b74: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D8B74u;
    SET_GPR_U32(ctx, 31, 0x1D8B7Cu);
    ctx->pc = 0x1D8B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B74u;
    // 0x1d8b78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D8B74u, 0x1D8B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B7Cu;
label_1d8b7c:
    // 0x1d8b7c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8B7Cu;
    {
        const bool branch_taken_0x1d8b7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B7Cu;
        // 0x1d8b80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b7c) {
            ctx->pc = 0x1D8B90u;
            goto label_1d8b90;
        }
    }
    ctx->pc = 0x1D8B84u;
    // 0x1d8b84: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D8B84u;
    SET_GPR_U32(ctx, 31, 0x1D8B8Cu);
    ctx->pc = 0x1D8B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B84u;
    // 0x1d8b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D8B84u, 0x1D8B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B8Cu;
label_1d8b8c:
    // 0x1d8b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8b90:
    // 0x1d8b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8b94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d8b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8b98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d8b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d8b9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d8b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BA0u;
        // 0x1d8ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8BA8u;
}
