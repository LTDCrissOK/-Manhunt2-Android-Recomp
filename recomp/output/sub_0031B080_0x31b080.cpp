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

// Function: sub_0031B080
// Address: 0x31b080 - 0x31b4f0
void sub_0031B080_0x31b080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B080_0x31b080");
#endif

    switch (ctx->pc) {
        case 0x31b0c0u: goto label_31b0c0;
        case 0x31b0ccu: goto label_31b0cc;
        case 0x31b0e0u: goto label_31b0e0;
        case 0x31b0f0u: goto label_31b0f0;
        case 0x31b0fcu: goto label_31b0fc;
        case 0x31b10cu: goto label_31b10c;
        case 0x31b11cu: goto label_31b11c;
        case 0x31b128u: goto label_31b128;
        case 0x31b138u: goto label_31b138;
        case 0x31b148u: goto label_31b148;
        case 0x31b15cu: goto label_31b15c;
        case 0x31b168u: goto label_31b168;
        case 0x31b174u: goto label_31b174;
        case 0x31b198u: goto label_31b198;
        case 0x31b1a0u: goto label_31b1a0;
        case 0x31b1b4u: goto label_31b1b4;
        case 0x31b1c8u: goto label_31b1c8;
        case 0x31b1dcu: goto label_31b1dc;
        case 0x31b1f0u: goto label_31b1f0;
        case 0x31b204u: goto label_31b204;
        case 0x31b21cu: goto label_31b21c;
        case 0x31b230u: goto label_31b230;
        case 0x31b240u: goto label_31b240;
        case 0x31b254u: goto label_31b254;
        case 0x31b268u: goto label_31b268;
        case 0x31b278u: goto label_31b278;
        case 0x31b294u: goto label_31b294;
        case 0x31b2a4u: goto label_31b2a4;
        case 0x31b2bcu: goto label_31b2bc;
        case 0x31b2d0u: goto label_31b2d0;
        case 0x31b2e8u: goto label_31b2e8;
        case 0x31b2fcu: goto label_31b2fc;
        case 0x31b314u: goto label_31b314;
        case 0x31b328u: goto label_31b328;
        case 0x31b340u: goto label_31b340;
        case 0x31b354u: goto label_31b354;
        case 0x31b36cu: goto label_31b36c;
        case 0x31b380u: goto label_31b380;
        case 0x31b398u: goto label_31b398;
        case 0x31b3acu: goto label_31b3ac;
        case 0x31b3c4u: goto label_31b3c4;
        case 0x31b3d8u: goto label_31b3d8;
        case 0x31b3f0u: goto label_31b3f0;
        case 0x31b414u: goto label_31b414;
        case 0x31b438u: goto label_31b438;
        case 0x31b450u: goto label_31b450;
        case 0x31b468u: goto label_31b468;
        case 0x31b47cu: goto label_31b47c;
        case 0x31b488u: goto label_31b488;
        case 0x31b498u: goto label_31b498;
        case 0x31b4a4u: goto label_31b4a4;
        case 0x31b4b0u: goto label_31b4b0;
        case 0x31b4bcu: goto label_31b4bc;
        default: break;
    }

    ctx->pc = 0x31b080u;

    // 0x31b080: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31b080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31b084: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x31b084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x31b088: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x31b088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x31b08c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31b08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b094: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x31b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x31b098: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b09c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x31b09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x31b0a0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x31b0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x31b0a4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x31b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x31b0a8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x31b0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x31b0ac: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x31b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x31b0b0: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x31b0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x31b0b4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x31b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x31b0b8: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31B0B8u;
    SET_GPR_U32(ctx, 31, 0x31B0C0u);
    ctx->pc = 0x31B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0B8u;
    // 0x31b0bc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31B0B8u, 0x31B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0C0u;
label_31b0c0:
    // 0x31b0c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b0c4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31B0C4u;
    SET_GPR_U32(ctx, 31, 0x31B0CCu);
    ctx->pc = 0x31B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0C4u;
    // 0x31b0c8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31B0C4u, 0x31B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0CCu;
