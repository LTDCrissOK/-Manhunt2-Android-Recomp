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

// Function: sub_0025B090
// Address: 0x25b090 - 0x25b428
void sub_0025B090_0x25b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B090_0x25b090");
#endif

    switch (ctx->pc) {
        case 0x25b0ecu: goto label_25b0ec;
        case 0x25b168u: goto label_25b168;
        case 0x25b1bcu: goto label_25b1bc;
        case 0x25b26cu: goto label_25b26c;
        case 0x25b284u: goto label_25b284;
        case 0x25b380u: goto label_25b380;
        case 0x25b3f0u: goto label_25b3f0;
        default: break;
    }

    ctx->pc = 0x25b090u;

    // 0x25b090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25b094: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25b094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x25b098: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x25b098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x25b09c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25b09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25b0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x25b0a4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x25b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x25b0a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25b0b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x25b0b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0b4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x25b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x25b0b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25b0bc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x25b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x25b0c0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x25b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x25b0c4: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x25b0c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25b0c8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x25b0c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25b0cc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x25b0ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25b0d0: 0xac519cf8  sw          $s1, -0x6308($v0)
    ctx->pc = 0x25b0d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3F9CF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9CF8u, _value); } while (0);
    // 0x25b0d4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x25b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x25b0d8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x25b0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x25b0dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B0DCu;
    {
        const bool branch_taken_0x25b0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0DCu;
        // 0x25b0e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0dc) {
            ctx->pc = 0x25B0F0u;
            goto label_25b0f0;
        }
    }
    ctx->pc = 0x25B0E4u;
    // 0x25b0e4: 0xc0bca40  jal         func_2F2900
    ctx->pc = 0x25B0E4u;
    SET_GPR_U32(ctx, 31, 0x25B0ECu);
    ctx->pc = 0x25B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B0E4u;
    // 0x25b0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2900u, 0x25B0E4u, 0x25B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0ECu;
label_25b0ec:
    // 0x25b0ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25b0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b0f0:
    // 0x25b0f0: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x25b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x25b0f4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x25b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x25b0f8: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x25B0F8u;
    {
        const bool branch_taken_0x25b0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b0f8) {
            ctx->pc = 0x25B0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B0F8u;
            // 0x25b0fc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B120u;
            goto label_25b120;
        }
    }
    ctx->pc = 0x25B100u;
    // 0x25b100: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x25b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x25b104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b108: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25b108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25b10c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B10Cu;
    {
        const bool branch_taken_0x25b10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b10c) {
            ctx->pc = 0x25B110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B10Cu;
            // 0x25b110: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B120u;
            goto label_25b120;
        }
    }
    ctx->pc = 0x25B114u;
    // 0x25b114: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B114u;
    {
        const bool branch_taken_0x25b114 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b114) {
            ctx->pc = 0x25B118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B114u;
            // 0x25b118: 0x8e220418  lw          $v0, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B130u;
            goto label_25b130;
        }
    }
    ctx->pc = 0x25B11Cu;
    // 0x25b11c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x25b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_25b120:
    // 0x25b120: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25b120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x25b124: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x25b124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x25b128: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x25B128u;
    {
        const bool branch_taken_0x25b128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B128u;
        // 0x25b12c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b128) {
            ctx->pc = 0x25B3F0u;
            goto label_25b3f0;
        }
    }
    ctx->pc = 0x25B130u;
label_25b130:
    // 0x25b130: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25b130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b134: 0x3843000a  xori        $v1, $v0, 0xA
    ctx->pc = 0x25b134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x25b138: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x25b138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x25b13c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B13Cu;
    {
        const bool branch_taken_0x25b13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B13Cu;
        // 0x25b140: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b13c) {
            ctx->pc = 0x25B14Cu;
            goto label_25b14c;
        }
    }
    ctx->pc = 0x25B144u;
    // 0x25b144: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B144u;
    {
        const bool branch_taken_0x25b144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b144) {
            ctx->pc = 0x25B148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B144u;
            // 0x25b148: 0x30834000  andi        $v1, $a0, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B154u;
            goto label_25b154;
        }
    }
    ctx->pc = 0x25B14Cu;
label_25b14c:
    // 0x25b14c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x25b14cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b150: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x25b150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
label_25b154:
    // 0x25b154: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x25b154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x25b158: 0x3982b  sltu        $s3, $zero, $v1
    ctx->pc = 0x25b158u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25b15c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b160: 0xc08dada  jal         func_236B68
    ctx->pc = 0x25B160u;
    SET_GPR_U32(ctx, 31, 0x25B168u);
    ctx->pc = 0x25B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B160u;
    // 0x25b164: 0x2902b  sltu        $s2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x25B160u, 0x25B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B168u;
