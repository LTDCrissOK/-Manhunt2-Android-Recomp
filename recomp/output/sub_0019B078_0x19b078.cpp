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

// Function: sub_0019B078
// Address: 0x19b078 - 0x19b190
void sub_0019B078_0x19b078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B078_0x19b078");
#endif

    switch (ctx->pc) {
        case 0x19b110u: goto label_19b110;
        case 0x19b118u: goto label_19b118;
        default: break;
    }

    ctx->pc = 0x19b078u;

    // 0x19b078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b07c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b080: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19b080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19b084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b088: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19b088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19b08c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19b08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19b090: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b094: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19B094u;
    {
        const bool branch_taken_0x19b094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B094u;
        // 0x19b098: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b094) {
            ctx->pc = 0x19B0C8u;
            goto label_19b0c8;
        }
    }
    ctx->pc = 0x19B09Cu;
    // 0x19b09c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b0a0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x19b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x19b0a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19b0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19b0a8: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x19b0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x19b0ac: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x19b0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
    // 0x19b0b0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x19b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x19b0b4: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x19b0b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
    // 0x19b0b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19b0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19b0bc: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x19b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
    // 0x19b0c0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x19B0C0u;
    {
        const bool branch_taken_0x19b0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0C0u;
        // 0x19b0c4: 0xaca00910  sw          $zero, 0x910($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0c0) {
            ctx->pc = 0x19B174u;
            goto label_19b174;
        }
    }
    ctx->pc = 0x19B0C8u;
label_19b0c8:
    // 0x19b0c8: 0x8c620910  lw          $v0, 0x910($v1)
    ctx->pc = 0x19b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2320)));
    // 0x19b0cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19B0CCu;
    {
        const bool branch_taken_0x19b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0CCu;
        // 0x19b0d0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0cc) {
            ctx->pc = 0x19B0F8u;
            goto label_19b0f8;
        }
    }
    ctx->pc = 0x19B0D4u;
    // 0x19b0d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b0d8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x19b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x19b0dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19b0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19b0e0: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x19b0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x19b0e4: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x19b0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
    // 0x19b0e8: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x19b0e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
    // 0x19b0ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19b0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19b0f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19B0F0u;
    {
        const bool branch_taken_0x19b0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0F0u;
        // 0x19b0f4: 0xfc821020  sd          $v0, 0x1020($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0f0) {
            ctx->pc = 0x19B174u;
            goto label_19b174;
        }
    }
    ctx->pc = 0x19B0F8u;
label_19b0f8:
    // 0x19b0f8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x19b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x19b0fc: 0x2444efe8  addiu       $a0, $v0, -0x1018
    ctx->pc = 0x19b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963176));
    // 0x19b100: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x19b100u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48EFECu));
    // 0x19b104: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x19b104u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x48EFF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EFF4u, _value); } while (0);
    // 0x19b108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19B108u;
    {
        const bool branch_taken_0x19b108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B108u;
        // 0x19b10c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b108) {
            ctx->pc = 0x19B124u;
            goto label_19b124;
        }
    }
    ctx->pc = 0x19B110u;
label_19b110:
    // 0x19b110: 0xc061fbe  jal         func_187EF8
    ctx->pc = 0x19B110u;
    SET_GPR_U32(ctx, 31, 0x19B118u);
    ctx->pc = 0x19B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B110u;
    // 0x19b114: 0x8c640fe4  lw          $a0, 0xFE4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EF8u, 0x19B110u, 0x19B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B118u;
label_19b118:
    // 0x19b118: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x19b118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19b11c: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x19B11Cu;
    {
        const bool branch_taken_0x19b11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b11c) {
            ctx->pc = 0x19B120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B11Cu;
            // 0x19b120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B178u;
            goto label_19b178;
        }
    }
    ctx->pc = 0x19B124u;
label_19b124:
    // 0x19b124: 0x2624efe8  addiu       $a0, $s1, -0x1018
    ctx->pc = 0x19b124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963176));
    // 0x19b128: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x19b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19b12c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B12Cu;
    {
        const bool branch_taken_0x19b12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B12Cu;
        // 0x19b130: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b12c) {
            ctx->pc = 0x19B138u;
            goto label_19b138;
        }
    }
    ctx->pc = 0x19B134u;
    // 0x19b134: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19b138:
    // 0x19b138: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B138u;
    {
        const bool branch_taken_0x19b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b138) {
            ctx->pc = 0x19B148u;
            goto label_19b148;
        }
    }
    ctx->pc = 0x19B140u;
    // 0x19b140: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x19b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19b144: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x19b144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_19b148:
    // 0x19b148: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x19B148u;
    {
        const bool branch_taken_0x19b148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b148) {
            ctx->pc = 0x19B110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b110;
        }
    }
    ctx->pc = 0x19B150u;
    // 0x19b150: 0xae400910  sw          $zero, 0x910($s2)
    ctx->pc = 0x19b150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2320), GPR_U32(ctx, 0));
    // 0x19b154: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x19b154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x19b158: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x19b158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x19b15c: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x19b15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x19b160: 0x348401ff  ori         $a0, $a0, 0x1FF
    ctx->pc = 0x19b160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)511);
    // 0x19b164: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19b164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b168: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x19b168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
    // 0x19b16c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19b16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19b170: 0xfc621020  sd          $v0, 0x1020($v1)
    ctx->pc = 0x19b170u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
label_19b174:
    // 0x19b174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19b178:
    // 0x19b178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19b178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b17c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19b17cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b180: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19b180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b184: 0x3e00008  jr          $ra
    ctx->pc = 0x19B184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B184u;
        // 0x19b188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B18Cu;
    // 0x19b18c: 0x0  nop
    ctx->pc = 0x19b18cu;
    // NOP
    ctx->pc = 0x19b190u;
}