label_31b0cc:
    // 0x31b0cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31b0d0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x31b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x31b0d4: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x31b0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x31b0d8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x31B0D8u;
    SET_GPR_U32(ctx, 31, 0x31B0E0u);
    ctx->pc = 0x31B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0D8u;
    // 0x31b0dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x31B0D8u, 0x31B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0E0u;
label_31b0e0:
    // 0x31b0e0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x31B0E0u;
    {
        const bool branch_taken_0x31b0e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0E0u;
        // 0x31b0e4: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0e0) {
            ctx->pc = 0x31B114u;
            goto label_31b114;
        }
    }
    ctx->pc = 0x31B0E8u;
    // 0x31b0e8: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x31B0E8u;
    SET_GPR_U32(ctx, 31, 0x31B0F0u);
    ctx->pc = 0x31B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0E8u;
    // 0x31b0ec: 0x2484edd0  addiu       $a0, $a0, -0x1230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x31B0E8u, 0x31B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0F0u;
label_31b0f0:
    // 0x31b0f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b0f4: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x31B0F4u;
    SET_GPR_U32(ctx, 31, 0x31B0FCu);
    ctx->pc = 0x31B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0F4u;
    // 0x31b0f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x31B0F4u, 0x31B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0FCu;
label_31b0fc:
    // 0x31b0fc: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x31b0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x31b100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31b100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b104: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x31B104u;
    SET_GPR_U32(ctx, 31, 0x31B10Cu);
    ctx->pc = 0x31B108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B104u;
    // 0x31b108: 0x24a5eed0  addiu       $a1, $a1, -0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x31B104u, 0x31B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B10Cu;
label_31b10c:
    // 0x31b10c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31B10Cu;
    {
        const bool branch_taken_0x31b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B10Cu;
        // 0x31b110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b10c) {
            ctx->pc = 0x31B13Cu;
            goto label_31b13c;
        }
    }
    ctx->pc = 0x31B114u;
label_31b114:
    // 0x31b114: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x31B114u;
    SET_GPR_U32(ctx, 31, 0x31B11Cu);
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x31B114u, 0x31B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B11Cu;
label_31b11c:
    // 0x31b11c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b120: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x31B120u;
    SET_GPR_U32(ctx, 31, 0x31B128u);
    ctx->pc = 0x31B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B120u;
    // 0x31b124: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x31B120u, 0x31B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B128u;
label_31b128:
    // 0x31b128: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x31b128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x31b12c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31b12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b130: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x31B130u;
    SET_GPR_U32(ctx, 31, 0x31B138u);
    ctx->pc = 0x31B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B130u;
    // 0x31b134: 0x24a5eec8  addiu       $a1, $a1, -0x1138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x31B130u, 0x31B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B138u;
label_31b138:
    // 0x31b138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31b138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31b13c:
    // 0x31b13c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31b13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b140: 0xc09dd98  jal         func_277660
    ctx->pc = 0x31B140u;
    SET_GPR_U32(ctx, 31, 0x31B148u);
    ctx->pc = 0x31B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B140u;
    // 0x31b144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x31B140u, 0x31B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B148u;
label_31b148:
    // 0x31b148: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31B148u;
    {
        const bool branch_taken_0x31b148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B148u;
        // 0x31b14c: 0x3c160047  lui         $s6, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b148) {
            ctx->pc = 0x31B17Cu;
            goto label_31b17c;
        }
    }
    ctx->pc = 0x31B150u;
    // 0x31b150: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31b150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b154: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31B154u;
    SET_GPR_U32(ctx, 31, 0x31B15Cu);
    ctx->pc = 0x31B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B154u;
    // 0x31b158: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31B154u, 0x31B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B15Cu;
label_31b15c:
    // 0x31b15c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b160: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31B160u;
    SET_GPR_U32(ctx, 31, 0x31B168u);
    ctx->pc = 0x31B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B160u;
    // 0x31b164: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31B160u, 0x31B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B168u;