label_25b168:
    // 0x25b168: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x25b168u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25b16c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25b16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b170: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x25b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x25b174: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x25b174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x25b178: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x25b178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x25b17c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B17Cu;
    {
        const bool branch_taken_0x25b17c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B17Cu;
        // 0x25b180: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b17c) {
            ctx->pc = 0x25B18Cu;
            goto label_25b18c;
        }
    }
    ctx->pc = 0x25B184u;
    // 0x25b184: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25B184u;
    {
        const bool branch_taken_0x25b184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b184) {
            ctx->pc = 0x25B190u;
            goto label_25b190;
        }
    }
    ctx->pc = 0x25B18Cu;
label_25b18c:
    // 0x25b18c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25b18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b190:
    // 0x25b190: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B190u;
    {
        const bool branch_taken_0x25b190 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B190u;
        // 0x25b194: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b190) {
            ctx->pc = 0x25B1B0u;
            goto label_25b1b0;
        }
    }
    ctx->pc = 0x25B198u;
    // 0x25b198: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B198u;
    {
        const bool branch_taken_0x25b198 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b198) {
            ctx->pc = 0x25B19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B198u;
            // 0x25b19c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B1B4u;
            goto label_25b1b4;
        }
    }
    ctx->pc = 0x25B1A0u;
    // 0x25b1a0: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B1A0u;
    {
        const bool branch_taken_0x25b1a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b1a0) {
            ctx->pc = 0x25B1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B1A0u;
            // 0x25b1a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B1B4u;
            goto label_25b1b4;
        }
    }
    ctx->pc = 0x25B1A8u;
    // 0x25b1a8: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25B1A8u;
    {
        const bool branch_taken_0x25b1a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b1a8) {
            ctx->pc = 0x25B1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B1A8u;
            // 0x25b1ac: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B1B0u;
            goto label_25b1b0;
        }
    }
    ctx->pc = 0x25B1B0u;
label_25b1b0:
    // 0x25b1b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25b1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b1b4:
    // 0x25b1b4: 0xc096d0a  jal         func_25B428
    ctx->pc = 0x25B1B4u;
    SET_GPR_U32(ctx, 31, 0x25B1BCu);
    ctx->pc = 0x25B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B1B4u;
    // 0x25b1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B428u, 0x25B1B4u, 0x25B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B1BCu;
label_25b1bc:
    // 0x25b1bc: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x25b1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b1c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25b1c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25b1c4: 0x0  nop
    ctx->pc = 0x25b1c4u;
    // NOP
    // 0x25b1c8: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x25b1c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b1cc: 0x0  nop
    ctx->pc = 0x25b1ccu;
    // NOP
    // 0x25b1d0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x25B1D0u;
    {
        const bool branch_taken_0x25b1d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b1d0) {
            ctx->pc = 0x25B1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B1D0u;
            // 0x25b1d4: 0xc615003c  lwc1        $f21, 0x3C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B1F0u;
            goto label_25b1f0;
        }
    }
    ctx->pc = 0x25B1D8u;
    // 0x25b1d8: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x25b1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b1dc: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x25b1dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b1e0: 0x0  nop
    ctx->pc = 0x25b1e0u;
    // NOP
    // 0x25b1e4: 0x45030083  bc1tl       . + 4 + (0x83 << 2)
    ctx->pc = 0x25B1E4u;
    {
        const bool branch_taken_0x25b1e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b1e4) {
            ctx->pc = 0x25B1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B1E4u;
            // 0x25b1e8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B3F4u;
            goto label_25b3f4;
        }
    }
    ctx->pc = 0x25B1ECu;
    // 0x25b1ec: 0xc615003c  lwc1        $f21, 0x3C($s0)
    ctx->pc = 0x25b1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_25b1f0:
    // 0x25b1f0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x25b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b1f4: 0x461508c2  mul.s       $f3, $f1, $f21
    ctx->pc = 0x25b1f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x25b1f8: 0x3c01c170  lui         $at, 0xC170
    ctx->pc = 0x25b1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49520 << 16));
    // 0x25b1fc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25b1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25b200: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25b200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25b204: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x25b204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x25b208: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25b208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b20c: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x25b20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x25b210: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25b210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25b214: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x25b214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b218: 0xe6030028  swc1        $f3, 0x28($s0)
    ctx->pc = 0x25b218u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x25b21c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25b21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25b220: 0x4601ab42  mul.s       $f13, $f21, $f1
    ctx->pc = 0x25b220u;
    ctx->f[13] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x25b224: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x25b224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x25b228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b22c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25B22Cu;
    {
        const bool branch_taken_0x25b22c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B22Cu;
        // 0x25b230: 0x4602ad82  mul.s       $f22, $f21, $f2 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b22c) {
            ctx->pc = 0x25B23Cu;
            goto label_25b23c;
        }
    }
    ctx->pc = 0x25B234u;
    // 0x25b234: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25B234u;
    {
        const bool branch_taken_0x25b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B234u;
        // 0x25b238: 0xe6040028  swc1        $f4, 0x28($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b234) {
            ctx->pc = 0x25B24Cu;
            goto label_25b24c;
        }
    }
    ctx->pc = 0x25B23Cu;
