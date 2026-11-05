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

// Function: sub_00364278
// Address: 0x364278 - 0x364380
void sub_00364278_0x364278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364278_0x364278");
#endif

    switch (ctx->pc) {
        case 0x3642d8u: goto label_3642d8;
        case 0x3642f8u: goto label_3642f8;
        case 0x364304u: goto label_364304;
        case 0x364344u: goto label_364344;
        case 0x36435cu: goto label_36435c;
        default: break;
    }

    ctx->pc = 0x364278u;

    // 0x364278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36427c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x364280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x364280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x364284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x364284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364288: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x364288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36428c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36428cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x364294: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x364294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364298: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x364298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36429c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3642a0: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x3642a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x3642a4: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x3642a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x3642a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3642a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3642ac: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x3642ACu;
    {
        const bool branch_taken_0x3642ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3642B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3642ACu;
        // 0x3642b0: 0x442818  mult        $a1, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3642ac) {
            ctx->pc = 0x36430Cu;
            goto label_36430c;
        }
    }
    ctx->pc = 0x3642B4u;
    // 0x3642b4: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x3642b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x3642b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3642b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3642bc: 0x8e260068  lw          $a2, 0x68($s1)
    ctx->pc = 0x3642bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x3642c0: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x3642c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x3642c4: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x3642c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3642c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3642c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3642cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3642ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3642d0: 0xc0d9102  jal         func_364408
    ctx->pc = 0x3642D0u;
    SET_GPR_U32(ctx, 31, 0x3642D8u);
    ctx->pc = 0x3642D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3642D0u;
    // 0x3642d4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364408u, 0x3642D0u, 0x3642D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3642D8u;
label_3642d8:
    // 0x3642d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3642d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3642dc: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x3642dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3642e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3642E0u;
    {
        const bool branch_taken_0x3642e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3642E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3642E0u;
        // 0x3642e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3642e0) {
            ctx->pc = 0x3642F0u;
            goto label_3642f0;
        }
    }
    ctx->pc = 0x3642E8u;
    // 0x3642e8: 0x2039823  subu        $s3, $s0, $v1
    ctx->pc = 0x3642e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3642ec: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3642ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3642f0:
    // 0x3642f0: 0xc0d9080  jal         func_364200
    ctx->pc = 0x3642F0u;
    SET_GPR_U32(ctx, 31, 0x3642F8u);
    ctx->pc = 0x3642F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3642F0u;
    // 0x3642f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x3642F0u, 0x3642F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3642F8u;
label_3642f8:
    // 0x3642f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3642f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3642fc: 0xc0d9080  jal         func_364200
    ctx->pc = 0x3642FCu;
    SET_GPR_U32(ctx, 31, 0x364304u);
    ctx->pc = 0x364300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3642FCu;
    // 0x364300: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x3642FCu, 0x364304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364304u;
label_364304:
    // 0x364304: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x364304u;
    {
        const bool branch_taken_0x364304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364304u;
        // 0x364308: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x364304) {
            ctx->pc = 0x364360u;
            goto label_364360;
        }
    }
    ctx->pc = 0x36430Cu;
label_36430c:
    // 0x36430c: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x36430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x364310: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x364310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x364314: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x364314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x364318: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x364318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36431c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x364320: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x364320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x364324: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x364324u;
    {
        const bool branch_taken_0x364324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364324) {
            ctx->pc = 0x364328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364324u;
            // 0x364328: 0xae230068  sw          $v1, 0x68($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364334u;
            goto label_364334;
        }
    }
    ctx->pc = 0x36432Cu;
    // 0x36432c: 0x659823  subu        $s3, $v1, $a1
    ctx->pc = 0x36432cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x364330: 0xae250068  sw          $a1, 0x68($s1)
    ctx->pc = 0x364330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 5));
label_364334:
    // 0x364334: 0x10930009  beq         $a0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x364334u;
    {
        const bool branch_taken_0x364334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x364338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364334u;
        // 0x364338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364334) {
            ctx->pc = 0x36435Cu;
            goto label_36435c;
        }
    }
    ctx->pc = 0x36433Cu;
    // 0x36433c: 0xc0d9080  jal         func_364200
    ctx->pc = 0x36433Cu;
    SET_GPR_U32(ctx, 31, 0x364344u);
    ctx->pc = 0x364340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36433Cu;
    // 0x364340: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x36433Cu, 0x364344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364344u;
label_364344:
    // 0x364344: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x364344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x364348: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x364348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x36434c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x36434cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x364350: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x364350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x364354: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x364354u;
    SET_GPR_U32(ctx, 31, 0x36435Cu);
    ctx->pc = 0x364358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364354u;
    // 0x364358: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x364354u, 0x36435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36435Cu;
label_36435c:
    // 0x36435c: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x36435cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_364360:
    // 0x364360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x364360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x364364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x364368: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x364368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36436c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36436cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x364370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x364370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364374: 0x3e00008  jr          $ra
    ctx->pc = 0x364374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364374u;
        // 0x364378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36437Cu;
    // 0x36437c: 0x0  nop
    ctx->pc = 0x36437cu;
    // NOP
    ctx->pc = 0x364380u;
}