label_31b168:
    // 0x31b168: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b16c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31B16Cu;
    SET_GPR_U32(ctx, 31, 0x31B174u);
    ctx->pc = 0x31B170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B16Cu;
    // 0x31b170: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31B16Cu, 0x31B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B174u;
label_31b174:
    // 0x31b174: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x31B174u;
    {
        const bool branch_taken_0x31b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B174u;
        // 0x31b178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b174) {
            ctx->pc = 0x31B4C0u;
            goto label_31b4c0;
        }
    }
    ctx->pc = 0x31B17Cu;
label_31b17c:
    // 0x31b17c: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x31b17cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
    // 0x31b180: 0x3c1e0047  lui         $fp, 0x47
    ctx->pc = 0x31b180u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
    // 0x31b184: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x31b184u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x31b188: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x31b188u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x31b18c: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x31B18Cu;
    {
        const bool branch_taken_0x31b18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B18Cu;
        // 0x31b190: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b18c) {
            ctx->pc = 0x31B47Cu;
            goto label_31b47c;
        }
    }
    ctx->pc = 0x31B194u;
    // 0x31b194: 0x0  nop
    ctx->pc = 0x31b194u;
    // NOP
label_31b198:
    // 0x31b198: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B198u;
    SET_GPR_U32(ctx, 31, 0x31B1A0u);
    ctx->pc = 0x31B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B198u;
    // 0x31b19c: 0x26c53910  addiu       $a1, $s6, 0x3910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 14608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B198u, 0x31B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B1A0u;
label_31b1a0:
    // 0x31b1a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b1a4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x31B1A4u;
    {
        const bool branch_taken_0x31b1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1A4u;
        // 0x31b1a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1a4) {
            ctx->pc = 0x31B228u;
            goto label_31b228;
        }
    }
    ctx->pc = 0x31B1ACu;
    // 0x31b1ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B1ACu;
    SET_GPR_U32(ctx, 31, 0x31B1B4u);
    ctx->pc = 0x31B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1ACu;
    // 0x31b1b0: 0x26e53918  addiu       $a1, $s7, 0x3918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B1ACu, 0x31B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B1B4u;
label_31b1b4:
    // 0x31b1b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b1b8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x31B1B8u;
    {
        const bool branch_taken_0x31b1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1B8u;
        // 0x31b1bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1b8) {
            ctx->pc = 0x31B228u;
            goto label_31b228;
        }
    }
    ctx->pc = 0x31B1C0u;
    // 0x31b1c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B1C0u;
    SET_GPR_U32(ctx, 31, 0x31B1C8u);
    ctx->pc = 0x31B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1C0u;
    // 0x31b1c4: 0x27c53920  addiu       $a1, $fp, 0x3920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 14624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B1C0u, 0x31B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B1C8u;
label_31b1c8:
    // 0x31b1c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b1cc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31B1CCu;
    {
        const bool branch_taken_0x31b1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1CCu;
        // 0x31b1d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1cc) {
            ctx->pc = 0x31B228u;
            goto label_31b228;
        }
    }
    ctx->pc = 0x31B1D4u;
    // 0x31b1d4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B1D4u;
    SET_GPR_U32(ctx, 31, 0x31B1DCu);
    ctx->pc = 0x31B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1D4u;
    // 0x31b1d8: 0x26853930  addiu       $a1, $s4, 0x3930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 14640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B1D4u, 0x31B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B1DCu;
label_31b1dc:
    // 0x31b1dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b1e0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31B1E0u;
    {
        const bool branch_taken_0x31b1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1E0u;
        // 0x31b1e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1e0) {
            ctx->pc = 0x31B228u;
            goto label_31b228;
        }
    }
    ctx->pc = 0x31B1E8u;
    // 0x31b1e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B1E8u;
    SET_GPR_U32(ctx, 31, 0x31B1F0u);
    ctx->pc = 0x31B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1E8u;
    // 0x31b1ec: 0x26a53938  addiu       $a1, $s5, 0x3938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 14648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B1E8u, 0x31B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B1F0u;