label_25b23c:
    // 0x25b23c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x25b23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b240: 0x0  nop
    ctx->pc = 0x25b240u;
    // NOP
    // 0x25b244: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25B244u;
    {
        const bool branch_taken_0x25b244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b244) {
            ctx->pc = 0x25B248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B244u;
            // 0x25b248: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B24Cu;
            goto label_25b24c;
        }
    }
    ctx->pc = 0x25B24Cu;
label_25b24c:
    // 0x25b24c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x25b24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x25b250: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x25b250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x25b254: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25b254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25b258: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x25b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x25b25c: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x25b25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b260: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x25b260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x25b264: 0xc096b9c  jal         func_25AE70
    ctx->pc = 0x25B264u;
    SET_GPR_U32(ctx, 31, 0x25B26Cu);
    ctx->pc = 0x25B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B264u;
    // 0x25b268: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AE70u, 0x25B264u, 0x25B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B26Cu;
label_25b26c:
    // 0x25b26c: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x25b26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b270: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x25b270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x25b274: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x25b274u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x25b278: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x25b278u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x25b27c: 0xc096b9c  jal         func_25AE70
    ctx->pc = 0x25B27Cu;
    SET_GPR_U32(ctx, 31, 0x25B284u);
    ctx->pc = 0x25B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B27Cu;
    // 0x25b280: 0x26050038  addiu       $a1, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AE70u, 0x25B27Cu, 0x25B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B284u;
label_25b284:
    // 0x25b284: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x25b284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b288: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x25b288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b28c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x25b28cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x25b290: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25b290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25b294: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x25b294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x25b298: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25b298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25b29c: 0x8ec29cf8  lw          $v0, -0x6308($s6)
    ctx->pc = 0x25b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941944)));
    // 0x25b2a0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x25b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x25b2a4: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x25b2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25b2a8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B2A8u;
    {
        const bool branch_taken_0x25b2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2A8u;
        // 0x25b2ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2a8) {
            ctx->pc = 0x25B2BCu;
            goto label_25b2bc;
        }
    }
    ctx->pc = 0x25B2B0u;
    // 0x25b2b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b2b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25B2B4u;
    {
        const bool branch_taken_0x25b2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b2b4) {
            ctx->pc = 0x25B2C0u;
            goto label_25b2c0;
        }
    }
    ctx->pc = 0x25B2BCu;
label_25b2bc:
    // 0x25b2bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b2c0:
    // 0x25b2c0: 0x5080004c  beql        $a0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x25B2C0u;
    {
        const bool branch_taken_0x25b2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b2c0) {
            ctx->pc = 0x25B2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B2C0u;
            // 0x25b2c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B3F4u;
            goto label_25b3f4;
        }
    }
    ctx->pc = 0x25B2C8u;
    // 0x25b2c8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x25b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b2cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b2d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25b2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b2d4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25b2d4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25b2d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25b2d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b2dc: 0x0  nop
    ctx->pc = 0x25b2dcu;
    // NOP
    // 0x25b2e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25B2E0u;
    {
        const bool branch_taken_0x25b2e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2E0u;
        // 0x25b2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2e0) {
            ctx->pc = 0x25B2ECu;
            goto label_25b2ec;
        }
    }
    ctx->pc = 0x25B2E8u;
    // 0x25b2e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25b2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b2ec:
    // 0x25b2ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25B2ECu;
    {
        const bool branch_taken_0x25b2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b2ec) {
            ctx->pc = 0x25B318u;
            goto label_25b318;
        }
    }
    ctx->pc = 0x25B2F4u;
    // 0x25b2f4: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x25b2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b2f8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25b2f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25b2fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25b2fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b300: 0x0  nop
    ctx->pc = 0x25b300u;
    // NOP
    // 0x25b304: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25B304u;
    {
        const bool branch_taken_0x25b304 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B304u;
        // 0x25b308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b304) {
            ctx->pc = 0x25B310u;
            goto label_25b310;
        }
    }
    ctx->pc = 0x25B30Cu;
    // 0x25b30c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25b30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b310:
    // 0x25b310: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x25B310u;
    {
        const bool branch_taken_0x25b310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b310) {
            ctx->pc = 0x25B314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B310u;
            // 0x25b314: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B3F4u;
            goto label_25b3f4;
        }
    }
    ctx->pc = 0x25B318u;