label_31b1f0:
    // 0x31b1f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b1f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31B1F4u;
    {
        const bool branch_taken_0x31b1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1F4u;
        // 0x31b1f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1f4) {
            ctx->pc = 0x31B228u;
            goto label_31b228;
        }
    }
    ctx->pc = 0x31B1FCu;
    // 0x31b1fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B1FCu;
    SET_GPR_U32(ctx, 31, 0x31B204u);
    ctx->pc = 0x31B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1FCu;
    // 0x31b200: 0x26053940  addiu       $a1, $s0, 0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B1FCu, 0x31B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B204u;
label_31b204:
    // 0x31b204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b208: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B208u;
    {
        const bool branch_taken_0x31b208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B208u;
        // 0x31b20c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b208) {
            ctx->pc = 0x31B228u;
            goto label_31b228;
        }
    }
    ctx->pc = 0x31B210u;
    // 0x31b210: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b214: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B214u;
    SET_GPR_U32(ctx, 31, 0x31B21Cu);
    ctx->pc = 0x31B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B214u;
    // 0x31b218: 0x24a53948  addiu       $a1, $a1, 0x3948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B214u, 0x31B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B21Cu;
label_31b21c:
    // 0x31b21c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b220: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x31B220u;
    {
        const bool branch_taken_0x31b220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b220) {
            ctx->pc = 0x31B224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B220u;
            // 0x31b224: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B248u;
            goto label_31b248;
        }
    }
    ctx->pc = 0x31B228u;
label_31b228:
    // 0x31b228: 0xc0d570e  jal         func_355C38
    ctx->pc = 0x31B228u;
    SET_GPR_U32(ctx, 31, 0x31B230u);
    ctx->pc = 0x31B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B228u;
    // 0x31b22c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355C38u, 0x31B228u, 0x31B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B230u;
label_31b230:
    // 0x31b230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b238: 0xc0c6efc  jal         func_31BBF0
    ctx->pc = 0x31B238u;
    SET_GPR_U32(ctx, 31, 0x31B240u);
    ctx->pc = 0x31B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B238u;
    // 0x31b23c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BBF0u, 0x31B238u, 0x31B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B240u;
label_31b240:
    // 0x31b240: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31B240u;
    {
        const bool branch_taken_0x31b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B240u;
        // 0x31b244: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b240) {
            ctx->pc = 0x31B26Cu;
            goto label_31b26c;
        }
    }
    ctx->pc = 0x31B248u;
label_31b248:
    // 0x31b248: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b24c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B24Cu;
    SET_GPR_U32(ctx, 31, 0x31B254u);
    ctx->pc = 0x31B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B24Cu;
    // 0x31b250: 0x24a53958  addiu       $a1, $a1, 0x3958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B24Cu, 0x31B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B254u;
label_31b254:
    // 0x31b254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b258: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B258u;
    {
        const bool branch_taken_0x31b258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B258u;
        // 0x31b25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b258) {
            ctx->pc = 0x31B268u;
            goto label_31b268;
        }
    }
    ctx->pc = 0x31B260u;
    // 0x31b260: 0xc0c6fae  jal         func_31BEB8
    ctx->pc = 0x31B260u;
    SET_GPR_U32(ctx, 31, 0x31B268u);
    ctx->pc = 0x31B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B260u;
    // 0x31b264: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BEB8u, 0x31B260u, 0x31B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B268u;
label_31b268:
    // 0x31b268: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_31b26c:
    // 0x31b26c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b270: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B270u;
    SET_GPR_U32(ctx, 31, 0x31B278u);
    ctx->pc = 0x31B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B270u;
    // 0x31b274: 0x24a53968  addiu       $a1, $a1, 0x3968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B270u, 0x31B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B278u;
label_31b278:
    // 0x31b278: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b27c: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x31B27Cu;
    {
        const bool branch_taken_0x31b27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B27Cu;
        // 0x31b280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b27c) {
            ctx->pc = 0x31B480u;
            goto label_31b480;
        }
    }
    ctx->pc = 0x31B284u;
    // 0x31b284: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b28c: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x31B28Cu;
    SET_GPR_U32(ctx, 31, 0x31B294u);
    ctx->pc = 0x31B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B28Cu;
    // 0x31b290: 0x24a53970  addiu       $a1, $a1, 0x3970 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x31B28Cu, 0x31B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B294u;
label_31b294:
    // 0x31b294: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B294u;
    {
        const bool branch_taken_0x31b294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B294u;
        // 0x31b298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b294) {
            ctx->pc = 0x31B2ACu;
            goto label_31b2ac;
        }
    }
    ctx->pc = 0x31B29Cu;
    // 0x31b29c: 0xc0c6d94  jal         func_31B650
    ctx->pc = 0x31B29Cu;
    SET_GPR_U32(ctx, 31, 0x31B2A4u);
    ctx->pc = 0x31B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B29Cu;
    // 0x31b2a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B650u, 0x31B29Cu, 0x31B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2A4u;
label_31b2a4:
    // 0x31b2a4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x31B2A4u;
    {
        const bool branch_taken_0x31b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2A4u;
        // 0x31b2a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2a4) {
            ctx->pc = 0x31B480u;
            goto label_31b480;
        }
    }
    ctx->pc = 0x31B2ACu;
label_31b2ac:
    // 0x31b2ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b2acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b2b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B2B4u;
    SET_GPR_U32(ctx, 31, 0x31B2BCu);
    ctx->pc = 0x31B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B2B4u;
    // 0x31b2b8: 0x24a53988  addiu       $a1, $a1, 0x3988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B2B4u, 0x31B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2BCu;
label_31b2bc:
    // 0x31b2bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b2c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B2C0u;
    {
        const bool branch_taken_0x31b2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2C0u;
        // 0x31b2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2c0) {
            ctx->pc = 0x31B2D8u;
            goto label_31b2d8;
        }
    }
    ctx->pc = 0x31B2C8u;
    // 0x31b2c8: 0xc0c6f6a  jal         func_31BDA8
    ctx->pc = 0x31B2C8u;
    SET_GPR_U32(ctx, 31, 0x31B2D0u);
    ctx->pc = 0x31B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B2C8u;
    // 0x31b2cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BDA8u, 0x31B2C8u, 0x31B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2D0u;
label_31b2d0:
    // 0x31b2d0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x31B2D0u;
    {
        const bool branch_taken_0x31b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2D0u;
        // 0x31b2d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2d0) {
            ctx->pc = 0x31B480u;
            goto label_31b480;
        }
    }
    ctx->pc = 0x31B2D8u;
label_31b2d8:
    // 0x31b2d8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b2dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2e0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B2E0u;
    SET_GPR_U32(ctx, 31, 0x31B2E8u);
    ctx->pc = 0x31B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B2E0u;
    // 0x31b2e4: 0x24a53998  addiu       $a1, $a1, 0x3998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B2E0u, 0x31B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2E8u;
label_31b2e8:
    // 0x31b2e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b2ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B2ECu;
    {
        const bool branch_taken_0x31b2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2ECu;
        // 0x31b2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2ec) {
            ctx->pc = 0x31B304u;
            goto label_31b304;
        }
    }
    ctx->pc = 0x31B2F4u;
    // 0x31b2f4: 0xc0c7054  jal         func_31C150
    ctx->pc = 0x31B2F4u;
    SET_GPR_U32(ctx, 31, 0x31B2FCu);
    ctx->pc = 0x31B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B2F4u;
    // 0x31b2f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C150u, 0x31B2F4u, 0x31B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2FCu;
label_31b2fc:
    // 0x31b2fc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x31B2FCu;
    {
        const bool branch_taken_0x31b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2FCu;
        // 0x31b300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2fc) {
            ctx->pc = 0x31B480u;
            goto label_31b480;
        }
    }
    ctx->pc = 0x31B304u;
label_31b304:
    // 0x31b304: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b308: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b30c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B30Cu;
    SET_GPR_U32(ctx, 31, 0x31B314u);
    ctx->pc = 0x31B310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B30Cu;
    // 0x31b310: 0x24a539a8  addiu       $a1, $a1, 0x39A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B30Cu, 0x31B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B314u;