label_25b318:
    // 0x25b318: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
    ctx->pc = 0x25B318u;
    {
        const bool branch_taken_0x25b318 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B318u;
        // 0x25b31c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b318) {
            ctx->pc = 0x25B390u;
            goto label_25b390;
        }
    }
    ctx->pc = 0x25B320u;
    // 0x25b320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b324: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25b324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25b328: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25b328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x25b32c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x25b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x25b330: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x25b330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x25b334: 0x24875910  addiu       $a3, $a0, 0x5910
    ctx->pc = 0x25b334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 22800));
    // 0x25b338: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x25b338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x25b33c: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x25b33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x25b340: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x25b340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b344: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x25b344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b348: 0x24465908  addiu       $a2, $v0, 0x5908
    ctx->pc = 0x25b348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 22792));
    // 0x25b34c: 0x68c80007  ldl         $t0, 0x7($a2)
    ctx->pc = 0x25b34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x25b350: 0x6cc80000  ldr         $t0, 0x0($a2)
    ctx->pc = 0x25b350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x25b354: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x25b354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b358: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x25b358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b35c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x25b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x25b360: 0x24665900  addiu       $a2, $v1, 0x5900
    ctx->pc = 0x25b360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 22784));
    // 0x25b364: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x25b364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x25b368: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x25b368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x25b36c: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x25b36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b370: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x25b370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b378: 0xc096d10  jal         func_25B440
    ctx->pc = 0x25B378u;
    SET_GPR_U32(ctx, 31, 0x25B380u);
    ctx->pc = 0x25B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B378u;
    // 0x25b37c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B440u, 0x25B378u, 0x25B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B380u;
label_25b380:
    // 0x25b380: 0x8ec29cf8  lw          $v0, -0x6308($s6)
    ctx->pc = 0x25b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941944)));
    // 0x25b384: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x25b384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b388: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25B388u;
    {
        const bool branch_taken_0x25b388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B388u;
        // 0x25b38c: 0xe4400398  swc1        $f0, 0x398($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 920), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b388) {
            ctx->pc = 0x25B3F0u;
            goto label_25b3f0;
        }
    }
    ctx->pc = 0x25B390u;
label_25b390:
    // 0x25b390: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x25b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25b394: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25b394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x25b398: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x25b398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x25b39c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x25b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x25b3a0: 0x24655900  addiu       $a1, $v1, 0x5900
    ctx->pc = 0x25b3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22784));
    // 0x25b3a4: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x25b3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x25b3a8: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x25b3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x25b3ac: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x25b3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b3b0: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x25b3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b3b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x25b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x25b3b8: 0x24445908  addiu       $a0, $v0, 0x5908
    ctx->pc = 0x25b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22792));
    // 0x25b3bc: 0x68870007  ldl         $a3, 0x7($a0)
    ctx->pc = 0x25b3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x25b3c0: 0x6c870000  ldr         $a3, 0x0($a0)
    ctx->pc = 0x25b3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x25b3c4: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x25b3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b3c8: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x25b3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b3cc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x25b3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x25b3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3d4: 0x24c35910  addiu       $v1, $a2, 0x5910
    ctx->pc = 0x25b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 22800));
    // 0x25b3d8: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x25b3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x25b3dc: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x25b3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x25b3e0: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x25b3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b3e4: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x25b3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b3e8: 0xc096d10  jal         func_25B440
    ctx->pc = 0x25B3E8u;
    SET_GPR_U32(ctx, 31, 0x25B3F0u);
    ctx->pc = 0x25B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3E8u;
    // 0x25b3ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B440u, 0x25B3E8u, 0x25B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3F0u;
label_25b3f0:
    // 0x25b3f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x25b3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25b3f4:
    // 0x25b3f4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x25b3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25b3f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25b3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b3fc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x25b3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25b400: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25b400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b404: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x25b404u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x25b408: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x25b408u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b40c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x25b40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25b410: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x25b410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25b414: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x25b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25b418: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b41c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B41Cu;
        // 0x25b420: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B424u;
    // 0x25b424: 0x0  nop
    ctx->pc = 0x25b424u;
    // NOP
    ctx->pc = 0x25b428u;
}