label_31b314:
    // 0x31b314: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B318u;
    {
        const bool branch_taken_0x31b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B318u;
        // 0x31b31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b318) {
            ctx->pc = 0x31B330u;
            goto label_31b330;
        }
    }
    ctx->pc = 0x31B320u;
    // 0x31b320: 0xc0c712c  jal         func_31C4B0
    ctx->pc = 0x31B320u;
    SET_GPR_U32(ctx, 31, 0x31B328u);
    ctx->pc = 0x31B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B320u;
    // 0x31b324: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C4B0u, 0x31B320u, 0x31B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B328u;
label_31b328:
    // 0x31b328: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x31B328u;
    {
        const bool branch_taken_0x31b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B328u;
        // 0x31b32c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b328) {
            ctx->pc = 0x31B480u;
            goto label_31b480;
        }
    }
    ctx->pc = 0x31B330u;
label_31b330:
    // 0x31b330: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b334: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b338: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B338u;
    SET_GPR_U32(ctx, 31, 0x31B340u);
    ctx->pc = 0x31B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B338u;
    // 0x31b33c: 0x24a539b0  addiu       $a1, $a1, 0x39B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B338u, 0x31B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B340u;
label_31b340:
    // 0x31b340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B344u;
    {
        const bool branch_taken_0x31b344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B344u;
        // 0x31b348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b344) {
            ctx->pc = 0x31B35Cu;
            goto label_31b35c;
        }
    }
    ctx->pc = 0x31B34Cu;
    // 0x31b34c: 0xc0c71e2  jal         func_31C788
    ctx->pc = 0x31B34Cu;
    SET_GPR_U32(ctx, 31, 0x31B354u);
    ctx->pc = 0x31B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B34Cu;
    // 0x31b350: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C788u, 0x31B34Cu, 0x31B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B354u;
label_31b354:
    // 0x31b354: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x31B354u;
    {
        const bool branch_taken_0x31b354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B354u;
        // 0x31b358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b354) {
            ctx->pc = 0x31B480u;
            goto label_31b480;
        }
    }
    ctx->pc = 0x31B35Cu;
label_31b35c:
    // 0x31b35c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b360: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b364: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B364u;
    SET_GPR_U32(ctx, 31, 0x31B36Cu);
    ctx->pc = 0x31B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B364u;
    // 0x31b368: 0x24a539c0  addiu       $a1, $a1, 0x39C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B364u, 0x31B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B36Cu;
label_31b36c:
    // 0x31b36c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B370u;
    {
        const bool branch_taken_0x31b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B370u;
        // 0x31b374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b370) {
            ctx->pc = 0x31B388u;
            goto label_31b388;
        }
    }
    ctx->pc = 0x31B378u;
    // 0x31b378: 0xc0c738c  jal         func_31CE30
    ctx->pc = 0x31B378u;
    SET_GPR_U32(ctx, 31, 0x31B380u);
    ctx->pc = 0x31B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B378u;
    // 0x31b37c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CE30u, 0x31B378u, 0x31B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B380u;
label_31b380:
    // 0x31b380: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x31B380u;
    {
        const bool branch_taken_0x31b380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B380u;
        // 0x31b384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b380) {
            ctx->pc = 0x31B480u;
            goto label_31b480;
        }
    }
    ctx->pc = 0x31B388u;
label_31b388:
    // 0x31b388: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b38c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b390: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B390u;
    SET_GPR_U32(ctx, 31, 0x31B398u);
    ctx->pc = 0x31B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B390u;
    // 0x31b394: 0x24a539d8  addiu       $a1, $a1, 0x39D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B390u, 0x31B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B398u;
label_31b398:
    // 0x31b398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b39c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B39Cu;
    {
        const bool branch_taken_0x31b39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B39Cu;
        // 0x31b3a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b39c) {
            ctx->pc = 0x31B3B4u;
            goto label_31b3b4;
        }
    }
    ctx->pc = 0x31B3A4u;
    // 0x31b3a4: 0xc0c755c  jal         func_31D570
    ctx->pc = 0x31B3A4u;
    SET_GPR_U32(ctx, 31, 0x31B3ACu);
    ctx->pc = 0x31B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3A4u;
    // 0x31b3a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D570u, 0x31B3A4u, 0x31B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3ACu;
label_31b3ac:
    // 0x31b3ac: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x31B3ACu;
    {
        const bool branch_taken_0x31b3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3ACu;
        // 0x31b3b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3ac) {
            ctx->pc = 0x31B480u;
            goto label_31b480;
        }
    }
    ctx->pc = 0x31B3B4u;
label_31b3b4:
    // 0x31b3b4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b3b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3bc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B3BCu;
    SET_GPR_U32(ctx, 31, 0x31B3C4u);
    ctx->pc = 0x31B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3BCu;
    // 0x31b3c0: 0x24a539f0  addiu       $a1, $a1, 0x39F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B3BCu, 0x31B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3C4u;
label_31b3c4:
    // 0x31b3c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b3c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B3C8u;
    {
        const bool branch_taken_0x31b3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3C8u;
        // 0x31b3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3c8) {
            ctx->pc = 0x31B3E0u;
            goto label_31b3e0;
        }
    }
    ctx->pc = 0x31B3D0u;
    // 0x31b3d0: 0xc0c75d8  jal         func_31D760
    ctx->pc = 0x31B3D0u;
    SET_GPR_U32(ctx, 31, 0x31B3D8u);
    ctx->pc = 0x31B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3D0u;
    // 0x31b3d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D760u, 0x31B3D0u, 0x31B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3D8u;
label_31b3d8:
    // 0x31b3d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x31B3D8u;
    {
        const bool branch_taken_0x31b3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3D8u;
        // 0x31b3dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3d8) {
            ctx->pc = 0x31B480u;
            goto label_31b480;
        }
    }
    ctx->pc = 0x31B3E0u;
label_31b3e0:
    // 0x31b3e0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b3e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B3E8u;
    SET_GPR_U32(ctx, 31, 0x31B3F0u);
    ctx->pc = 0x31B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3E8u;
    // 0x31b3ec: 0x24a539f8  addiu       $a1, $a1, 0x39F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B3E8u, 0x31B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3F0u;
label_31b3f0:
    // 0x31b3f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b3f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B3F4u;
    {
        const bool branch_taken_0x31b3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3F4u;
        // 0x31b3f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3f4) {
            ctx->pc = 0x31B404u;
            goto label_31b404;
        }
    }
    ctx->pc = 0x31B3FCu;
    // 0x31b3fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31B3FCu;
    {
        const bool branch_taken_0x31b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3FCu;
        // 0x31b400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3fc) {
            ctx->pc = 0x31B448u;
            goto label_31b448;
        }
    }
    ctx->pc = 0x31B404u;
label_31b404:
    // 0x31b404: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b408: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b40c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B40Cu;
    SET_GPR_U32(ctx, 31, 0x31B414u);
    ctx->pc = 0x31B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B40Cu;
    // 0x31b410: 0x24a53a08  addiu       $a1, $a1, 0x3A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B40Cu, 0x31B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B414u;
label_31b414:
    // 0x31b414: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B418u;
    {
        const bool branch_taken_0x31b418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B418u;
        // 0x31b41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b418) {
            ctx->pc = 0x31B428u;
            goto label_31b428;
        }
    }
    ctx->pc = 0x31B420u;
    // 0x31b420: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31B420u;
    {
        const bool branch_taken_0x31b420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B420u;
        // 0x31b424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b420) {
            ctx->pc = 0x31B448u;
            goto label_31b448;
        }
    }
    ctx->pc = 0x31B428u;
label_31b428:
    // 0x31b428: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b42c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b430: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B430u;
    SET_GPR_U32(ctx, 31, 0x31B438u);
    ctx->pc = 0x31B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B430u;
    // 0x31b434: 0x24a53a10  addiu       $a1, $a1, 0x3A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B430u, 0x31B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B438u;
label_31b438:
    // 0x31b438: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b43c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B43Cu;
    {
        const bool branch_taken_0x31b43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B43Cu;
        // 0x31b440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b43c) {
            ctx->pc = 0x31B458u;
            goto label_31b458;
        }
    }
    ctx->pc = 0x31B444u;
    // 0x31b444: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x31b444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31b448:
    // 0x31b448: 0xc0c7606  jal         func_31D818
    ctx->pc = 0x31B448u;
    SET_GPR_U32(ctx, 31, 0x31B450u);
    ctx->pc = 0x31B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B448u;
    // 0x31b44c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D818u, 0x31B448u, 0x31B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B450u;
label_31b450:
    // 0x31b450: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31B450u;
    {
        const bool branch_taken_0x31b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B450u;
        // 0x31b454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b450) {
            ctx->pc = 0x31B480u;
            goto label_31b480;
        }
    }
    ctx->pc = 0x31B458u;
label_31b458:
    // 0x31b458: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b45c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b460: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B460u;
    SET_GPR_U32(ctx, 31, 0x31B468u);
    ctx->pc = 0x31B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B460u;
    // 0x31b464: 0x24a53a20  addiu       $a1, $a1, 0x3A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B460u, 0x31B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B468u;
label_31b468:
    // 0x31b468: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b46c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B46Cu;
    {
        const bool branch_taken_0x31b46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B46Cu;
        // 0x31b470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b46c) {
            ctx->pc = 0x31B47Cu;
            goto label_31b47c;
        }
    }
    ctx->pc = 0x31B474u;
    // 0x31b474: 0xc0c77a0  jal         func_31DE80
    ctx->pc = 0x31B474u;
    SET_GPR_U32(ctx, 31, 0x31B47Cu);
    ctx->pc = 0x31B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B474u;
    // 0x31b478: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE80u, 0x31B474u, 0x31B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B47Cu;
label_31b47c:
    // 0x31b47c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31b47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31b480:
    // 0x31b480: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x31B480u;
    SET_GPR_U32(ctx, 31, 0x31B488u);
    ctx->pc = 0x31B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B480u;
    // 0x31b484: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x31B480u, 0x31B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B488u;
label_31b488:
    // 0x31b488: 0x1440ff43  bnez        $v0, . + 4 + (-0xBD << 2)
    ctx->pc = 0x31B488u;
    {
        const bool branch_taken_0x31b488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B488u;
        // 0x31b48c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b488) {
            ctx->pc = 0x31B198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b198;
        }
    }
    ctx->pc = 0x31B490u;
    // 0x31b490: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x31B490u;
    SET_GPR_U32(ctx, 31, 0x31B498u);
    ctx->pc = 0x31B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B490u;
    // 0x31b494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x31B490u, 0x31B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B498u;
label_31b498:
    // 0x31b498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b49c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31B49Cu;
    SET_GPR_U32(ctx, 31, 0x31B4A4u);
    ctx->pc = 0x31B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B49Cu;
    // 0x31b4a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31B49Cu, 0x31B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4A4u;
label_31b4a4:
    // 0x31b4a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b4a8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31B4A8u;
    SET_GPR_U32(ctx, 31, 0x31B4B0u);
    ctx->pc = 0x31B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4A8u;
    // 0x31b4ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31B4A8u, 0x31B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4B0u;
label_31b4b0:
    // 0x31b4b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4b4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31B4B4u;
    SET_GPR_U32(ctx, 31, 0x31B4BCu);
    ctx->pc = 0x31B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4B4u;
    // 0x31b4b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31B4B4u, 0x31B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4BCu;
label_31b4bc:
    // 0x31b4bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31b4c0:
    // 0x31b4c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x31b4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b4c4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x31b4c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31b4c8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x31b4c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31b4cc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x31b4ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31b4d0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x31b4d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31b4d4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x31b4d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31b4d8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x31b4d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31b4dc: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x31b4dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31b4e0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x31b4e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31b4e4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x31b4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31b4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x31B4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4E8u;
        // 0x31b4ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B4F0u;
}
